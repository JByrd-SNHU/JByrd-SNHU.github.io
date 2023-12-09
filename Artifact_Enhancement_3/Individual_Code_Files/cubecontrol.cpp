/*
===============================================================================
    File:         cubecontrol.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-22
    Date Updated: 2023-12-3
    Version:      1.0

    Class Name:   cubeControl
    Purpose:      This class represents the entire 4x4x4 RGB LED Cube
    Issues:       None at the moment.

===============================================================================
*/

#include "cubecontrol.h"

// Constructor implementation with member initializer list
cubeControl::cubeControl()
    : cubeLeds{} // Initialize cubeLeds to default-constructed led objects
{
    // Initialize cubeLeds index member variables using nested loops
    for (int x = 0; x < 4; x++)         // Loop through all viable X coordinates
    {
        for (int y = 0; y < 4; y++)     // Loop through all viable Y coordinates
        {
            for (int z = 0; z < 4; z++) // Loop through all viable Z coordinates
            {
                // Initialize each led's index variables based off of 2D constant arrays in header
                cubeLeds[x][y][z].setIndexRed(redIndexes[x][y]);
                cubeLeds[x][y][z].setIndexGreen(greenIndexes[x][y]);
                cubeLeds[x][y][z].setIndexBlue(blueIndexes[x][y]);
            }
        }
    }
}

// Destructor implementation
cubeControl::~cubeControl()
{
    // Add cleanup logic if needed
}

// Function to update the LED color at the specified [x][y][z] position
void cubeControl::updateLED(int x, int y, int z, int color)
{
    // call led.updateColor to update specified LED's color
    // For further information on color values see led.h
    cubeLeds[x][y][z].updateColor(color);
}

// Function to get the COMPORT bit-string for a given [x][*][z] slice of the cube
QString cubeControl::getBitString(int x, int z) const
{
    // Int array to build COMPORT bit-string based on led indexes
    int bitStringPlaceHolder[52] = {0};

    // Temporary QString variable to return created bit-string
    QString tempString;

    // Clear tempString
    tempString.clear();

    // Set bit for ground pin corresponding to provided z coordinate
    bitStringPlaceHolder[groundIndexes[z]] = 1;

    // Loop through all viable Y coordinates
    for (int y = 0; y < 4; y++)
    {
        // If the red LED at position [x][y][z] is enabled
        if (cubeLeds[x][y][z].isLightRed())
        {
            // Get the red LED bit-string index and set that index of the int array to 1
            bitStringPlaceHolder[cubeLeds[x][y][z].getIndexRed()] = 1;
        }

        // If the green LED at position [x][y][z] is enabled
        if (cubeLeds[x][y][z].isLightGreen())
        {
            // Get the green LED bit-string index and set that index of the int array to 1
            bitStringPlaceHolder[cubeLeds[x][y][z].getIndexGreen()] = 1;
        }

        // If the blue LED at position [x][y][z] is enabled
        if (cubeLeds[x][y][z].isLightBlue())
        {
            // Get the blue LED bit-string index and set that index of the int array to 1
            bitStringPlaceHolder[cubeLeds[x][y][z].getIndexBlue()] = 1;
        }
    }

    // Loop through all 52 bits of bit-string
    // 16 input bits per color
    // 3 colors per LED
    // 4 output(ground) bits
    // (16 x 3) + 4 = (48) + 4 = 52bits
    for (int bitStringIndex = 0; bitStringIndex < 52; bitStringIndex++)
    {
        // If place holder array value at index bitStringIndex is 1
        if(bitStringPlaceHolder[bitStringIndex] == 1)
        {
            // Append 1 to bitstring
            tempString.append('1');
        }
        else    // If place holder array value at index bitStringIndex is 0
        {
            // Append 0 to bitstring
            tempString.append('0');
        }
    }

    // Return the COMPORT bit-string for the given [x][*][z] slice of the cube
    return tempString;
}


// Function to get the current state of the cube to insert into the database
QString cubeControl::getCurrentCubeState() const
{
    // String to be returned
    QString currentCubeState = "";

    // Nested for loops to iterate through all 64 LEDs
    for(int x = 0; x < 4; x++)          // Loop through all viable X coordinates
    {
        for(int y = 0; y < 4; y++)      // Loop through all viable Y coordinates
        {
            for(int z = 0; z < 4; z++)  // Loop through all viable Z coordinates
            {
                // Retrieve color value of led at [x][y][z]
                // Convert int value to string
                // Append converted value to currentCubeState String for return
                currentCubeState.append(std::to_string(cubeLeds[x][y][z].getCurrentColor()));
            }
        }
    }

    // Return populated currentCubeState string
    return currentCubeState;
}
