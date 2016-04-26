/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(400, 300);
        pushButton = new QPushButton(DialogLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 260, 75, 23));
        pushButton_2 = new QPushButton(DialogLogin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 260, 75, 23));
        label = new QLabel(DialogLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 54, 12));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 120, 54, 12));
        lineEdit = new QLineEdit(DialogLogin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 70, 113, 20));
        lineEdit_2 = new QLineEdit(DialogLogin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 120, 113, 20));
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 54, 12));

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "Dialog", 0));
        pushButton->setText(QApplication::translate("DialogLogin", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("DialogLogin", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("DialogLogin", "\347\224\250\346\210\267\345\220\215", 0));
        label_2->setText(QApplication::translate("DialogLogin", "\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("DialogLogin", "\347\231\273\351\231\206", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
