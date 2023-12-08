/*
===============================================================================
    File:         sqlitecrudmodule.cpp
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

#include "sqlitecrudmodule.h"

// Constructor implimentation
// Establishes connection with the SQLite database and opens it
sqliteCRUDModule::sqliteCRUDModule()
{
    // Get the application's current working directory
    QString projectDir = QCoreApplication::applicationDirPath();

    // Construct the path to your database file
    QString dbPath = projectDir + "/database/RGB_LED_CCS_DB.db";

    // Initialize the SQLite database connection
    myDatabase = QSqlDatabase::addDatabase("QSQLITE");

    // Set the database path name
    myDatabase.setDatabaseName(dbPath);

    // Open the database
    myDatabase.open();
}


// Destructor implementation
sqliteCRUDModule::~sqliteCRUDModule()
{
    myDatabase.close();
}


// Function to SELECT all entries from the database to populate the listView widget
QList<QMap<QString, QVariant>> sqliteCRUDModule::readAllCubePatterns()
{
    // Create return variable
    QList<QMap<QString, QVariant>> result;

    // Check if the database is open
    if (myDatabase.isOpen())
    {
        // Create a query to select all entries from the cubePatterns table
        QSqlQuery query(myDatabase);

        // Prepare the SELECT query
        query.prepare("SELECT * FROM cubePatterns");

        // Execute the query
        if (query.exec())
        {
            // Retrieve the column names
            QStringList columnNames;
            for (int i = 0; i < query.record().count(); ++i)
            {
                // Collect the names of all columns in the result set
                columnNames.append(query.record().fieldName(i));
            }

            // Fetch the data
            while (query.next())
            {
                // Map each row's data to a QMap with column names as keys
                QMap<QString, QVariant> row;
                for (const QString &columnName : columnNames)
                {
                    // Populate the QMap with column name and corresponding values
                    row[columnName] = query.value(columnName);
                }

                // Append the QMap representing a row to the result list
                result.append(row);
            }
        }
    }

    // Return the result
    return result;
}


// Function to INSERT new entry INTO the database
void sqliteCRUDModule::createDatabaseEntry(QString patternName, QString patternString)
{
    if (myDatabase.isOpen())
    {
        // Create QSqlQuery object for the pattern database
        QSqlQuery query(myDatabase);

        // Prepare INSERT INTO query to add new entry into database
        query.prepare("INSERT INTO cubePatterns (patternName, patternString) VALUES (:patternName, :patternString)");

        // Bind patterName variable into query
        query.bindValue(":patternName", patternName);

        // Bind patterString variable into query
        query.bindValue(":patternString", patternString);

        // Execute query
        query.exec();
    }
}


// Function to SELECT entry from databse
QString sqliteCRUDModule::readDatabaseEntry(QString patternName)
{
    // Create return string
    QString patternString;

    if (myDatabase.isOpen())
    {
        // Create QSqlQuery object for the pattern database
        QSqlQuery query(myDatabase);

        // Prepare SELECT FROM query to read patternString for given patternName in the database
        query.prepare("SELECT patternString FROM cubePatterns WHERE patternName = :patternName");

        // Bind patterName variable into query
        query.bindValue(":patternName", patternName);

        // Execute query and obtain patternString from database
        if (query.exec() && query.next())
        {
            // Assign SELECTED patternString from database to return variable
            patternString = query.value("patternString").toString();
        }
    }

    // Return patternString obtained from database
    return patternString;
}


// Function to UPDATE database entry
void sqliteCRUDModule::updateDatabaseEntry(QString patternName, QString patternString)
{
    if (myDatabase.isOpen())
    {
        // Create QSqlQuery object for the pattern database
        QSqlQuery query(myDatabase);

        // Prepare UPDATE query to modify patternString of existing database entry
        query.prepare("UPDATE cubePatterns SET patternString = :patternString WHERE patternName = :patternName");

        // Bind patterName variable into query
        query.bindValue(":patternName", patternName);

        // Bind patterString variable into query
        query.bindValue(":patternString", patternString);

        // Execute query
        query.exec();
    }
}


// Function to DELETE database entry
void sqliteCRUDModule::deleteDatabaseEntry(QString patternName)
{
    if (myDatabase.isOpen())
    {
        // Create QSqlQuery object for the pattern database
        QSqlQuery query(myDatabase);

        // Use a prepared query to avoid SQL injection
        query.prepare("DELETE FROM cubePatterns WHERE patternName = :patternName");

        // Bind patterName variable into query
        query.bindValue(":patternName", patternName);

        // Execute query
        query.exec();
    }
}
