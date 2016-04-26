/********************************************************************************
** Form generated from reading UI file 'dialog_fiidelecte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FIIDELECTE_H
#define UI_DIALOG_FIIDELECTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_fiidelecte
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Dialog_fiidelecte)
    {
        if (Dialog_fiidelecte->objectName().isEmpty())
            Dialog_fiidelecte->setObjectName(QStringLiteral("Dialog_fiidelecte"));
        Dialog_fiidelecte->resize(902, 421);
        pushButton = new QPushButton(Dialog_fiidelecte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 370, 75, 23));
        tableWidget = new QTableWidget(Dialog_fiidelecte);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 20, 751, 331));

        retranslateUi(Dialog_fiidelecte);

        QMetaObject::connectSlotsByName(Dialog_fiidelecte);
    } // setupUi

    void retranslateUi(QDialog *Dialog_fiidelecte)
    {
        Dialog_fiidelecte->setWindowTitle(QApplication::translate("Dialog_fiidelecte", "\345\241\253\347\251\272\351\242\230\345\210\240\351\231\244", 0));
        pushButton->setText(QApplication::translate("Dialog_fiidelecte", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_fiidelecte: public Ui_Dialog_fiidelecte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FIIDELECTE_H
