#include "mysql.h"

mysql::mysql(QObject *parent)
    : QObject{parent}
{}

void mysql::MySqlInit()
{
    if(createConnection()){
        qDebug() << "MySqlConnected!";
    }
}

bool mysql::createConnection()
{
    qDebug() << "drivers" << QSqlDatabase::drivers();
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
