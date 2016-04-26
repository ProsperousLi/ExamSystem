/********************************************************************************
** Form generated from reading UI file 'dialog_select_questions_level.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELECT_QUESTIONS_LEVEL_H
#define UI_DIALOG_SELECT_QUESTIONS_LEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_select_questions_level
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *Dialog_select_questions_level)
    {
        if (Dialog_select_questions_level->objectName().isEmpty())
            Dialog_select_questions_level->setObjectName(QStringLiteral("Dialog_select_questions_level"));
        Dialog_select_questions_level->resize(802, 450);
        pushButton = new QPushButton(Dialog_select_questions_level);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 10, 111, 41));
        tableWidget = new QTableWidget(Dialog_select_questions_level);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 651, 401));

        retranslateUi(Dialog_select_questions_level);

        QMetaObject::connectSlotsByName(Dialog_select_questions_level);
    } // setupUi

    void retranslateUi(QDialog *Dialog_select_questions_level)
    {
        Dialog_select_questions_level->setWindowTitle(QApplication::translate("Dialog_select_questions_level", "\345\210\244\346\226\255\351\242\230\346\237\245\350\257\242", 0));
        pushButton->setText(QApplication::translate("Dialog_select_questions_level", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_select_questions_level: public Ui_Dialog_select_questions_level {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELECT_QUESTIONS_LEVEL_H
