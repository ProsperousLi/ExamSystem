/********************************************************************************
** Form generated from reading UI file 'Paper_operation.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPER_OPERATION_H
#define UI_PAPER_OPERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Paper_operation
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Paper_operation)
    {
        if (Paper_operation->objectName().isEmpty())
            Paper_operation->setObjectName(QStringLiteral("Paper_operation"));
        Paper_operation->resize(571, 426);
        pushButton = new QPushButton(Paper_operation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 70, 91, 51));
        pushButton_2 = new QPushButton(Paper_operation);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 150, 91, 51));

        retranslateUi(Paper_operation);

        QMetaObject::connectSlotsByName(Paper_operation);
    } // setupUi

    void retranslateUi(QDialog *Paper_operation)
    {
        Paper_operation->setWindowTitle(QApplication::translate("Paper_operation", "\350\257\225\345\215\267\346\223\215\344\275\234\351\200\211\346\213\251", 0));
        pushButton->setText(QApplication::translate("Paper_operation", "\350\257\225\345\215\267\347\224\237\346\210\220", 0));
        pushButton_2->setText(QApplication::translate("Paper_operation", "\350\257\225\345\215\267\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class Paper_operation: public Ui_Paper_operation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPER_OPERATION_H
