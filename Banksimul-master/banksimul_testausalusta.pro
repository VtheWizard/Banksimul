#-------------------------------------------------
#
# Project created by QtCreator 2020-03-24T10:28:01
#
#-------------------------------------------------

QT       += core gui sql serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = banksimul_testausalusta
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    loginwindow.cpp \
    korttipls.cpp \
    tapahtumat.cpp

HEADERS += \
        mainwindow.h \
    loginwindow.h \
    korttipls.h \
    tapahtumat.h \
    dllmysql.h \
    dllmysql_global.h \
    rfiddll.h \
    rfiddll_global.h

FORMS += \
        mainwindow.ui \
    loginwindow.ui \
    korttipls.ui \
    tapahtumat.ui

LIBS +=C:\Taa\Banksimul-master\build-banksimul_testausalusta-Desktop_Qt_5_12_1_MinGW_64_bit-Debug\debug\dllmysql.dll
LIBS +=C:\Taa\Banksimul-master\build-banksimul_testausalusta-Desktop_Qt_5_12_1_MinGW_64_bit-Debug\debug\rfidDLL.dll
