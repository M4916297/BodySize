#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private slots:
    void on_send_btn_clicked();

    void on_send_clear_btn_clicked();

    void on_open_uart_btn_clicked();

    void on_search_uart_btn_clicked();

private:
    Ui::Settings *ui;

    //设置部分界面初始化
    void SettingsUiInit();

    //显示搜索到的串口
    void SerialPortSeaech();

    //串口初始化
    //void SerialInit();

};

#endif // SETTINGS_H
