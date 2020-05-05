#include "korttipls.h"
#include "ui_korttipls.h"
#include <QPixmap>
#include <QDebug>
#include <QMessageBox>

korttipls::korttipls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::korttipls)
{
    ui->setupUi(this);

    olioRfidDLL = new RfidDLL;
    olioRfidDLL->palautaPankkikortinNumeroKomponentti();

}

korttipls::~korttipls()
{
    delete ui;
    delete olioRfidDLL;
    olioRfidDLL = nullptr;
}

void korttipls::on_pushButtonfake_clicked()
{
    olioRfidDLL->nollaa();
    aukaselogin();
}



void korttipls::on_pushButton_clicked()
{
    //kun kortti on paikallaan signaalilla tähän
    kortinNumero = olioRfidDLL->tulostus();
    qDebug()<<"pääohjelmassa id: "<<kortinNumero<<endl;
    //pinKysely();
    if (kortinNumero=="2600E4C967")
    {
        olioRfidDLL->nollaa();
        aukaselogin();
    }
    else
    {
       qDebug() << "Tunnistamaton kortti" ;
       QMessageBox::critical(this,"error","Tunnistamaton Kortti");
    }
}
