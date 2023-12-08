/*
===============================================================================
    File:         rgbledccs.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-12
    Date Updated: 2023-11-19
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
    credentials(systemUserName, systemPassword)  // Initialize the userCredentials object
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
    // Retrieve the entered COM port number as QString
    QString comPortNumString = ui->lineEditCOMPortNum->text();
	
	// Exception handling if nothing is entered
    if (comPortNumString.isEmpty())
    {
        // Display connection failure to user
		ui->plainTextEditHWInitSystemFeedback->setPlainText("Please enter a COM port number.\nExample: 4");
        return;
    }

    // Create and configure the QSerialPort
    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM" + comPortNumString);
    COMPORT->setBaudRate(QSerialPort::BaudRate::Baud9600);
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
