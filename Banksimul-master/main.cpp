#include "mainwindow.h"
#include <QApplication>
#include "loginwindow.h"
#include "korttipls.h"
#include "tapahtumat.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    loginwindow l;
    korttipls k;
    tapahtumat t;

    QObject::connect(&l, SIGNAL(aukasemaini()), &w, SLOT(show()));
    QObject::connect(&l, SIGNAL(suljelogin()), &l, SLOT(hide()));
    QObject::connect(&k, SIGNAL(aukaselogin()), &l,SLOT(show()));
    QObject::connect(&k, SIGNAL(aukaselogin()), &k, SLOT(hide()));
    QObject::connect(&w, SIGNAL(suljemaini()), &w, SLOT(hide()));
    QObject::connect(&w, SIGNAL(suljemaini()), &k, SLOT(show()));
    QObject::connect(&w, SIGNAL(aukaiseTapahtumat()), &t, SLOT(show()));
    QObject::connect(&w, SIGNAL(aukaiseTapahtumat()), &t, SLOT(paivitaTilitapahtumat()));
    QObject::connect(&w, SIGNAL(aukaiseTapahtumat()), &w, SLOT(hide()));
    QObject::connect(&t, SIGNAL(aukasemaini()), &w, SLOT(show()));
    QObject::connect(&t, SIGNAL(suljeTapahtumat()), &t, SLOT(hide()));

    k.show();

    return a.exec();
}
