/********************************************************************************
** Form generated from reading UI file 'tuichu_true.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUICHU_TRUE_H
#define UI_TUICHU_TRUE_H

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

class Ui_tuichu_true
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;

    void setupUi(QDialog *tuichu_true)
    {
        if (tuichu_true->objectName().isEmpty())
            tuichu_true->setObjectName(QStringLiteral("tuichu_true"));
        tuichu_true->resize(353, 234);
        label = new QLabel(tuichu_true);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 181, 41));
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 75 22pt \"Arial\";\n"
""));
        label_2 = new QLabel(tuichu_true);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 170, 181, 41));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 0, 255);\n"
"font: 12pt \"Arial\";\n"
"\n"
""));
        label_3 = new QLabel(tuichu_true);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 181, 41));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 0, 255);\n"
"font: 12pt \"Arial\";\n"
"\n"
""));
        label_4 = new QLabel(tuichu_true);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 90, 181, 41));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 0, 255);\n"
"font: 12pt \"Arial\";\n"
"\n"
""));
        pushButton = new QPushButton(tuichu_true);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 200, 71, 31));
        lineEdit = new QLineEdit(tuichu_true);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(140, 60, 113, 20));
        lineEdit_2 = new QLineEdit(tuichu_true);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(140, 100, 113, 20));
        lineEdit_3 = new QLineEdit(tuichu_true);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(140, 140, 111, 20));
        lineEdit_4 = new QLineEdit(tuichu_true);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(140, 180, 61, 20));
        label_5 = new QLabel(tuichu_true);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 130, 181, 41));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 0, 255);\n"
"font: 12pt \"Arial\";\n"
"\n"
""));

        retranslateUi(tuichu_true);

        QMetaObject::connectSlotsByName(tuichu_true);
    } // setupUi

    void retranslateUi(QDialog *tuichu_true)
    {
        tuichu_true->setWindowTitle(QApplication::translate("tuichu_true", "\350\200\203\350\257\225\347\273\223\346\235\237", 0));
        label->setText(QApplication::translate("tuichu_true", "\350\200\203\350\257\225\347\273\223\346\235\237", 0));
        label_2->setText(QApplication::translate("tuichu_true", "\346\202\250\347\232\204\350\200\203\350\257\225\346\210\220\347\273\251\344\270\272\357\274\232", 0));
        label_3->setText(QApplication::translate("tuichu_true", "\345\247\223\345\220\215\357\274\232", 0));
        label_4->setText(QApplication::translate("tuichu_true", "\345\255\246\345\217\267", 0));
        pushButton->setText(QApplication::translate("tuichu_true", "\347\241\256\345\256\232", 0));
        label_5->setText(QApplication::translate("tuichu_true", "\350\200\203\350\257\225\347\224\250\346\227\266", 0));
    } // retranslateUi

};

namespace Ui {
    class tuichu_true: public Ui_tuichu_true {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUICHU_TRUE_H
