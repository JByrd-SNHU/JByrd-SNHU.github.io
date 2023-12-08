/*
===============================================================================
    File:         rgbledccs.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-12
    Date Updated: 2023-12-3
    Version:      1.0
    Class Name:   RGBLEDCCS
    Purpose:      This class represents the control software for the 4x4x4
                  RGB LED Cube.
    Issues:       None at the moment.

===============================================================================
*/

#include "rgbledccs.h"
#include "ui_rgbledccs.h"
#include "usercredentials.h"

// Define string constants for system username and password
const QString RGBLEDCCS::systemUserName = "MyUserName";
const QString RGBLEDCCS::systemPassword = "MyPassword";


// Constructor implementation with member initializer list
RGBLEDCCS::RGBLEDCCS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RGBLEDCCS),
    credentials(systemUserName, systemPassword),    // Initialize the userCredentials object
    myCube(),                                       // Initialize the cubeControl object
    patternDatabase()                               // Initialize the sqliteCRUDModule object
{
    // Setup User Interface
    ui->setupUi(this);

    // Disable All Tabs but Login
    ui->tabWidget->setTabEnabled(1, false);  // Disable Hardware Init tab
    ui->tabWidget->setTabEnabled(2, false);  // Disable Cube Control tab
    ui->tabWidget->setTabEnabled(3, false);  // Disable Database tab

    // Connect the clicked() signal of pushButtonLogin to the loginButtonClicked() slot
    connect(ui->pushButtonLogin, &QPushButton::clicked, this, &RGBLEDCCS::loginButtonClicked);

    // Connect the clicked() signal of pushButtonCOMPort to the hardwareInitializationClicked() slot
    connect(ui->pushButtonCOMPort, &QPushButton::clicked, this, &RGBLEDCCS::hardwareInitializationClicked);

    // Connect the clicked() signal of pushButtonSendToCube to the sendDataToCube() slot
    connect(ui->pushButtonSendToCube, &QPushButton::clicked, this, &RGBLEDCCS::sendDataToCube);

    // Connect the clicked() signal of pushButtonClearCube to the clearCube() slot
    connect(ui->pushButtonClearCube, &QPushButton::clicked, this, &RGBLEDCCS::clearCube);

    // Connect Database CRUD buttons with corresponding slots
    // Connect the clicked() signal of pushButtonCreate to the createDatabasePattern() slot
    connect(ui->pushButtonCreate, &QPushButton::clicked, this, &RGBLEDCCS::createDatabasePattern);

    // Connect the clicked() signal of pushButtonRead to the readDatabasePattern() slot
    connect(ui->pushButtonRead, &QPushButton::clicked, this, &RGBLEDCCS::readDatabasePattern);

    // Connect the clicked() signal of pushButtonUpdate to the updateDatabasePattern() slot
    connect(ui->pushButtonUpdate, &QPushButton::clicked, this, &RGBLEDCCS::updateDatabasePattern);

    // Connect the clicked() signal of pushButtonDelete to the deleteDatabasePattern() slot
    connect(ui->pushButtonDelete, &QPushButton::clicked, this, &RGBLEDCCS::deleteDatabasePattern);

    // Populate the 3D array of QComboBoxes
    populateComboBoxArray();

    // Populate the database listView with current patterns from the database
    importCurrentPatterns();
}


// Destructor implementation
RGBLEDCCS::~RGBLEDCCS()
{
    // Delete User Interface
    delete ui;
}


// Function to login to software and enable hardware initialization tab
void RGBLEDCCS::loginButtonClicked()
{
    // Retrieve the entered username and password
    QString enteredUserName = ui->lineEditUserName->text();
    QString enteredPassword = ui->lineEditPassword->text();

    // Check credentials using the credentials object
    if (credentials.checkCredentials(enteredUserName, enteredPassword))
    {
        // Update feedback
        ui->plainTextEditLoginSystemFeedback->setPlainText("Login Successful\n\nMove on to Hardware Initialization.");

        // Credentials match, enable Hardware Init tab
        ui->tabWidget->setTabEnabled(1, true);

        // Disable Login Button
        ui->pushButtonLogin->setEnabled(false);
    }
    else
    {
        // Update feedback
        ui->plainTextEditLoginSystemFeedback->setPlainText("Login Failed");
    }
}


