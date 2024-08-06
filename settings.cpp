 #include "settings.h"
#include "ui_settings.h"



Settings::Settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Settings)
{
    ui->setupUi(this);
    SettingsUiInit();
    //SerialPortSeaech();
}

Settings::~Settings()
{
    delete ui;
}

void Settings::SettingsUiInit()
{
    //波特率
    ui->brud_comboBox->addItem("256000");
    ui->brud_comboBox->addItem("115200");
    ui->brud_comboBox->addItem("9600");
    ui->brud_comboBox->addItem("4800");

    //数据位
    ui->byte_comboBox->addItem("5");
    ui->byte_comboBox->addItem("6");
    ui->byte_comboBox->addItem("7");
    ui->byte_comboBox->addItem("8");

    //停止位
    ui->stop_byte_comboBox->addItem("1");
    ui->stop_byte_comboBox->addItem("1.5");
    ui->stop_byte_comboBox->addItem("2");

    //校验位
    ui->check_byte_comboBox->addItem("NULL");
    ui->check_byte_comboBox->addItem("奇校验");
    ui->check_byte_comboBox->addItem("偶校验");

    //发送端选择
    ui->send_select_comboBox->addItem("串口");
    ui->send_select_comboBox->addItem("终端");

    //Qt5+语法
    // template<typename Func1, typename Func2>
    // static bool QObject::connect(const QObject *sender, Func1 signal,
    //                              const QObject *receiver, Func2 slot,
    //                    Qt::ConnectionType type = Qt::AutoConnection)
    ui->brud_comboBox->setCurrentIndex(1);

    //显示搜索到的串口
    SerialPortSeaech();
}

void Settings::SerialPortSeaech()
{
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->port_comboBox->addItem(info.portName());
         }
}


void Settings::on_send_btn_clicked()
{
    QString sendStr=ui->textEdit->toPlainText();
    ui->textBrowser->append("串口发送："+sendStr);
}


void Settings::on_send_clear_btn_clicked()
{
    ui->textEdit->clear();
}


void Settings::on_search_uart_btn_clicked()
{
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->port_comboBox->addItem(info.portName());
    }
}


void Settings::on_open_uart_btn_clicked()
{
    QSerialPort Serial;
    Serial.setPortName(ui->port_comboBox->currentText());

}
