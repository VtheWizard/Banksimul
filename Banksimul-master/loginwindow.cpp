#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"

loginwindow::loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginwindow)
{
    ui->setupUi(this);
}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_pushButton_login_clicked()
{
    if (passu==1234)
    {
        aukasemaini();
        suljelogin();
    }else
        {
            QMessageBox::critical(this,"Pin väärin", "Pin-koodi väärin, yritä uudelleen");
            passu=0000;
        }
}

void loginwindow::on_yks_valueChanged(int value)
{
    value1 = value;
    passu = value1 + value2*10 + value3*100 + value4*1000;
    ui->lcdNumber->display(passu);
    qDebug()<<passu;
}

void loginwindow::on_kympit_valueChanged(int value)
{
    value2 = value;
    passu = value1 + value2*10 + value3*100 + value4*1000;
    ui->lcdNumber->display(passu);
    qDebug()<<passu;
}

void loginwindow::on_sadat_valueChanged(int value)
{
    value3 = value;
    passu = value1 + value2*10 + value3*100 + value4*1000;
    ui->lcdNumber->display(passu);
    qDebug()<<passu;
}

void loginwindow::on_tonnit_valueChanged(int value)
{
    value4 = value;
    passu = value1 + value2*10 + value3*100 + value4*1000;
    ui->lcdNumber->display(passu);
    qDebug()<<passu;
}

void loginwindow::on_pushButton_clicked()
{
    QMessageBox::critical(this,"HACKS!!!", "pakotetaas tääki sitte aukeemaan");
    aukasemaini();
    suljelogin();
}
