/*
===============================================================================
    File:         rgbledccs.h
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

#ifndef RGBLEDCCS_H
#define RGBLEDCCS_H

#include <QMainWindow>
#include <QString>
#include <QtSerialPort>

#include "usercredentials.h"

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

// UI even handling functions. buttonClicked
private slots:
    // Function to login to software and enables the hardware initialization tab
    // Handles login button clicked
    void loginButtonClicked();
    
	// Function to setup QSerialPort connection to arduino with dynamic COMPORT number assignment
    // and enables the cube control and database tabs
    // Handles hardware initialization button clicked
	void hardwareInitializationClicked();

private:
    // User Interface object
	Ui::RGBLEDCCS *ui;

    // Define string constants for system username and password
    static const QString systemUserName;
    static const QString systemPassword;

    // userCredentials object
    userCredentials credentials;
    QSerialPort* COMPORT;
};
#endif // RGBLEDCCS_H
