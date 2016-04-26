/********************************************************************************
** Form generated from reading UI file 'dialog_fill_change.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FILL_CHANGE_H
#define UI_DIALOG_FILL_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_fill_change
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableWidget *tableWidget;

    void setupUi(QDialog *dialog_fill_change)
    {
        if (dialog_fill_change->objectName().isEmpty())
            dialog_fill_change->setObjectName(QStringLiteral("dialog_fill_change"));
        dialog_fill_change->resize(776, 366);
        pushButton_3 = new QPushButton(dialog_fill_change);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 60, 75, 23));
        pushButton_4 = new QPushButton(dialog_fill_change);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 250, 75, 23));
        tableWidget = new QTableWidget(dialog_fill_change);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 30, 581, 301));

        retranslateUi(dialog_fill_change);

        QMetaObject::connectSlotsByName(dialog_fill_change);
    } // setupUi

    void retranslateUi(QDialog *dialog_fill_change)
    {
        dialog_fill_change->setWindowTitle(QApplication::translate("dialog_fill_change", "\345\241\253\347\251\272\351\242\230\344\277\256\346\224\271", 0));
        pushButton_3->setText(QApplication::translate("dialog_fill_change", "\344\277\256\346\224\271", 0));
        pushButton_4->setText(QApplication::translate("dialog_fill_change", "\345\210\267\346\226\260", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_fill_change: public Ui_dialog_fill_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FILL_CHANGE_H
