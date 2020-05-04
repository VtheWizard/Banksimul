#ifndef KORTTIPLS_H
#define KORTTIPLS_H

#include <QWidget>
#include "rfiddll.h"

namespace Ui {
class korttipls;
}

class korttipls : public QWidget
{
    Q_OBJECT

public:
    explicit korttipls(QWidget *parent = 0);
    ~korttipls();

private slots:
    void on_pushButtonfake_clicked();

    void on_pushButton_clicked();

public slots:
    void kortinluku();
signals:
    void aukaselogin();

private:
    Ui::korttipls *ui;
    RfidDLL *olioRfidDLL;
    bool korttiPaikallaan = true;
    QString kortinNumero;// = "0A0079C7BF";
};

#endif // KORTTIPLS_H
