/********************************************************************************
** Form generated from reading UI file 'student_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_UI_H
#define UI_STUDENT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_student_ui
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *student_ui)
    {
        if (student_ui->objectName().isEmpty())
            student_ui->setObjectName(QStringLiteral("student_ui"));
        student_ui->resize(546, 296);
        pushButton = new QPushButton(student_ui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 50, 161, 61));
        pushButton_2 = new QPushButton(student_ui);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 150, 161, 61));

        retranslateUi(student_ui);

        QMetaObject::connectSlotsByName(student_ui);
    } // setupUi

    void retranslateUi(QDialog *student_ui)
    {
        student_ui->setWindowTitle(QApplication::translate("student_ui", "\345\255\246\347\224\237\351\200\211\346\213\251\346\223\215\344\275\234", 0));
        pushButton->setText(QApplication::translate("student_ui", "\350\200\203\350\257\225\347\263\273\347\273\237", 0));
        pushButton_2->setText(QApplication::translate("student_ui", "\347\273\203\344\271\240\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class student_ui: public Ui_student_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_UI_H
