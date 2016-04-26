/********************************************************************************
** Form generated from reading UI file 'student_exam_login.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_EXAM_LOGIN_H
#define UI_STUDENT_EXAM_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_student_exam_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *student_exam_login)
    {
        if (student_exam_login->objectName().isEmpty())
            student_exam_login->setObjectName(QStringLiteral("student_exam_login"));
        student_exam_login->resize(635, 406);
        pushButton = new QPushButton(student_exam_login);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 350, 75, 31));
        pushButton_2 = new QPushButton(student_exam_login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 350, 75, 31));
        lineEdit = new QLineEdit(student_exam_login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 100, 191, 31));
        lineEdit_2 = new QLineEdit(student_exam_login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 180, 191, 31));
        radioButton = new QRadioButton(student_exam_login);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(180, 250, 89, 16));
        radioButton_2 = new QRadioButton(student_exam_login);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(280, 250, 89, 16));
        label = new QLabel(student_exam_login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 181, 41));
        label->setStyleSheet(QLatin1String("color: rgb(0, 0, 255);\n"
"font: 75 22pt \"Arial\";\n"
""));
        label_2 = new QLabel(student_exam_login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(103, 110, 61, 20));
        label_3 = new QLabel(student_exam_login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 190, 54, 12));
        label_4 = new QLabel(student_exam_login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 240, 101, 31));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 10, 75);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(student_exam_login);

        QMetaObject::connectSlotsByName(student_exam_login);
    } // setupUi

    void retranslateUi(QDialog *student_exam_login)
    {
        student_exam_login->setWindowTitle(QApplication::translate("student_exam_login", "\350\200\203\350\257\225\347\231\273\351\231\206\347\225\214\351\235\242", 0));
        pushButton->setText(QApplication::translate("student_exam_login", "\347\231\273\351\231\206", 0));
        pushButton_2->setText(QApplication::translate("student_exam_login", "\351\200\200\345\207\272", 0));
        radioButton->setText(QApplication::translate("student_exam_login", "\345\255\246\347\224\237", 0));
        radioButton_2->setText(QApplication::translate("student_exam_login", "\347\256\241\347\220\206\345\221\230", 0));
        label->setText(QApplication::translate("student_exam_login", "\350\200\203\350\257\225\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("student_exam_login", "\345\255\246\345\217\267/\350\264\246\345\217\267", 0));
        label_3->setText(QApplication::translate("student_exam_login", "\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("student_exam_login", "\351\200\211\346\213\251\350\272\253\344\273\275\347\231\273\351\231\206", 0));
    } // retranslateUi

};

namespace Ui {
    class student_exam_login: public Ui_student_exam_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_EXAM_LOGIN_H
