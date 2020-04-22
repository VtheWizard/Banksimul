#ifndef KORTINLUKU_H
#define KORTINLUKU_H
#include <QSerialPort>

#include "kortinluku_global.h"

class KORTINLUKUSHARED_EXPORT Kortinluku
{

public:
    Kortti();


signals:
   korttiluettu();
};

#endif // KORTINLUKU_H
