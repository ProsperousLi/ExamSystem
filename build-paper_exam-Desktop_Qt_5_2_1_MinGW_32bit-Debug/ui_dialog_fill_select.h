/********************************************************************************
** Form generated from reading UI file 'dialog_fill_select.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FILL_SELECT_H
#define UI_DIALOG_FILL_SELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_fill_select
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_fill_select)
    {
        if (Dialog_fill_select->objectName().isEmpty())
            Dialog_fill_select->setObjectName(QStringLiteral("Dialog_fill_select"));
        Dialog_fill_select->resize(845, 383);
        tableWidget = new QTableWidget(Dialog_fill_select);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 20, 601, 301));
        label = new QLabel(Dialog_fill_select);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 570, 54, 12));
        pushButton = new QPushButton(Dialog_fill_select);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 20, 101, 61));
        label_2 = new QLabel(Dialog_fill_select);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(660, 210, 71, 41));
        lineEdit = new QLineEdit(Dialog_fill_select);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(720, 220, 113, 20));
        label_3 = new QLabel(Dialog_fill_select);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(660, 160, 71, 41));
        comboBox = new QComboBox(Dialog_fill_select);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(730, 170, 71, 22));

        retranslateUi(Dialog_fill_select);

        QMetaObject::connectSlotsByName(Dialog_fill_select);
    } // setupUi

    void retranslateUi(QDialog *Dialog_fill_select)
    {
        Dialog_fill_select->setWindowTitle(QApplication::translate("Dialog_fill_select", "\345\241\253\347\251\272\351\242\230\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("Dialog_fill_select", "\345\241\253\347\251\272\351\242\230", 0));
        pushButton->setText(QApplication::translate("Dialog_fill_select", "\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("Dialog_fill_select", "\345\205\263\351\224\256\345\255\227\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog_fill_select", "\351\242\230\347\233\256\351\232\276\345\272\246\357\274\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_fill_select", "\345\205\250\351\200\211", 0)
         << QApplication::translate("Dialog_fill_select", "\347\255\211\347\272\247\344\270\200", 0)
         << QApplication::translate("Dialog_fill_select", "\347\255\211\347\272\247\344\272\214", 0)
         << QApplication::translate("Dialog_fill_select", "\347\255\211\347\272\247\344\270\211", 0)
         << QApplication::translate("Dialog_fill_select", "\347\255\211\347\272\247\345\233\233", 0)
         << QApplication::translate("Dialog_fill_select", "\347\255\211\347\272\247\344\272\224", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Dialog_fill_select: public Ui_Dialog_fill_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FILL_SELECT_H
