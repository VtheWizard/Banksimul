#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class loginwindow;
}

class loginwindow : public QWidget
{
    Q_OBJECT

public:
    explicit loginwindow(QWidget *parent = 0);
    ~loginwindow();

signals:
    void aukasemaini();
    void suljelogin();

private slots:
    void on_pushButton_login_clicked();

    void on_yks_valueChanged(int value);

    void on_kympit_valueChanged(int value);

    void on_sadat_valueChanged(int value);

    void on_tonnit_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::loginwindow *ui;
    DLLMySQL *objectDLLMySQL;
    int passu = 0000;
    int value1 = 0;
    int value2 = 0;
    int value3 = 0;
    int value4 = 0;
};

#endif // LOGINWINDOW_H
