/********************************************************************************
** Form generated from reading UI file 'dialog_choose_select.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHOOSE_SELECT_H
#define UI_DIALOG_CHOOSE_SELECT_H

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

class Ui_Dialog_choose_select
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog_choose_select)
    {
        if (Dialog_choose_select->objectName().isEmpty())
            Dialog_choose_select->setObjectName(QStringLiteral("Dialog_choose_select"));
        Dialog_choose_select->resize(877, 407);
        tableWidget = new QTableWidget(Dialog_choose_select);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 10, 621, 361));
        label = new QLabel(Dialog_choose_select);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 640, 91, 21));
        pushButton = new QPushButton(Dialog_choose_select);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 10, 111, 61));
        comboBox = new QComboBox(Dialog_choose_select);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(730, 110, 81, 22));
        lineEdit = new QLineEdit(Dialog_choose_select);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(730, 170, 113, 20));
        label_2 = new QLabel(Dialog_choose_select);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(670, 170, 54, 21));
        label_3 = new QLabel(Dialog_choose_select);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 110, 54, 21));

        retranslateUi(Dialog_choose_select);

        QMetaObject::connectSlotsByName(Dialog_choose_select);
    } // setupUi

    void retranslateUi(QDialog *Dialog_choose_select)
    {
        Dialog_choose_select->setWindowTitle(QApplication::translate("Dialog_choose_select", "\351\200\211\346\213\251\351\242\230\346\237\245\350\257\242", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Dialog_choose_select", "\346\237\245\350\257\242", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_choose_select", "\345\205\250\351\200\211", 0)
         << QApplication::translate("Dialog_choose_select", "\347\255\211\347\272\247\344\270\200", 0)
         << QApplication::translate("Dialog_choose_select", "\347\255\211\347\272\247\344\272\214", 0)
         << QApplication::translate("Dialog_choose_select", "\347\255\211\347\272\247\344\270\211", 0)
         << QApplication::translate("Dialog_choose_select", "\347\255\211\347\272\247\345\233\233", 0)
         << QApplication::translate("Dialog_choose_select", "\347\255\211\347\272\247\344\272\224", 0)
        );
        label_2->setText(QApplication::translate("Dialog_choose_select", "\345\205\263\351\224\256\345\255\227\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog_choose_select", "\351\242\230\347\233\256\351\232\276\345\272\246\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_choose_select: public Ui_Dialog_choose_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHOOSE_SELECT_H
