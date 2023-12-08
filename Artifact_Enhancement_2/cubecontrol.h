/*
===============================================================================
    File:         cubecontrol.h
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-22
    Date Updated: 2023-11-26
    Version:      1.0

    Class Name:   cubeControl
    Purpose:      This class represents the entire 4x4x4 RGB LED Cube
    Issues:       None at the moment.

===============================================================================
*/

#ifndef CUBECONTROL_H
#define CUBECONTROL_H

#include <QString>
#include "led.h"


class cubeControl
{
private:
    // 3D array of led objects to represent the LEDs in a 4x4x4 cube
    // Coordinates used are [x][y][z]
    // X coordinate maps: left to right - 0 to 3
    // Y coordinate maps: back to front - 0 to 3
    // Z coordinate maps: bottom to top - 0 to 3
    led cubeLeds[4][4][4];

    // 2D constant arrays to store COMPORT bit-string index for each LED input in the cube
    // LEDs at locations [x][y][0], [x][y][1], [x][y][2], [x][y][3] all share the same input bits
    // Only 2 dimensions are needed based on hardware configuration described above
    // Coordinates used are [x][y]

    // 2D constant array to store COMPORT bit-string index for each red LED input
    const int redIndexes[4][4] = {{16,  19, 22, 25},
                                  {11,   8,  3,  0},
                                  {42,  45, 48, 51},
                                  {37,  34, 29, 26}};

    // 2D constant array to store COMPORT bit-string index for each green LED input
    const int greenIndexes[4][4] = {{15, 18, 21, 24},
                                    {12,  9,  4,  1},
                                    {41, 44, 47, 50},
                                    {38, 35, 30, 27}};

    // 2D constant array to store COMPORT bit-string index for each green LED input
    const int blueIndexes[4][4] = {{14, 17, 20, 23},
                                   {13, 10,  5,  2},
                                   {40, 43, 46, 49},
                                   {39, 36, 31, 28}};

    // 1D constant arrays to store COMPORT bit-string index for each RGB LED output(ground)
    // All LEDs on a given layer share the same output(ground) bit.
    // [*][*][0], [*][*][1], [*][*][2], [*][*][3]
    // Only 1 dimensions is needed based on hardware configuration described above
    // Coordinate used is [z]
    const int groundIndexes[4] = {32,33,7,6};

public:
    // Constructor
    cubeControl();

    // Destructor
    ~cubeControl();

    // Function to update the LED color at the specified position in the cube
    // For further information on color values see led.h
    void updateLED(int x, int y, int z, int color);

    // Function to get the COMPORT bit-string for a given [x][*][z] slice of the cube
    // Due to limitations on hardware communication speed and power capabilities
    // all three colors of 4 different RGB LEDs must be lit at once
    QString getBitString(int x, int z) const;
};

#endif // CUBECONTROL_H
