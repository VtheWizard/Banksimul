#-------------------------------------------------
#
# Project created by QtCreator 2020-03-24T10:28:01
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = banksimul_testausalusta
LIBS += "D:/projektit/eka_vuosi_nelosperiodi/build-banksimul_testausalusta-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/kortinluku.dll"
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
    korttipls.cpp

HEADERS += \
        mainwindow.h \
    loginwindow.h \
    korttipls.h \
    kortinluku.h \
    kortinluku_global.h

FORMS += \
        mainwindow.ui \
    loginwindow.ui \
    korttipls.ui
