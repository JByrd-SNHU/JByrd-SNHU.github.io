#ifndef LED_CUBE_CONTROL_H
#define LED_CUBE_CONTROL_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QtSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class LED_Cube_Control; }
QT_END_NAMESPACE

class LED_Cube_Control : public QMainWindow
{
    Q_OBJECT

public:
    LED_Cube_Control(QWidget *parent = nullptr);
    ~LED_Cube_Control();

private slots:
    void on_btn_send_clicked();

    void on_btn_clear_clicked();

    void on_func_1_clicked();

private:
    Ui::LED_Cube_Control *ui;
    QSerialPort* COMPORT;
};
#endif // LED_CUBE_CONTROL_H
