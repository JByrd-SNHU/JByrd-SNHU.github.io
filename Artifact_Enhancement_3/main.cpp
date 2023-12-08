/*
===============================================================================
    File:         main.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-12
    Date Updated: 2023-11-12
    Version:      1.0
    Class Name:   N/A
    Purpose:      This is the main function of the RGBLED Cube Control
                  Software. This is where program execution starts.
    Issues:       None at the moment.

===============================================================================
*/

#include "rgbledccs.h"

#include <QApplication>

// Main function where the program execution starts
int main(int argc, char *argv[])
{
    // Create a QApplication object, which is required for any Qt application
    QApplication a(argc, argv);

    // Create an instance of the RGBLEDCCS class
    RGBLEDCCS w;

    // Show the main window
    w.show();

    // Start the event loop and execute the application
    return a.exec();
}
