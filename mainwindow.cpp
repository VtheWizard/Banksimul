#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display(saldo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ulos_clicked()
{
    suljemaini();
}

void MainWindow::on_pushButton_nosta_clicked()
{
    saldo=saldo-ui->spinBox_nosta->value();

    if (saldo<0)
    {
        QMessageBox::critical(this, "Virhe", "Saldo ei riitä nostoa varten");
        saldo=saldo+ui->spinBox_nosta->value();
    }else
    {
        qDebug()<<"Nostettu " << ui->spinBox_nosta->value()<< " euroa";
        QMessageBox::information(this, "Nosto", "Nosto suoritettu");

    }
    ui->lcdNumber->display(saldo);
}

void MainWindow::on_pushButton_saldo_clicked()
{
    QString saldostring = QString::number(saldo);
    QMessageBox::information(this, "Saldo", saldostring);
}

void MainWindow::on_pushButton_tapahtumat_clicked()
{
    QMessageBox::critical(this, "Tiliapahtumat", "Ei tilitapahtumia");
}

void MainWindow::on_pushButton_talleta_clicked()
{
    saldo=saldo+ui->spinBox_talleta->value();
    ui->lcdNumber->display(saldo);
    qDebug()<<"Talletettu "<<ui->spinBox_talleta->value()<<" euroa";
    QMessageBox::information(this, "Talletus", "Talletus suoritettu");
}
