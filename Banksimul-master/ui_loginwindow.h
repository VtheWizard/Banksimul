/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QPushButton *pushButton_login;
    QLCDNumber *lcdNumber;
    QDial *tonnit;
    QDial *sadat;
    QDial *kympit;
    QDial *yks;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName(QString::fromUtf8("loginwindow"));
        loginwindow->resize(535, 387);
        QFont font;
        font.setPointSize(8);
        loginwindow->setFont(font);
        pushButton_login = new QPushButton(loginwindow);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setGeometry(QRect(390, 290, 141, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Digital-7 Mono"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        pushButton_login->setFont(font1);
        lcdNumber = new QLCDNumber(loginwindow);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 130, 321, 111));
        tonnit = new QDial(loginwindow);
        tonnit->setObjectName(QString::fromUtf8("tonnit"));
        tonnit->setGeometry(QRect(30, 270, 91, 91));
        tonnit->setMaximum(9);
        sadat = new QDial(loginwindow);
        sadat->setObjectName(QString::fromUtf8("sadat"));
        sadat->setGeometry(QRect(120, 270, 91, 91));
        sadat->setMaximum(9);
        kympit = new QDial(loginwindow);
        kympit->setObjectName(QString::fromUtf8("kympit"));
        kympit->setGeometry(QRect(210, 270, 91, 91));
        kympit->setMaximum(9);
        yks = new QDial(loginwindow);
        yks->setObjectName(QString::fromUtf8("yks"));
        yks->setGeometry(QRect(300, 270, 91, 91));
        yks->setMaximum(9);
        label = new QLabel(loginwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 291, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(20);
        label->setFont(font2);
        pushButton = new QPushButton(loginwindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(422, 10, 101, 20));
        QFont font3;
        font3.setPointSize(4);
        pushButton->setFont(font3);

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QWidget *loginwindow)
    {
        loginwindow->setWindowTitle(QApplication::translate("loginwindow", "LogIn", nullptr));
        pushButton_login->setText(QApplication::translate("loginwindow", "login", nullptr));
        label->setText(QApplication::translate("loginwindow", "INSERT PIN", nullptr));
        pushButton->setText(QApplication::translate("loginwindow", "Hack your way in lol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
