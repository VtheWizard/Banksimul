#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include "C:\QtData\Banksimul\DLLMySQL\dllmysql.h"
#include "C:\QtData\trfidDLL\rfiddll.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase db;
    DLLMySQL *objectDLLMySQL;

private slots:
    void on_pushButton_ulos_clicked();

    void on_pushButton_nosta_clicked();

    void on_pushButton_tapahtumat_clicked();

    void on_pushButton_talleta_clicked();

signals:
    void suljemaini();
    void aukaiseTapahtumat();

private:
    Ui::MainWindow *ui;
    int saldo = 0;
    //QTimer (30 sek idle ja ohjelma sulkeutuu)
};

#endif // MAINWINDOW_H
