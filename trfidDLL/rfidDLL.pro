#-------------------------------------------------
#
# Project created by QtCreator 2017-04-12T08:38:55
#
#-------------------------------------------------

QT       += core serialport
QT -= qui

TARGET = rfidDLL
TEMPLATE = lib

DEFINES += RFIDDLL_LIBRARY

SOURCES += rfiddll.cpp

HEADERS += rfiddll.h\
        rfiddll_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DESTDIR = C:\QtData\build-Banksimul-Desktop_Qt_5_12_1_MinGW_64_bit-Release\release
