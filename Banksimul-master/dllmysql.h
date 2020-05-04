#ifndef DLLMYSQL_H
#define DLLMYSQL_H

#include "dllmysql_global.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QString>
#include <QStringList>
#include <algorithm>

class DLLMYSQLSHARED_EXPORT DLLMySQL
{

public:
    void nosto(int i);
    void talletus(int i);
    void luoTilitapahtuma(int luku, char c);
    int getSaldo();
    int getPIN();
    QStringList paivitaTilitapahtuma();

private:
    QSqlDatabase db;
    int luku, dbLuku, saldo = 0;
    QString id, etuliite, maara, paivays, tapahtuma;
    char c = ' ';
    QStringList lista;


};

#endif // DLLMYSQL_H
