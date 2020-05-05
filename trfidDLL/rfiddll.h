#ifndef RFIDDLL_H
#define RFIDDLL_H
#include <QSerialPort>

#include <QObject>
#include "rfiddll_global.h"


class RFIDDLLSHARED_EXPORT RfidDLL: public QObject
{
    Q_OBJECT
public:
    RfidDLL();
    void nollaa();
    void RFIDDLLSHARED_EXPORT palautaPankkikortinNumeroKomponentti();
private:

    QString palautettavaArvo;

    QSerialPort *serial;
    QString cardSerialNumber;

signals:
    void RFIDDLLSHARED_EXPORT signaaliRpSignaali();

public slots:
    void RFIDDLLSHARED_EXPORT rajapintaSignaali();
    QString RFIDDLLSHARED_EXPORT tulostus();
};

#endif // RFIDDLL_H
