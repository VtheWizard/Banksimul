#ifndef DLLMYSQL_H
#define DLLMYSQL_H

#include "dllmysql_global.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QString>

class DLLMYSQLSHARED_EXPORT DLLMySQL
{

public:
    void Nosto(int i);
    void yhdistaTietokantaan();
    void suljeTietokanta();

private:
    QSqlDatabase db;



};

#endif // DLLMYSQL_H
