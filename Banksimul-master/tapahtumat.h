#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = 0);
    ~tapahtumat();

private slots:
    void on_veks_clicked();
    void paivitaTilitapahtumat();

private:
    Ui::tapahtumat *ui;
    DLLMySQL *objectDLLMySQL2;

signals:
   void suljeTapahtumat();
   void aukasemaini();
};

#endif // TAPAHTUMAT_H
