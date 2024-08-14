#ifndef MYSQL_H
#define MYSQL_H

#include <QObject>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
class mysql : public QObject
{
    Q_OBJECT
public:
    explicit mysql(QObject *parent = nullptr);

    //数据库初始化
    void MySqlInit();

    bool createConnection();

signals:
};

#endif // MYSQL_H
