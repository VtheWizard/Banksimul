/********************************************************************************
** Form generated from reading UI file 'korttipls.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KORTTIPLS_H
#define UI_KORTTIPLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_korttipls
{
public:
    QLabel *label;
    QPushButton *pushButtonfake;
    QPushButton *pushButton;

    void setupUi(QWidget *korttipls)
    {
        if (korttipls->objectName().isEmpty())
            korttipls->setObjectName(QString::fromUtf8("korttipls"));
        korttipls->resize(644, 340);
        label = new QLabel(korttipls);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 441, 141));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButtonfake = new QPushButton(korttipls);
        pushButtonfake->setObjectName(QString::fromUtf8("pushButtonfake"));
        pushButtonfake->setGeometry(QRect(520, 250, 93, 28));
        pushButton = new QPushButton(korttipls);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 200, 341, 81));

        retranslateUi(korttipls);

        QMetaObject::connectSlotsByName(korttipls);
    } // setupUi

    void retranslateUi(QWidget *korttipls)
    {
        korttipls->setWindowTitle(QApplication::translate("korttipls", "Form", nullptr));
        label->setText(QApplication::translate("korttipls", "K\303\244yt\303\244 korttia lukijassa", nullptr));
        pushButtonfake->setText(QApplication::translate("korttipls", "FakeID", nullptr));
        pushButton->setText(QApplication::translate("korttipls", "Paina kun kortti on k\303\244ynyt lukijassa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class korttipls: public Ui_korttipls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KORTTIPLS_H
