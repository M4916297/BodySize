#ifndef WIDGET_H
#define WIDGET_H

#include "sql.h"

#include <QWidget>
#include <QList>
#include <settings.h>
#include <login.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:


private slots:
    void on_set_btn_clicked();

private:
    Ui::Widget *ui;


    //串口ui设置界面
    Settings *settingsUi;

    //登录ui界面
    Login *loginui;

    Sql *sqlInit;

    //ui界面内容初始化
    void Init();



};
#endif // WIDGET_H
