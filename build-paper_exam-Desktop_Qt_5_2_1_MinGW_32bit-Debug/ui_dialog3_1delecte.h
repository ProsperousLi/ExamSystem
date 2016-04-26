/********************************************************************************
** Form generated from reading UI file 'dialog3_1delecte.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_1DELECTE_H
#define UI_DIALOG3_1DELECTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog3_1delecte
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog3_1delecte)
    {
        if (Dialog3_1delecte->objectName().isEmpty())
            Dialog3_1delecte->setObjectName(QStringLiteral("Dialog3_1delecte"));
        Dialog3_1delecte->resize(821, 411);
        tableWidget = new QTableWidget(Dialog3_1delecte);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(70, 30, 711, 301));
        pushButton = new QPushButton(Dialog3_1delecte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 350, 75, 23));
        pushButton_2 = new QPushButton(Dialog3_1delecte);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 350, 75, 23));

        retranslateUi(Dialog3_1delecte);

        QMetaObject::connectSlotsByName(Dialog3_1delecte);
    } // setupUi

    void retranslateUi(QDialog *Dialog3_1delecte)
    {
        Dialog3_1delecte->setWindowTitle(QApplication::translate("Dialog3_1delecte", "\351\200\211\346\213\251\351\242\230\345\210\240\351\231\244", 0));
        pushButton->setText(QApplication::translate("Dialog3_1delecte", "\345\210\240\351\231\244", 0));
        pushButton_2->setText(QApplication::translate("Dialog3_1delecte", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog3_1delecte: public Ui_Dialog3_1delecte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_1DELECTE_H
