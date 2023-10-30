#ifndef LED_CUBE_FRAME_H
#define LED_CUBE_FRAME_H
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>

class LED_Cube_Frame
{
private:
    int color;   // 0 stands for red, 1 stands for green, 2 stands for blue
    int x_cor;   // x coordinate within 4x4x4 RGB LED Matrix
    int y_cor;   // y coordinate within 4x4x4 RGB LED Matrix
    int z_cor;   // z coordinate within 4x4x4 RGB LED Matrix
    QString data; // String of bits to be sent over comport to Arduino
    int z_data_LUT[4] = {33,34,8,7};
    int led_data_LUT[3][4][4] = {
        {
            //Red
            {17,  20, 23, 26},
            {12,   9,  4,  1},
            {43,  46, 49, 52},
            {38,  35, 30, 27}
        },
        {
            //Green
            {16, 19, 22, 25},
            {13, 10,  5,  2},
            {42, 45, 48, 51},
            {39, 36, 31, 28}
        },
        {
            //Blue
            {15, 18, 21, 24},
            {14, 11,  6,  3},
            {41, 44, 47, 50},
            {40, 37, 32, 29}
        }
    };


public:
    LED_Cube_Frame();
    LED_Cube_Frame(int colorValue, int x, int y, int z);
    ~LED_Cube_Frame();

    void Set_color(int colorValue);
    void Set_x_cor(int x);
    void Set_y_cor(int y);
    void Set_z_cor(int z);
    void Calculate_data();
    QString Get_data();
};

#endif // LED_CUBE_FRAME_H
