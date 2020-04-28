#include "dllmysql.h"


void DLLMySQL::nosto(int i){
    QSqlQuery query;
    query.exec("SELECT saldo FROM tili where id = 1");

    if(query.next()){
        luku = query.value(0).toInt();
        dbLuku = getSaldo();
        dbLuku = dbLuku - i;
        qDebug() << dbLuku;

        query.prepare("UPDATE tili SET saldo = :luku");
        query.bindValue(":luku", dbLuku);
        query.exec();
        luoTilitapahtuma(i, '-');
    } else {
        qDebug() << "Nosto ei onnistunut.";
    }
}

void DLLMySQL::talletus(int i){
    QSqlQuery query;
    query.exec("SELECT saldo FROM tili where id = 1");

    if(query.next()){
        luku = query.value(0).toInt();
        dbLuku = getSaldo();
        dbLuku = dbLuku + i;
        qDebug() << dbLuku;

        query.prepare("UPDATE tili SET saldo = :luku");
        query.bindValue(":luku", dbLuku);
        query.exec();
        luoTilitapahtuma(i, '+');
    } else {
        qDebug() << "Talletus ei onnistunut.";
    }
}

void DLLMySQL::luoTilitapahtuma(int luku, char c) {
    QSqlQuery query;
    if(c == '-') {
        luku = -luku;
    }
    query.prepare("INSERT INTO `tilitapahtuma` (tili_id, paivays, maara) "
                  "VALUES ('1', current_date(), :luku)");
    query.bindValue(":luku", luku);
    query.exec();
    qDebug() << "Tilitapahtuma tallennettu";
}

QStringList DLLMySQL::paivitaTilitapahtuma() {
    QSqlQuery query;
    lista.clear();
    qDebug() << "lista tyhjennetty";

    query.exec("SELECT id, maara, paivays FROM tilitapahtuma");
    while(query.next()) {
        id = query.value(0).toString();
        maara = query.value(1).toString();
        if(maara.contains('-')) {
            etuliite = "\bNOSTO:\t\t";
        } else {
            etuliite = "TALLETUS:\t+";
        }
        paivays = query.value(2).toString();
        tapahtuma = QString("%1 %2%3\t\t %4")
                    .arg(id).arg(etuliite).arg(maara).arg(paivays);
        qDebug() << "listaan lisätty tapahtuma";
        lista << tapahtuma;
    }
    std::reverse(lista.begin(), lista.end());
    return lista;
}


int DLLMySQL::getSaldo() {
    QSqlQuery query;
    query.exec("SELECT saldo FROM tili where id = 1");
    if(query.next()) {
        saldo = query.value(0).toInt();
        query.exec();
        qDebug() << "getSaldo onnistui.";
        return saldo;
    } else {
        qDebug() << "getSaldo ei onnistunut.";
        return 0;
    }
}

