#ifndef SQL_H
#define SQL_H

#include <QObject>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>


class Sql : public QObject
{
    Q_OBJECT
public:
    explicit Sql(QObject *parent = nullptr);

    //数据库初始化
    void MySqlInit();

    bool createConnection();


signals:
};

#endif // SQL_H
