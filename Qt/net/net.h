#ifndef NET_H
#define NET_H

#include <QObject>

class net : public QObject
{
    Q_OBJECT
public:
    explicit net(QObject *parent = nullptr);

signals:
};

#endif // NET_H
