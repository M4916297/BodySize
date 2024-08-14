#include "sql.h"


Sql::Sql(QObject *parent)
    : QObject{parent}
{
    MySqlInit();
}

void Sql::MySqlInit()
{
    if(createConnection()){
        qDebug() << "MySqlConnected!";
    }
}

//配置数据库连接
bool Sql::createConnection()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("bodysize");
    db.setUserName("Sql");
    db.setPassword("033112");
    db.setPort(3306);

    if (!db.open()) {
        qDebug() << "Error: Connection failed : " << db.lastError().text();
        return false;
    } else {
        return true;
    }
}


