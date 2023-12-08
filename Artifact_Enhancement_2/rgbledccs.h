/*
===============================================================================
    File:         rgbledccs.h
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-12
    Date Updated: 2023-11-26
    Version:      1.0
    Class Name:   RGBLEDCCS
    Purpose:      This class represents the control software for the 4x4x4
                  RGB LED Cube.
    Issues:       None at the moment.

===============================================================================
*/

#ifndef RGBLEDCCS_H
#define RGBLEDCCS_H

#include <QMainWindow>
#include <QString>
#include <QtSerialPort>
#include <QComboBox>
#include <ctime>

#include "usercredentials.h"
#include "cubecontrol.h"

QT_BEGIN_NAMESPACE
namespace Ui { class RGBLEDCCS; }
QT_END_NAMESPACE

class RGBLEDCCS : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor
    RGBLEDCCS(QWidget *parent = nullptr);

    // Destructor
    ~RGBLEDCCS();

// UI even handling functions. buttonClicked or comboBoxIndexChanged
private slots:
    // Function to login to software and enables the hardware initialization tab
    // Handles login button clicked
    void loginButtonClicked();

    // Function to setup QSerialPort connection to arduino with dynamic COMPORT number assignment
    // and enables the cube control and database tabs
    // Handles hardware initialization button clicked
    void hardwareInitializationClicked();

    // Function to change combo box color and led value when index changes
    // Handles combo box index change
    void comboBoxIndexChanged(int index);

    // Function to send current state of myCube object over COMPORT to the cube for specified
    // amount of time
    // Handles send to cube button clicked
    void sendDataToCube();

    // Function to reset the cube
    // Set all colors of all LEDs to off
    // Set all combo box indexes to off
    // Set color of all combo boxes to off
    // Handles clear cube button clicked
    void clearCube();

    // Temporary functions to display execution of importCubeData function
    // Handle temporary test buttons clicked
    void test1();
    void test2();
    void test3();
    void test4();
    void test5();

private:
    // User Interface object
    Ui::RGBLEDCCS *ui;

    // Define string constants for system username and password
    static const QString systemUserName;
    static const QString systemPassword;

    // userCredentials object
    userCredentials credentials;

    // cubeControl object
    cubeControl myCube;

    // QSerialPort object
    QSerialPort* COMPORT;

    // 3D array of QComboBoxes
    QComboBox* comboBoxArray[4][4][4];

    // Function to populate the 3D array of QComboBoxes
    void populateComboBoxArray();

    // Function to set the background color of a QComboBox based on the selected index
    void colorComboBox(int x, int y, int z, int index);

    //Function to import cube state from database
    void importCubeData(QString colors);
};
#endif // RGBLEDCCS_H
