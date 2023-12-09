/*
===============================================================================
    File:         usercredentials.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-12
    Date Updated: 2023-11-26
    Version:      1.0
    Class Name:   userCredentials
    Purpose:      This class contains the credentials for a user.
    Issues:       None at the moment.

===============================================================================
*/

#include "usercredentials.h"

// Constructor implementation with member initializer list
userCredentials::userCredentials(const QString& initialUserName, const QString& initialPassword)
    : userName(initialUserName), password(initialPassword)
{
    // No need for assignment statements here, all variables initialized in initializer list
}

// Destructor implementation
userCredentials::~userCredentials()
{
    // Add cleanup logic if needed
}

// checkCredentials function implementation
bool userCredentials::checkCredentials(const QString& enteredUserName, const QString& enteredPassword) const
{
    // Check if entered credentials match stored credentials
    return (userName == enteredUserName && password == enteredPassword);
}
