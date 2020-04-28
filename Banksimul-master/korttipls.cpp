#include "korttipls.h"
#include "ui_korttipls.h"
#include <QPixmap>
korttipls::korttipls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::korttipls)
{
    ui->setupUi(this);

}

korttipls::~korttipls()
{
    delete ui;
}

void korttipls::on_pushButtonfake_clicked()
{
    aukaselogin();
}
