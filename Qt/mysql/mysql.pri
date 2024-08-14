INCLUDEPATH += $$PWD
QT += sql

INCLUDEPATH+="C:\Users\18747\Documents\QtCreater\BodySize\mysql\include"
LIBS += -L"C:\Users\18747\Documents\QtCreater\BodySize\mysql\mysql" -llibmysql


HEADERS += \
    $$PWD/mysql.h

SOURCES += \
    $$PWD/mysql.cpp
