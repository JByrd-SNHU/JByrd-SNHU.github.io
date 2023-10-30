#include "led_cube_control.h"
#include "ui_led_cube_control.h"
#include "led_cube_frame.h"

LED_Cube_Control::LED_Cube_Control(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LED_Cube_Control)
{
    ui->setupUi(this);

    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM4");
    COMPORT->setBaudRate(QSerialPort::BaudRate::Baud9600);
    COMPORT->setParity(QSerialPort::Parity::NoParity);
    COMPORT->setDataBits(QSerialPort::DataBits::Data8);
    COMPORT->setStopBits(QSerialPort::StopBits::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    COMPORT->open(QIODevice::ReadWrite);

    if (COMPORT->isOpen())  {
        qDebug() << "Serial Port is Connected.";
        qDebug() << COMPORT->error();
    }
    else  {
        qDebug() << "Serial Port is not Connected.";
        qDebug() << COMPORT->error();
    }
}

LED_Cube_Control::~LED_Cube_Control()
{
    delete ui;
}


void LED_Cube_Control::on_btn_send_clicked()
{
    //New
    int color_val;
    int x_val;
    int y_val;
    int z_val;

    //set color_val
    if(ui->c_red->isChecked())  {
        color_val = 0;
    }
    else if(ui->c_green->isChecked())  {
        color_val = 1;
    }
    else  {
        color_val = 2;
    }

    //set x_val
    if(ui->x_1->isChecked())  {
        x_val = 0;
    }
    else if(ui->x_2->isChecked())  {
        x_val = 1;
    }
    else if(ui->x_3->isChecked())  {
        x_val = 2;
    }
    else  {
        x_val = 3;
    }

    //set y_val
    if(ui->y_1->isChecked())  {
        y_val = 0;
    }
    else if(ui->y_2->isChecked())  {
        y_val = 1;
    }
    else if(ui->y_3->isChecked())  {
        y_val = 2;
    }
    else  {
        y_val = 3;
    }

    //set z_val
    if(ui->z_1->isChecked())  {
        z_val = 0;
    }
    else if(ui->z_2->isChecked())  {
        z_val = 1;
    }
    else if(ui->z_3->isChecked())  {
        z_val = 2;
    }
    else  {
        z_val = 3;
    }

    LED_Cube_Frame firstTest(color_val,x_val,y_val,z_val);
    firstTest.Calculate_data();

    if (COMPORT->isOpen()) {
    //if (1) {
        QString bitString = firstTest.Get_data();// = ui->lineEdit_Data->text();  // Get the input bit string
        QByteArray data = bitString.toUtf8() + "\n";
        COMPORT->write(data);
    }
}


void LED_Cube_Control::on_btn_clear_clicked()
{
    //Clear Colors
    ui->c_red->setCheckState(Qt::Unchecked);
    ui->c_green->setCheckState(Qt::Unchecked);
    ui->c_blue->setCheckState(Qt::Unchecked);

    //Clear X
    ui->x_1->setCheckState(Qt::Unchecked);
    ui->x_2->setCheckState(Qt::Unchecked);
    ui->x_3->setCheckState(Qt::Unchecked);
    ui->x_4->setCheckState(Qt::Unchecked);

    //Clear Y
    ui->y_1->setCheckState(Qt::Unchecked);
    ui->y_2->setCheckState(Qt::Unchecked);
    ui->y_3->setCheckState(Qt::Unchecked);
    ui->y_4->setCheckState(Qt::Unchecked);

    //Clear Z
    ui->z_1->setCheckState(Qt::Unchecked);
    ui->z_2->setCheckState(Qt::Unchecked);
    ui->z_3->setCheckState(Qt::Unchecked);
    ui->z_4->setCheckState(Qt::Unchecked);
}


void LED_Cube_Control::on_func_1_clicked()
{
    //New
    int color_val;
    int x_val;
    int y_val;
    int z_val;

    for(color_val = 0; color_val < 3; color_val++)  {
        for(x_val = 0; x_val < 4; x_val++)  {
            for(y_val = 0; y_val < 4; y_val++)  {
                for(z_val = 0; z_val < 4; z_val++)  {

                    LED_Cube_Frame firstTest(color_val,x_val,y_val,z_val);
                    firstTest.Calculate_data();

                    if (COMPORT->isOpen()) {
                        //if (1) {
                        QString bitString = firstTest.Get_data();// = ui->lineEdit_Data->text();  // Get the input bit string
                        QByteArray data = bitString.toUtf8() + "\n";
                        COMPORT->write(data);
                    }
                }
            }
        }
    }
}

