#include "korttipls.h"
#include "ui_korttipls.h"
#include <QPixmap>
korttipls::korttipls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::korttipls)
{
    ui->setupUi(this);
    QPixmap pm("D:/projektit/eka_vuosi_nelosperiodi/banksimul_testausalusta/hackermans.jpg"); // <- path to image file
        ui->pepe->setPixmap(pm);
        ui->pepe->setScaledContents(true);
}

korttipls::~korttipls()
{
    delete ui;
}

void korttipls::on_pushButtonfake_clicked()
{
    aukaselogin();
}
