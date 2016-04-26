/********************************************************************************
** Form generated from reading UI file 'admin_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_UI_H
#define UI_ADMIN_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_ui
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *admin_ui)
    {
        if (admin_ui->objectName().isEmpty())
            admin_ui->setObjectName(QStringLiteral("admin_ui"));
        admin_ui->resize(528, 288);
        pushButton = new QPushButton(admin_ui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 50, 151, 51));
        pushButton_2 = new QPushButton(admin_ui);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 150, 151, 51));

        retranslateUi(admin_ui);

        QMetaObject::connectSlotsByName(admin_ui);
    } // setupUi

    void retranslateUi(QDialog *admin_ui)
    {
        admin_ui->setWindowTitle(QApplication::translate("admin_ui", "\347\256\241\347\220\206\345\221\230\351\200\211\346\213\251jiemian", 0));
        pushButton->setText(QApplication::translate("admin_ui", "\350\257\225\351\242\230\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        pushButton_2->setText(QApplication::translate("admin_ui", "\347\273\204\345\215\267\347\256\241\347\220\206\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class admin_ui: public Ui_admin_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_UI_H