// Function to setup QSerialPort connection to arduino with dynamic COMPORT number assignment
// and enables the cube control and database tabs
void RGBLEDCCS::hardwareInitializationClicked()
{
    // Retrieve the entered COMPORT number as QString
    QString comPortNumString = ui->lineEditCOMPortNum->text();

    // Exception handling if nothing is entered
    if (comPortNumString.isEmpty())
    {
        // Display connection failure to user
        ui->plainTextEditHWInitSystemFeedback->setPlainText("Please enter a COM port number.\nExample: 4");
        return;
    }

    // Create and configure the QSerialPort object
    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM" + comPortNumString);
    COMPORT->setBaudRate(3686400);
    COMPORT->setParity(QSerialPort::Parity::NoParity);
    COMPORT->setDataBits(QSerialPort::DataBits::Data8);
    COMPORT->setStopBits(QSerialPort::StopBits::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);

    // Open the serial port
    if (COMPORT->open(QIODevice::ReadWrite))
    {
        // Display connection success to user
        ui->plainTextEditHWInitSystemFeedback->setPlainText("Serial Port is Connected.");

        // Disable Hardware Initialization Button
        ui->pushButtonCOMPort->setEnabled(false);

        // Hardware Initialized, enable Cube Control and Database tabs
        ui->tabWidget->setTabEnabled(2, true);
        ui->tabWidget->setTabEnabled(3, true);
    }
    else
    {
        // Display connection failure to user
        ui->plainTextEditHWInitSystemFeedback->setPlainText("Serial Port is not Connected.\nExample: 4");
    }
}


// Function to change combo box color and led value when index changes
void RGBLEDCCS::comboBoxIndexChanged(int index)
{
    // Access the sender() to get the QComboBox that emitted the signal
    QComboBox* comboBox = qobject_cast<QComboBox*>(sender());

    // Execute if comboBox is found
    if (comboBox)
    {
        // Get the QComboBox object name
        QString objectName = comboBox->objectName();

        // Variables for extracted numerical values from the object name
        int x = 0, y = 0, z = 0;

        // Get the X, Y, and Z values from the QComboBox object name and record how many values were extracted
        int count = sscanf(objectName.toStdString().c_str(), "comboBoxX%dY%dZ%d", &x, &y, &z);

        // If three values were extracted from the QComboBox name execute
        if (count == 3)
        {
            // Call the colorComboBox function to update the color of the comboBox
            colorComboBox(x, y, z, index);

            // Call cubeControl.updateLED function to update the color of the LED
            myCube.updateLED(x, y, z, index);
        }
    }
}


