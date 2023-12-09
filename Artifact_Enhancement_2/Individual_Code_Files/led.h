/*
===============================================================================
    File:         led.h
    Programmer:   Justin Byrd
    Contact:      justin.byrd@snhu.edu
    Date Created: 2023-11-21
    Date Updated: 2023-11-26
    Version:      1.0
    Class Name:   led
    Purpose:      This class represents a single RGB LED within the 4x4x4 RGB
                  LED Cube
    Issues:       None at the moment.

===============================================================================
*/

#ifndef LED_H
#define LED_H


class led
{
private:
    // COMPORT bit-string index for each color
    int indexRed;   // Index for the red color
    int indexGreen; // Index for the green color
    int indexBlue;  // Index for the blue color

    // Current color of this led
    int currentColor;
    // Values explained:
    // 0 - black(off)
    // 1 - red
    // 2 - green
    // 3 - blue
    // 4 - yellow - red + green
    // 5 - purple - red + blue
    // 6 - cyan - green + blue
    // 7 - white - red + green + blue

    //Defines if a color of a given RGB LED is enabled or disabled
    bool lightRed;      // Indicates if the red color is enabled
    bool lightGreen;    // Indicates if the green color is enabled
    bool lightBlue;     // Indicates if the blue color is enabled

public:
    // Constructor
    led();

    // Destructor
    ~led();

    // Function to update the LED color based on the input color
    void updateColor(int color);

    // Getter functions for member variables
    int getIndexRed() const;
    int getIndexGreen() const;
    int getIndexBlue() const;
    bool isLightRed() const;
    bool isLightGreen() const;
    bool isLightBlue() const;

    // Setter functions for member variables
    void setIndexRed(int index);
    void setIndexGreen(int index);
    void setIndexBlue(int index);
};

#endif // LED_H
