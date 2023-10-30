#include "led_cube_frame.h"
#include <string>

LED_Cube_Frame::LED_Cube_Frame()
    : color(0), x_cor(0), y_cor(0), z_cor(0), data("")
{

}

LED_Cube_Frame::LED_Cube_Frame(int colorValue, int x, int y, int z)
    : color(colorValue), x_cor(x), y_cor(y), z_cor(z), data("")
{

}

LED_Cube_Frame::~LED_Cube_Frame()
{

}

void LED_Cube_Frame::Set_color(int colorValue)
{
    color = colorValue;
}

void LED_Cube_Frame::Set_x_cor(int x)
{
    x_cor = x;
}

void LED_Cube_Frame::Set_y_cor(int y)
{
    y_cor = y;
}

void LED_Cube_Frame::Set_z_cor(int z)
{
    z_cor = z;
}

void LED_Cube_Frame::Calculate_data()
{
    int led_num;
    int z_num;
    data = "";

    led_num = led_data_LUT[color][x_cor][y_cor];
    z_num = z_data_LUT[z_cor];

    for(int l = 1;l<=52;l++)  {
        if((l == led_num) || (l == z_num))  {
            data.append('1');
        }
        else  {
            data.append('0');
        }
    }
}

QString LED_Cube_Frame::Get_data()
{
    return data;
}