// Function to send current state of myCube object over COMPORT to the cube for specified amount of time
void RGBLEDCCS::sendDataToCube()
{
    // Execute only if COMPORT is open
    if (COMPORT->isOpen()) {
        // Retrieve time in seconds from lineEditTimeActive widget
        QString timeActiveString = ui->lineEditTimeActive->text();

        // Bool regarding if the value provided is an integer
        bool isInteger;

        // Convert the string to an integer and check if the conversion was successful
        int timeActive = timeActiveString.toInt(&isInteger);

        // If data was provided and is an integer
        if (isInteger && !timeActiveString.isEmpty())
        {
            // 2D array to store bit-strings for each [x][*][z] slice of cube as QStrings
            QString bitStrings[4][4];

            // 2D array to store bit-strings for each [x][*][z] slice of cube as QByteArrays
            QByteArray datas[4][4];

            // Variable to store bit-string for all lights off as QString
            QString bitStringOff = "0000000000000000000000000000000000000000000000000000";

            // Variable to store bit-string for all lights off as QByteArray
            QByteArray dataOff = bitStringOff.toUtf8() + "\n";;

            // Nested loops to iterate through all 16 [x][*][z] slices
            for (int z = 0; z < 4; z++)     // Loop through all viable Z coordinates
            {
                for (int x = 0; x < 4; x++) // Loop through all viable X coordinates
                {
                    // Retrieve bit-string for cube slice at position [x][*][z] and store in bitStrings[x][z]
                    bitStrings[x][z] = myCube.getBitString(x, z);

                    // Convert bitString[x][z] to QByteArray and store in datas[x][z]
                    datas[x][z] = bitStrings[x][z].toUtf8() + "\n";
                }
            }

            // Variable used to capture start time of execution loop
            std::time_t startTime = std::time(nullptr);

            // Variable used to capture current time of execution loop
            std::time_t currentTime = std::time(nullptr);

            // Execution loop.
            // To accommodate hardware speed and power limitations only one [x][*][z]
            // slice of the cube is lit at a given time. To give the illusion that the whole
            // cube is lit, all 16 [x][*][z] slices need to be cycled at a speed that
            // the human eye cannot perceive.

            // Run execution loop as long as startTime - currentTime < timeActive(specified by user)
            while (std::difftime(currentTime, startTime) < timeActive)
            {
                for (int z = 0; z < 4; z++)     // Loop through all viable Z coordinates
                {
                    for (int x = 0; x < 4; x++) // Loop through all viable X coordinates
                    {
                        // Write cube slice data at position [x][*][z] to Arduino over COMPORT
                        COMPORT->write(datas[x][z]);

                        // This statement is needed to allow for timing to execute properly.
                        // If this statement is not here, the RGBLEDCCS will run faster than
                        // the COMPORT which leads to too many bit-strings being sent buffered
                        // into the COMPORT.By adding this statement, the RGBLEDCCS will wait
                        // to send the next bit-string until the COMPORT finishes sending
                        // the current bit-string.
                        while(COMPORT->waitForBytesWritten(1000))
                        {

                        }
                    }
                }

                // Update currentTime for next loop evaluation
                currentTime = std::time(nullptr);
            }

            // Once execution loop has run for specified ammount of time, turn the cube off
            COMPORT->write(dataOff);
        }
        else    // Executes if no time was specified or value entered was not an integer
        {
            // Display feedback to the user regarding improper timing value entered
            ui->lineEditTimeActive->setText("Please enter an integer! EX:5");
        }
    }
}


// Function to reset the cube
// Set all colors of all LEDs to off
// Set all combo box indexes to off
// Set color of all combo boxes to off
void RGBLEDCCS::clearCube()
{
    // Nested for loops to iterate through all 64 LEDs
    for(int x = 0; x < 4; x++)          // Loop through all viable X coordinates
    {
        for(int y = 0; y < 4; y++)      // Loop through all viable Y coordinates
        {
            for(int z = 0; z < 4; z++)  // Loop through all viable Z coordinates
            {
                // Set LED color at position [x][y][z] to black(off)
                myCube.updateLED(x,y,z,0);

                // Set combo box index at position [x][y][z] to black(off)
                comboBoxArray[x][y][z]->setCurrentIndex(0);

                // Set color of combo box at position [x][y][z] to black(off)
                colorComboBox(x,y,z,0);
            }
        }
    }
}


// Function to create new pattern in database
void RGBLEDCCS::createDatabasePattern()
{
    // Retrieve new pattern name
    QString newPatternName= ui->lineEditPatternNameCreate->text();

    // Check for pattern name entry
    if (!newPatternName.isEmpty())
    {
        // Check if pattern name entered already exists in the database
        if (!checkCurrentPatternNames(newPatternName))
        {
            // Get the pattern string for the new database entry
            QString patternString = myCube.getCurrentCubeState();

            // Add new entry into the database
            patternDatabase.createDatabaseEntry(newPatternName, patternString);

            // Refresh available patterns from the database
            importCurrentPatterns();

            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("Pattern '" + newPatternName + "' successfully added to the database!\n\nPattern entered:\n" + patternString);
        }
        else
        {
            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("This pattern name is already in the database.\n\nPlease select a new name not already in the database.");
        }
    }
    else
    {
        // Update system feedback no name entered
        ui->plainTextEditDatabaseSystemFeedback->setPlainText("No name was entered.\n\nPlease enter a name in the create pattern name text area.");
    }
}


