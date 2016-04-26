/********************************************************************************
** Form generated from reading UI file 'dialog_judgedelecte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_JUDGEDELECTE_H
#define UI_DIALOG_JUDGEDELECTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_judgedelecte
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_judgedelecte)
    {
        if (Dialog_judgedelecte->objectName().isEmpty())
            Dialog_judgedelecte->setObjectName(QStringLiteral("Dialog_judgedelecte"));
        Dialog_judgedelecte->resize(750, 355);
        label = new QLabel(Dialog_judgedelecte);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(700, 20, 71, 31));
        tableWidget = new QTableWidget(Dialog_judgedelecte);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 20, 631, 251));
        pushButton = new QPushButton(Dialog_judgedelecte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 300, 75, 23));

        retranslateUi(Dialog_judgedelecte);

        QMetaObject::connectSlotsByName(Dialog_judgedelecte);
    } // setupUi

    void retranslateUi(QDialog *Dialog_judgedelecte)
    {
        Dialog_judgedelecte->setWindowTitle(QApplication::translate("Dialog_judgedelecte", "\345\210\244\346\226\255\351\242\230\345\210\240\351\231\244", 0));
        label->setText(QApplication::translate("Dialog_judgedelecte", "\345\210\244\346\226\255\351\242\230", 0));
        pushButton->setText(QApplication::translate("Dialog_judgedelecte", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_judgedelecte: public Ui_Dialog_judgedelecte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_JUDGEDELECTE_H
