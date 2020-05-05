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

#DESTDIR = C:\temp7\pankkiautomaattiEXE\
DESTDIR = C:\Taa\Banksimul-master\build-banksimul_testausalusta-Desktop_Qt_5_12_1_MinGW_64_bit-Debug\debug
