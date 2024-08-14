#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Init();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init()
{
    //loginui=new Login(this);
    //登录界面暂时设计：
    //1、第一次登录查询数据库
    //2、第一次登录后账号密码写入dll文件
    //3、勾选记住密码会第一时间读取dll文件，如果dll文件为空提示“请注册账号”
    //loginui->show();
    //if(loginui==close()){}

    ui->stackedWidget->setCurrentIndex(0);
    //设置界面初始化
    settingsUi=new Settings(this);
    ui->stackedWidget->addWidget(settingsUi);


    //MYSqlInit
    sqlInit->MySqlInit();
}



void Widget::on_set_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(settingsUi);

}

