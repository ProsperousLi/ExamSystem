/********************************************************************************
** Form generated from reading UI file 'dialog11_1.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG11_1_H
#define UI_DIALOG11_1_H

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

class Ui_Dialog11_1
{
public:
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog11_1)
    {
        if (Dialog11_1->objectName().isEmpty())
            Dialog11_1->setObjectName(QStringLiteral("Dialog11_1"));
        Dialog11_1->resize(776, 415);
        textEdit = new QTextEdit(Dialog11_1);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 40, 461, 51));
        lineEdit = new QLineEdit(Dialog11_1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 110, 421, 20));
        label = new QLabel(Dialog11_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 50, 54, 12));
        label_2 = new QLabel(Dialog11_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 110, 54, 12));
        comboBox = new QComboBox(Dialog11_1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 340, 69, 22));
        label_3 = new QLabel(Dialog11_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 340, 54, 20));
        label_5 = new QLabel(Dialog11_1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 150, 54, 12));
        label_6 = new QLabel(Dialog11_1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 180, 54, 12));
        label_7 = new QLabel(Dialog11_1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 210, 54, 12));
        lineEdit_3 = new QLineEdit(Dialog11_1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(70, 140, 421, 20));
        lineEdit_4 = new QLineEdit(Dialog11_1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 170, 421, 20));
        lineEdit_5 = new QLineEdit(Dialog11_1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(70, 210, 421, 20));
        label_8 = new QLabel(Dialog11_1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 260, 54, 12));
        label_9 = new QLabel(Dialog11_1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 300, 54, 12));
        lineEdit_6 = new QLineEdit(Dialog11_1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(70, 260, 51, 20));
        lineEdit_7 = new QLineEdit(Dialog11_1);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(70, 300, 51, 20));
        pushButton = new QPushButton(Dialog11_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 370, 75, 23));
        pushButton_2 = new QPushButton(Dialog11_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 370, 75, 23));

        retranslateUi(Dialog11_1);

        QMetaObject::connectSlotsByName(Dialog11_1);
    } // setupUi

    void retranslateUi(QDialog *Dialog11_1)
    {
        Dialog11_1->setWindowTitle(QApplication::translate("Dialog11_1", "\351\200\211\346\213\251\351\242\230\346\267\273\345\212\240", 0));
        label->setText(QApplication::translate("Dialog11_1", "\351\242\230\347\233\256\345\206\205\345\256\271", 0));
        label_2->setText(QApplication::translate("Dialog11_1", "\351\200\211\351\241\271A", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog11_1", "level", 0)
         << QApplication::translate("Dialog11_1", "1", 0)
         << QApplication::translate("Dialog11_1", "2", 0)
         << QApplication::translate("Dialog11_1", "3", 0)
         << QApplication::translate("Dialog11_1", "4", 0)
         << QApplication::translate("Dialog11_1", "5", 0)
        );
        label_3->setText(QApplication::translate("Dialog11_1", "\351\232\276\345\272\246\347\263\273\346\225\260", 0));
        label_5->setText(QApplication::translate("Dialog11_1", "\351\200\211\351\241\271B", 0));
        label_6->setText(QApplication::translate("Dialog11_1", "\351\200\211\351\241\271C", 0));
        label_7->setText(QApplication::translate("Dialog11_1", "\351\200\211\351\241\271D", 0));
        label_8->setText(QApplication::translate("Dialog11_1", "\347\255\224\346\241\210", 0));
        label_9->setText(QApplication::translate("Dialog11_1", "\345\210\206\346\225\260", 0));
        pushButton->setText(QApplication::translate("Dialog11_1", "\346\217\220\344\272\244", 0));
        pushButton_2->setText(QApplication::translate("Dialog11_1", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog11_1: public Ui_Dialog11_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG11_1_H
