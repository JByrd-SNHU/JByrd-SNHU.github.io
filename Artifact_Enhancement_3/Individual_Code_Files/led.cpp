/*
===============================================================================
    File:         led.cpp
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-21
    Date Updated: 2023-12-2
    Version:      1.0
    Class Name:   led
    Purpose:      This class represents a single RGB LED within the 4x4x4 RGB
                  LED Cube
    Issues:       None at the moment.

===============================================================================
*/

#include "led.h"

// Constructor implementation with member initializer list
led::led()
    : indexRed(0), indexGreen(0), indexBlue(0), currentColor(0),
    lightRed(false), lightGreen(false), lightBlue(false)
{
    // No need for assignment statements here, all variables initialized in initializer list
}

// Destructor implementation
led::~led()
{
    // Add cleanup logic if needed
}

// Function to update the LED color based on the input color
void led::updateColor(int color)
{
    // Update the LED color based on the input color
    switch (color)
    {
    case 0:     // 0 - black(off)
        lightRed = false;
        lightGreen = false;
        lightBlue = false;
        currentColor = color;
        break;        
    case 1:     // 1 - red
        lightRed = true;
        lightGreen = false;
        lightBlue = false;
        currentColor = color;
        break;
    case 2:     // 2 - green
        lightRed = false;
        lightGreen = true;
        lightBlue = false;
        currentColor = color;
        break;
    case 3:     // 3 - blue
        lightRed = false;
        lightGreen = false;
        lightBlue = true;
        currentColor = color;
        break;
    case 4:     // 4 - yellow - red + green
        lightRed = true;
        lightGreen = true;
        lightBlue = false;
        currentColor = color;
        break;
    case 5:     // 5 - purple - red + blue
        lightRed = true;
        lightGreen = false;
        lightBlue = true;
        currentColor = color;
        break;
    case 6:     // 6 - cyan - green + blue
        lightRed = false;
        lightGreen = true;
        lightBlue = true;
        currentColor = color;
        break;
    case 7:     // 7 - white - red + green + blue
        lightRed = true;
        lightGreen = true;
        lightBlue = true;
        currentColor = color;
        break;
    default:    // 0 - black(off)
        lightRed = false;
        lightGreen = false;
        lightBlue = false;
        currentColor = color;
        break;
    }
}

// Getter functions for member variables implementation
int led::getIndexRed() const
{
    return indexRed;
}

int led::getIndexGreen() const
{
    return indexGreen;
}

int led::getIndexBlue() const
{
    return indexBlue;
}

bool led::isLightRed() const
{
    return lightRed;
}

bool led::isLightGreen() const
{
    return lightGreen;
}

bool led::isLightBlue() const
{
    return lightBlue;
}

int led::getCurrentColor() const
{
    return currentColor;
}

// Setter functions for member variables implementation
void led::setIndexRed(int index)
{
    indexRed = index;
}

void led::setIndexGreen(int index)
{
    indexGreen = index;
}

void led::setIndexBlue(int index)
{
    indexBlue = index;
}
