#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"

loginwindow::loginwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginwindow)
{
    ui->setupUi(this);
    objectDLLMySQL = new DLLMySQL;
}

loginwindow::~loginwindow()
{
    delete ui;
    delete objectDLLMySQL;
    objectDLLMySQL = nullptr;
}

void loginwindow::on_pushButton_login_clicked()
{
    if (passu==objectDLLMySQL->getPIN())
    {
        aukasemaini();
            ui->tonnit->setValue(0);
            ui->sadat->setValue(0);
            ui->kympit->setValue(0);
            ui->yks->setValue(0);
        suljelogin();

    } else
    {
        QMessageBox::critical(this,"Pin väärin", "Pin-koodi väärin, yritä uudelleen");
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
        ui->tonnit->setValue(0);
        ui->sadat->setValue(0);
        ui->kympit->setValue(0);
        ui->yks->setValue(0);
    suljelogin();
}
