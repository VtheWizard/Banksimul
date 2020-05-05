/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_tapahtumat;
    QPushButton *pushButton_ulos;
    QPushButton *pushButton_nosta;
    QLabel *label_euro;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_talleta;
    QSpinBox *spinBox_talleta;
    QSpinBox *spinBox_nosta;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(751, 458);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_tapahtumat = new QPushButton(centralWidget);
        pushButton_tapahtumat->setObjectName(QString::fromUtf8("pushButton_tapahtumat"));
        pushButton_tapahtumat->setGeometry(QRect(60, 90, 361, 81));
        pushButton_ulos = new QPushButton(centralWidget);
        pushButton_ulos->setObjectName(QString::fromUtf8("pushButton_ulos"));
        pushButton_ulos->setGeometry(QRect(60, 210, 361, 81));
        pushButton_nosta = new QPushButton(centralWidget);
        pushButton_nosta->setObjectName(QString::fromUtf8("pushButton_nosta"));
        pushButton_nosta->setGeometry(QRect(510, 180, 91, 31));
        label_euro = new QLabel(centralWidget);
        label_euro->setObjectName(QString::fromUtf8("label_euro"));
        label_euro->setGeometry(QRect(670, 90, 71, 71));
        QFont font;
        font.setPointSize(21);
        font.setKerning(true);
        label_euro->setFont(font);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(510, 100, 151, 51));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        lcdNumber->setFont(font1);
        pushButton_talleta = new QPushButton(centralWidget);
        pushButton_talleta->setObjectName(QString::fromUtf8("pushButton_talleta"));
        pushButton_talleta->setGeometry(QRect(510, 260, 93, 28));
        spinBox_talleta = new QSpinBox(centralWidget);
        spinBox_talleta->setObjectName(QString::fromUtf8("spinBox_talleta"));
        spinBox_talleta->setGeometry(QRect(620, 260, 71, 31));
        spinBox_talleta->setMinimum(0);
        spinBox_talleta->setMaximum(9999);
        spinBox_talleta->setSingleStep(1);
        spinBox_talleta->setValue(0);
        spinBox_nosta = new QSpinBox(centralWidget);
        spinBox_nosta->setObjectName(QString::fromUtf8("spinBox_nosta"));
        spinBox_nosta->setGeometry(QRect(620, 180, 71, 31));
        spinBox_nosta->setMinimum(0);
        spinBox_nosta->setMaximum(9999);
        spinBox_nosta->setSingleStep(1);
        spinBox_nosta->setValue(0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BankSimul", nullptr));
        pushButton_tapahtumat->setText(QApplication::translate("MainWindow", "Selaa Tilitapahtumia", nullptr));
        pushButton_ulos->setText(QApplication::translate("MainWindow", "Kirjaudu Ulos", nullptr));
        pushButton_nosta->setText(QApplication::translate("MainWindow", "Nosta", nullptr));
        label_euro->setText(QApplication::translate("MainWindow", "\342\202\254", nullptr));
        pushButton_talleta->setText(QApplication::translate("MainWindow", "Talleta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
