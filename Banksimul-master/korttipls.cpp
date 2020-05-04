#include "korttipls.h"
#include "ui_korttipls.h"
#include <QPixmap>
#include "rfiddll.h"
#include <QDebug>
#include <QMessageBox>
korttipls::korttipls(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::korttipls)
{
    ui->setupUi(this);

    olioRfidDLL = new RfidDLL;
    olioRfidDLL->palautaPankkikortinNumeroKomponentti();
    connect(olioRfidDLL, SIGNAL(signaaliRpSignaali()),this, SLOT(kortinLuku()));

}

korttipls::~korttipls()
{
    delete ui;
    delete olioRfidDLL;
    olioRfidDLL = NULL;
}

void korttipls::on_pushButtonfake_clicked()
{
    aukaselogin();
}

void korttipls::kortinluku()
{
    //kun kortti on paikallaan signaalilla tähän
    kortinNumero = olioRfidDLL->tulostus();
    qDebug()<<"pääohjelmassa id: "<<kortinNumero<<endl;
    //pinKysely();
    if (kortinNumero=="2600E4C967")
    {
        aukaselogin();
    }
    else
    {
       qDebug() << "Tunnistamaton kortti" ;
       QMessageBox::critical(this,"error","Tunnistamaton Kortti");
    }
}


void korttipls::on_pushButton_clicked()
{
    //kun kortti on paikallaan signaalilla tähän
    kortinNumero = olioRfidDLL->tulostus();
    qDebug()<<"pääohjelmassa id: "<<kortinNumero<<endl;
    //pinKysely();
    if (kortinNumero=="2600E4C967")
    {
        aukaselogin();
    }
    else
    {
       qDebug() << "Tunnistamaton kortti" ;
       QMessageBox::critical(this,"error","Tunnistamaton Kortti");
    }
}
