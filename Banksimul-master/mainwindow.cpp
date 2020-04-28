#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tapahtumat.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    /*
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("banksimul");
    */
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysli.oamk.fi");
    db.setDatabaseName("opisk_t9kovi01");
    db.setUserName("t9kovi01");
    db.setPassword("R7QN2eeZpTLJYtrt");

    if(db.open()){
        qDebug() << "Yhdistetty";
    } else {
        qDebug() << "Ei Yhdistetty";
    }

    objectDLLMySQL = new DLLMySQL;
    ui->setupUi(this);
    ui->lcdNumber->display(objectDLLMySQL->getSaldo());
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
    if (objectDLLMySQL->getSaldo()<=0)
    {
        QMessageBox::critical(this, "Virhe", "Saldo ei riitä nostoa varten");
    }else
    {
        objectDLLMySQL->nosto(ui->spinBox_nosta->value());
        ui->lcdNumber->display(objectDLLMySQL->getSaldo());
        qDebug()<<"Nostettu " << ui->spinBox_nosta->value()<< " euroa";
        QMessageBox::information(this, "Nosto", "Nosto suoritettu");

    }
    ui->lcdNumber->display(objectDLLMySQL->getSaldo());

}

void MainWindow::on_pushButton_saldo_clicked()
{
    QString saldostring = QString::number(saldo);
    QMessageBox::information(this, "Saldo", saldostring);
}

void MainWindow::on_pushButton_tapahtumat_clicked()
{
    aukaiseTapahtumat();

}

void MainWindow::on_pushButton_talleta_clicked()
{
    objectDLLMySQL->talletus(ui->spinBox_talleta->value());
    ui->lcdNumber->display(objectDLLMySQL->getSaldo());
    qDebug()<<"Talletettu "<<ui->spinBox_talleta->value()<<" euroa";
    QMessageBox::information(this, "Talletus", "Talletus suoritettu");
}
