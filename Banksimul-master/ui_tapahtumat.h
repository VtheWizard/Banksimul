/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tapahtumat
{
public:
    QPushButton *veks;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listWidget;

    void setupUi(QWidget *tapahtumat)
    {
        if (tapahtumat->objectName().isEmpty())
            tapahtumat->setObjectName(QString::fromUtf8("tapahtumat"));
        tapahtumat->resize(545, 376);
        veks = new QPushButton(tapahtumat);
        veks->setObjectName(QString::fromUtf8("veks"));
        veks->setGeometry(QRect(220, 340, 93, 28));
        label = new QLabel(tapahtumat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 271, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(tapahtumat);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(39, 60, 471, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(tapahtumat);

        QMetaObject::connectSlotsByName(tapahtumat);
    } // setupUi

    void retranslateUi(QWidget *tapahtumat)
    {
        tapahtumat->setWindowTitle(QApplication::translate("tapahtumat", "Form", nullptr));
        veks->setText(QApplication::translate("tapahtumat", "Takaisin", nullptr));
        label->setText(QApplication::translate("tapahtumat", "Viimisimm\303\244t tapahtumat", nullptr));
        label_2->setText(QApplication::translate("tapahtumat", "  ID   TAPAHTUMA                          SUMMA                                           P\303\204IV\303\204YS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tapahtumat: public Ui_tapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
