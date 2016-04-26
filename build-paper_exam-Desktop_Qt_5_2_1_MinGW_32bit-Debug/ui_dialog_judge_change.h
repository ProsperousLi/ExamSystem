/********************************************************************************
** Form generated from reading UI file 'dialog_judge_change.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_JUDGE_CHANGE_H
#define UI_DIALOG_JUDGE_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_judge_change
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *dialog_judge_change)
    {
        if (dialog_judge_change->objectName().isEmpty())
            dialog_judge_change->setObjectName(QStringLiteral("dialog_judge_change"));
        dialog_judge_change->resize(878, 442);
        label = new QLabel(dialog_judge_change);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(880, 190, 101, 51));
        label->setStyleSheet(QStringLiteral("font: 75 9pt \"Arial\";"));
        pushButton_2 = new QPushButton(dialog_judge_change);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(890, 400, 75, 23));
        tableWidget = new QTableWidget(dialog_judge_change);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 80, 581, 301));
        pushButton = new QPushButton(dialog_judge_change);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(890, 160, 75, 23));
        pushButton_3 = new QPushButton(dialog_judge_change);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 110, 75, 23));
        pushButton_4 = new QPushButton(dialog_judge_change);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(670, 300, 75, 23));

        retranslateUi(dialog_judge_change);

        QMetaObject::connectSlotsByName(dialog_judge_change);
    } // setupUi

    void retranslateUi(QDialog *dialog_judge_change)
    {
        dialog_judge_change->setWindowTitle(QApplication::translate("dialog_judge_change", "\345\210\244\346\226\255\351\242\230\344\277\256\346\224\271", 0));
        label->setText(QApplication::translate("dialog_judge_change", "\351\200\211\344\270\255\350\241\214\345\220\216\347\202\271\345\207\273\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("dialog_judge_change", "\345\210\267\346\226\260", 0));
        pushButton->setText(QApplication::translate("dialog_judge_change", "\344\277\256\346\224\271", 0));
        pushButton_3->setText(QApplication::translate("dialog_judge_change", "\344\277\256\346\224\271", 0));
        pushButton_4->setText(QApplication::translate("dialog_judge_change", "\345\210\267\346\226\260", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_judge_change: public Ui_dialog_judge_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_JUDGE_CHANGE_H
