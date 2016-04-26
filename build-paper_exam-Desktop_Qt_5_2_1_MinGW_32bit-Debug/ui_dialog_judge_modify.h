/********************************************************************************
** Form generated from reading UI file 'dialog_judge_modify.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_JUDGE_MODIFY_H
#define UI_DIALOG_JUDGE_MODIFY_H

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

class Ui_dialog_judge_modify
{
public:
    QLabel *label_9;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;

    void setupUi(QDialog *dialog_judge_modify)
    {
        if (dialog_judge_modify->objectName().isEmpty())
            dialog_judge_modify->setObjectName(QStringLiteral("dialog_judge_modify"));
        dialog_judge_modify->resize(860, 426);
        label_9 = new QLabel(dialog_judge_modify);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(90, 240, 54, 12));
        textEdit = new QTextEdit(dialog_judge_modify);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 80, 461, 51));
        label = new QLabel(dialog_judge_modify);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 54, 12));
        label_4 = new QLabel(dialog_judge_modify);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 40, 54, 12));
        label_3 = new QLabel(dialog_judge_modify);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 320, 54, 20));
        label_8 = new QLabel(dialog_judge_modify);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 200, 54, 12));
        lineEdit_2 = new QLineEdit(dialog_judge_modify);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(140, 40, 113, 20));
        lineEdit_7 = new QLineEdit(dialog_judge_modify);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 240, 51, 20));
        comboBox = new QComboBox(dialog_judge_modify);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 320, 69, 22));
        lineEdit_6 = new QLineEdit(dialog_judge_modify);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 200, 51, 20));
        pushButton = new QPushButton(dialog_judge_modify);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 380, 75, 23));

        retranslateUi(dialog_judge_modify);

        QMetaObject::connectSlotsByName(dialog_judge_modify);
    } // setupUi

    void retranslateUi(QDialog *dialog_judge_modify)
    {
        dialog_judge_modify->setWindowTitle(QApplication::translate("dialog_judge_modify", "\345\210\244\346\226\255\351\242\230\344\277\256\346\224\271", 0));
        label_9->setText(QApplication::translate("dialog_judge_modify", "\345\210\206\346\225\260", 0));
        label->setText(QApplication::translate("dialog_judge_modify", "\351\242\230\347\233\256\345\206\205\345\256\271", 0));
        label_4->setText(QApplication::translate("dialog_judge_modify", "\351\242\230\345\217\267", 0));
        label_3->setText(QApplication::translate("dialog_judge_modify", "\351\232\276\345\272\246\347\263\273\346\225\260", 0));
        label_8->setText(QApplication::translate("dialog_judge_modify", "\347\255\224\346\241\210", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("dialog_judge_modify", "level", 0)
         << QApplication::translate("dialog_judge_modify", "1", 0)
         << QApplication::translate("dialog_judge_modify", "2", 0)
         << QApplication::translate("dialog_judge_modify", "3", 0)
         << QApplication::translate("dialog_judge_modify", "4", 0)
         << QApplication::translate("dialog_judge_modify", "5", 0)
        );
        pushButton->setText(QApplication::translate("dialog_judge_modify", "\346\217\220\344\272\244", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_judge_modify: public Ui_dialog_judge_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_JUDGE_MODIFY_H
