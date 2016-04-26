/********************************************************************************
** Form generated from reading UI file 'dialog_judge_select.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_JUDGE_SELECT_H
#define UI_DIALOG_JUDGE_SELECT_H

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

class Ui_Dialog_judge_select
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog_judge_select)
    {
        if (Dialog_judge_select->objectName().isEmpty())
            Dialog_judge_select->setObjectName(QStringLiteral("Dialog_judge_select"));
        Dialog_judge_select->resize(769, 385);
        label = new QLabel(Dialog_judge_select);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(580, 200, 71, 41));
        tableWidget = new QTableWidget(Dialog_judge_select);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 561, 361));
        label_2 = new QLabel(Dialog_judge_select);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(580, 150, 71, 41));
        pushButton = new QPushButton(Dialog_judge_select);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 10, 101, 61));
        lineEdit = new QLineEdit(Dialog_judge_select);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(640, 210, 113, 20));
        comboBox = new QComboBox(Dialog_judge_select);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(650, 160, 71, 22));

        retranslateUi(Dialog_judge_select);

        QMetaObject::connectSlotsByName(Dialog_judge_select);
    } // setupUi

    void retranslateUi(QDialog *Dialog_judge_select)
    {
        Dialog_judge_select->setWindowTitle(QApplication::translate("Dialog_judge_select", "\345\210\244\346\226\255\351\242\230\346\237\245\350\257\242", 0));
        label->setText(QApplication::translate("Dialog_judge_select", "\345\205\263\351\224\256\345\255\227\357\274\232", 0));
        label_2->setText(QApplication::translate("Dialog_judge_select", "\351\242\230\347\233\256\351\232\276\345\272\246\357\274\232", 0));
        pushButton->setText(QApplication::translate("Dialog_judge_select", "\346\237\245\350\257\242", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog_judge_select", "\345\205\250\351\200\211", 0)
         << QApplication::translate("Dialog_judge_select", "\347\255\211\347\272\247\344\270\200", 0)
         << QApplication::translate("Dialog_judge_select", "\347\255\211\347\272\247\344\272\214", 0)
         << QApplication::translate("Dialog_judge_select", "\347\255\211\347\272\247\344\270\211", 0)
         << QApplication::translate("Dialog_judge_select", "\347\255\211\347\272\247\345\233\233", 0)
         << QApplication::translate("Dialog_judge_select", "\347\255\211\347\272\247\344\272\224", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Dialog_judge_select: public Ui_Dialog_judge_select {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_JUDGE_SELECT_H
