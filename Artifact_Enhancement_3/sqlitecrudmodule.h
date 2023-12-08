/*
===============================================================================
    File:         sqlitecrudmodule.h
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-28
    Date Updated: 2023-12-3
    Version:      1.0
    Class Name:   sqliteCRUDModule
    Purpose:      This class represents the database used to store cube
                  patterns. It has connection and CRUD(create, read, update,
                  delete) functionality.
    Issues:       None at the moment.

===============================================================================
*/

#ifndef SQLITECRUDMODULE_H
#define SQLITECRUDMODULE_H

#include <QtSql>

class sqliteCRUDModule
{
private:
    // SQlDatabase object to establish connection and make queries
    QSqlDatabase myDatabase;

public:
    // Constructor
    // Establishes connection with the SQLite database and opens it
    sqliteCRUDModule();

    // Destructor
    // Closes database connection
    ~sqliteCRUDModule();

    // Function to SELECT all entries from the database to populate the listView widget
    QList<QMap<QString, QVariant>> readAllCubePatterns();

    // Function to INSERT new entry INTO the database
    void createDatabaseEntry(QString patternName, QString patternString);

    // Function to SELECT entry from databse
    QString readDatabaseEntry(QString patternName);

    // Function to UPDATE database entry
    void updateDatabaseEntry(QString patternName, QString patternString);

    // Function to DELETE database entry
    void deleteDatabaseEntry(QString patternName);
};

#endif // SQLITECRUDMODULE_H
