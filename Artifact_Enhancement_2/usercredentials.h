/*
===============================================================================
    File:         usercredentials.h
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

#ifndef USERCREDENTIALS_H
#define USERCREDENTIALS_H

#include <QString>

class userCredentials
{
private:
    QString userName;   // Stores the user's username
    QString password;   // Stores the user's password

public:
    // Constructor that takes in userName and password
    userCredentials(const QString& initialUserName, const QString& initialPassword);

    // Destructor
    ~userCredentials();

    // Check credentials function
    bool checkCredentials(const QString& enteredUserName, const QString& enteredPassword) const;
};

#endif // USERCREDENTIALS_H
