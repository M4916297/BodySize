QT       += core gui serialport sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

INCLUDEPATH+="C:\Program Files\MySQL\MySQL Server 8.0\include"
LIBS += -L"C:\Program Files\MySQL\MySQL Server 8.0\lib" -llibmysql


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    login.cpp \
    main.cpp \
    settings.cpp \
    sql.cpp \
    widget.cpp

HEADERS += \
    login.h \
    settings.h \
    sql.h \
    widget.h

FORMS += \
    login.ui \
    settings.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