// Function to read pattern from database
void RGBLEDCCS::readDatabasePattern()
{
    // Retrieve pattern name to read
    QString patternName= ui->lineEditPatternNameRead->text();

    // Check for pattern name entry
    if (!patternName.isEmpty())
    {
        // Check if pattern is located within the database
        if (checkCurrentPatternNames(patternName))
        {
            // Get the pattern string from the database
            QString patternString = patternDatabase.readDatabaseEntry(patternName);

            // Load pattern from the database and apply it to myCube and the UI
            importCubeData(patternString);

            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("Pattern '" + patternName + "' successfully loaded from the the database!\n\nPattern loaded:\n" + patternString);
        }
        else
        {
            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("This pattern name was not found in the database.\n\nPlease select a pattern name that is in the database.");
        }
    }
    else
    {
        // Update system feedback no name entered
        ui->plainTextEditDatabaseSystemFeedback->setPlainText("No name was entered.\n\nPlease enter a name in the read pattern name text area.");
    }
}


// Function to update pattern in database
void RGBLEDCCS::updateDatabasePattern()
{
    // Retrieve pattern name to update
    QString patternName= ui->lineEditPatternNameUpdate->text();

    // Check for pattern name entry
    if (!patternName.isEmpty())
    {
        // Check if pattern is located within the database
        if (checkCurrentPatternNames(patternName))
        {
            // Get the updated pattern string to update the database entry
            QString patternString = myCube.getCurrentCubeState();

            // Update database entry with the new pattern String
            patternDatabase.updateDatabaseEntry(patternName, patternString);

            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("Pattern '" + patternName + "' successfully updated in the database!\n\nPattern entered:\n" + patternString);
        }
        else
        {
            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("This pattern name was not found in the database.\n\nPlease select a pattern name that is in the database.");
        }
    }
    else
    {
        // Update system feedback no name entered
        ui->plainTextEditDatabaseSystemFeedback->setPlainText("No name was entered.\n\nPlease enter a name in the update pattern name text area.");
    }
}


// Function to delete pattern in database
void RGBLEDCCS::deleteDatabasePattern()
{
    // Retrieve pattern name to delete
    QString patternName= ui->lineEditPatternNameDelete->text();

    // Check for pattern name entry
    if (!patternName.isEmpty())
    {
        // Check if pattern is located within the database
        if (checkCurrentPatternNames(patternName))
        {
            // Delete pattern from the database
            patternDatabase.deleteDatabaseEntry(patternName);

            // Refresh available patterns from the database
            importCurrentPatterns();

            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("Pattern '" + patternName + "' successfully deleted from the the database!");
        }
        else
        {
            // Update System Feedback
            ui->plainTextEditDatabaseSystemFeedback->setPlainText("This pattern name was not found in the database.\n\nPlease select a pattern name that is in the database.");
        }
    }
    else
    {
        // Update system feedback no name entered
        ui->plainTextEditDatabaseSystemFeedback->setPlainText("No name was entered.\n\nPlease enter a name in the delete pattern name text area.");
    }
}

// Function to populate comboBoxArray[4][4][4] with UI widgets, setup call back functionality, and initialize widget colors
void RGBLEDCCS::populateComboBoxArray()
{
    // Nested for loops to iterate through all 64 combo boxes corresponding to each LED in the cube
    for (int x = 0; x < 4; x++)         // Loop through all viable X coordinates
    {
        for (int y = 0; y < 4; y++)     // Loop through all viable Y coordinates
        {
            for (int z = 0; z < 4; z++) // Loop through all viable Z coordinates
            {
                // Get the object name for the current QComboBox. Naming convention was comboBoxX#Y#Z#
                QString comboBoxObjectName = QString("comboBoxX%1Y%2Z%3").arg(x).arg(y).arg(z);

                // Find the QComboBox in the UI using its object name
                comboBoxArray[x][y][z] = findChild<QComboBox*>(comboBoxObjectName);

                // Check if the QComboBox is found
                if (comboBoxArray[x][y][z])
                {
                    // Set the background color to black
                    comboBoxArray[x][y][z]->setStyleSheet("QComboBox { background-color: black; color: white; }");

                    // Connect the currentIndexChanged signal to the custom slot. Sets up event handling for when index changes
                    connect(comboBoxArray[x][y][z], QOverload<int>::of(&QComboBox::currentIndexChanged), this, &RGBLEDCCS::comboBoxIndexChanged);
                }
            }
        }
    }
}


