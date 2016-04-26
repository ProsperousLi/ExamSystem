/********************************************************************************
** Form generated from reading UI file 'dialog_filladd.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FILLADD_H
#define UI_DIALOG_FILLADD_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog_filladd
{
public:
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;

    void setupUi(QDialog *Dialog_filladd)
    {
        if (Dialog_filladd->objectName().isEmpty())
            Dialog_filladd->setObjectName(QStringLiteral("Dialog_filladd"));
        Dialog_filladd->resize(947, 401);
        lineEdit_2 = new QLineEdit(Dialog_filladd);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 130, 113, 20));
        lineEdit_3 = new QLineEdit(Dialog_filladd);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(170, 230, 113, 20));
        comboBox = new QComboBox(Dialog_filladd);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 280, 69, 22));
        label = new QLabel(Dialog_filladd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 54, 12));
        label_2 = new QLabel(Dialog_filladd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 54, 12));
        label_3 = new QLabel(Dialog_filladd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 230, 54, 12));
        textEdit = new QTextEdit(Dialog_filladd);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 20, 401, 71));
        label_4 = new QLabel(Dialog_filladd);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 280, 54, 12));
        pushButton = new QPushButton(Dialog_filladd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 350, 75, 23));
        pushButton->setAutoDefault(false);
        pushButton_2 = new QPushButton(Dialog_filladd);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(830, 350, 75, 23));
        pushButton_2->setAutoDefault(false);
        label_5 = new QLabel(Dialog_filladd);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 180, 54, 12));
        label_6 = new QLabel(Dialog_filladd);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 340, 81, 16));
        lineEdit = new QLineEdit(Dialog_filladd);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 340, 113, 20));
        label_7 = new QLabel(Dialog_filladd);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 370, 91, 16));

        retranslateUi(Dialog_filladd);

        QMetaObject::connectSlotsByName(Dialog_filladd);
    } // setupUi

    void retranslateUi(QDialog *Dialog_filladd)
    {
        Dialog_filladd->setWindowTitle(QApplication::translate("Dialog_filladd", "\345\241\253\347\251\272\351\242\230\346\267\273\345\212\240", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_filladd", "level", 0)
         << QApplication::translate("Dialog_filladd", "1", 0)
         << QApplication::translate("Dialog_filladd", "2", 0)
         << QApplication::translate("Dialog_filladd", "3", 0)
         << QApplication::translate("Dialog_filladd", "4", 0)
         << QApplication::translate("Dialog_filladd", "5", 0)
        );
        label->setText(QApplication::translate("Dialog_filladd", "\351\242\230\347\233\256\345\206\205\345\256\271", 0));
        label_2->setText(QApplication::translate("Dialog_filladd", "\347\251\272\346\240\274\346\225\260\351\207\217", 0));
        label_3->setText(QApplication::translate("Dialog_filladd", "\345\210\206\346\225\260", 0));
        label_4->setText(QApplication::translate("Dialog_filladd", "\347\255\211\347\272\247", 0));
        pushButton->setText(QApplication::translate("Dialog_filladd", "\346\217\220\344\272\244", 0));
        pushButton_2->setText(QApplication::translate("Dialog_filladd", "\345\217\226\346\266\210", 0));
        label_5->setText(QApplication::translate("Dialog_filladd", "\347\251\272\346\240\274\347\255\224\346\241\210", 0));
        label_6->setText(QApplication::translate("Dialog_filladd", "\346\230\257\345\220\246\346\234\211\345\272\217\347\255\224\346\241\210", 0));
        label_7->setText(QApplication::translate("Dialog_filladd", "\357\274\2101\357\274\232\346\230\257 0\357\274\232\345\220\246\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_filladd: public Ui_Dialog_filladd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FILLADD_H
