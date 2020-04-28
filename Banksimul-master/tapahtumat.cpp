#include "tapahtumat.h"
#include "ui_tapahtumat.h"

tapahtumat::tapahtumat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tapahtumat)
{
    ui->setupUi(this);
    objectDLLMySQL2 = new DLLMySQL;

}

tapahtumat::~tapahtumat()
{
    delete ui;
}

void tapahtumat::paivitaTilitapahtumat() {
    ui->listWidget->addItems(objectDLLMySQL2->paivitaTilitapahtuma());
}

void tapahtumat::on_veks_clicked()
{
    ui->listWidget->clear();
    suljeTapahtumat();
    aukasemaini();
}