// Function used to change the foreground and background color of a given comboBox based off of its index
void RGBLEDCCS::colorComboBox(int x, int y, int z, int index)
{
    // Access the corresponding QComboBox in the array
    QComboBox* comboBox = comboBoxArray[x][y][z];

    // Execute if comboBox is found
    if (comboBox)
    {
        // Variables to store forground and background color values
        QString foregroundColor;
        QString backgroundColor;

        // Set the background and foreground colors based on the selected index
        switch (index)
        {
        case 0:     // 0 - black(off)
            backgroundColor = "black";
            foregroundColor = "white";
            break;
        case 1:     // 1 - red
            backgroundColor = "red";
            foregroundColor = "black";
            break;
        case 2:     // 2 - green
            backgroundColor = "green";
            foregroundColor = "white";
            break;
        case 3:     // 3 - blue
            backgroundColor = "blue";
            foregroundColor = "white";
            break;
        case 4:     // 4 - yellow
            backgroundColor = "yellow";
            foregroundColor = "black";
            break;
        case 5:     // 5 - purple
            backgroundColor = "purple";
            foregroundColor = "white";
            break;
        case 6:     // 6 - cyan
            backgroundColor = "cyan";
            foregroundColor = "black";
            break;
        case 7:     // 7 - white
            backgroundColor = "white";
            foregroundColor = "black";
            break;
        default:    // 0 - black(off)
            backgroundColor = "black";
            foregroundColor = "white";
            break;
        }

        // Set the background and foreground colors of the QComboBox
        comboBox->setStyleSheet(QString("QComboBox { background-color: %1; color: %2; }").arg(backgroundColor).arg(foregroundColor));
    }
}


// Function to parse QString of size 64 to load patterns from database to cube
void RGBLEDCCS::importCubeData(QString colors)
{
    // Int array to store parsed integer color values from database string
    int colorArray[64];

    // Loop through all 64 characters from database
    for(int l = 0; l < 64; l++)
    {
        // Convert character at position l to integer and store in colorArray at position l
        colorArray[l] = colors.at(l).digitValue();
    }

    // Counter variable to iterate through indexArray
    int counter = 0;

    // Nested for loops to iterate through all 64 LEDs
    for(int x = 0; x < 4; x++)          // Loop through all viable X coordinates
    {
        for(int y = 0; y < 4; y++)      // Loop through all viable Y coordinates
        {
            for(int z = 0; z < 4; z++)  // Loop through all viable Z coordinates
            {
                // Set LED color at position [x][y][z] to color specified by colorArray[counter]
                myCube.updateLED(x,y,z,colorArray[counter]);

                // Set combo box index at position [x][y][z] to color specified by colorArray[counter]
                comboBoxArray[x][y][z]->setCurrentIndex(colorArray[counter]);

                // Set color of combo box at position [x][y][z] to color specified by colorArray[counter]
                colorComboBox(x,y,z,colorArray[counter]);

                // Increment counter
                counter++;
            }
        }
    }
}


// Function to run full query on database and populate ListView on UI
void RGBLEDCCS::importCurrentPatterns()
{
    // Assuming listViewCurrentPatterns is a member of your class

    // Fetch the data
    QList<QMap<QString, QVariant>> data = patternDatabase.readAllCubePatterns();

    // Create a QStringListModel to hold the data
    QStringListModel *model = new QStringListModel();

    // Extract patternName data and populate the model
    QStringList patternNames;
    for (const auto &rowData : data) {
        if (rowData.contains("patternName")) {
            patternNames << rowData["patternName"].toString();
        }
    }

    // Set the model's string list to patternNames
    model->setStringList(patternNames);

    // Set the model to the existing QListView
    ui->listViewCurrentPatterns->setModel(model);

    // Show the QTableView
    ui->listViewCurrentPatterns->show();
}


// Function to search current database patternNames to see if a name already exists
bool RGBLEDCCS::checkCurrentPatternNames(const QString targetPatternName)
{
    // Fetch the data
    QList<QMap<QString, QVariant>> data = patternDatabase.readAllCubePatterns();

    // Iterate through the patterns and check for a match
    for (const auto& pattern : data) {
        QVariant patternNameValue = pattern.value("patternName");

        // Assuming "patternName" is the name of the column in your database
        if (patternNameValue.isValid() && patternNameValue.toString() == targetPatternName) {
            // Match found
            return true;
        }
    }

    // No match found
    return false;
}
