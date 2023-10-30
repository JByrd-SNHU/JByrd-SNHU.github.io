#include "led_cube_control.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LED_Cube_Control w;
    w.show();
    return a.exec();
}
