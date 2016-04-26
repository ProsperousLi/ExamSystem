/********************************************************************************
** Form generated from reading UI file 'dialog_fill_modify.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_FILL_MODIFY_H
#define UI_DIALOG_FILL_MODIFY_H

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

class Ui_dialog_fill_modify
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLabel *label_7;

    void setupUi(QDialog *dialog_fill_modify)
    {
        if (dialog_fill_modify->objectName().isEmpty())
            dialog_fill_modify->setObjectName(QStringLiteral("dialog_fill_modify"));
        dialog_fill_modify->resize(796, 398);
        pushButton = new QPushButton(dialog_fill_modify);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 360, 75, 23));
        pushButton->setAutoDefault(true);
        textEdit = new QTextEdit(dialog_fill_modify);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(120, 60, 461, 51));
        lineEdit_2 = new QLineEdit(dialog_fill_modify);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(120, 20, 113, 20));
        label_8 = new QLabel(dialog_fill_modify);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 180, 54, 12));
        label_4 = new QLabel(dialog_fill_modify);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 20, 54, 12));
        label_3 = new QLabel(dialog_fill_modify);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 270, 54, 20));
        lineEdit_7 = new QLineEdit(dialog_fill_modify);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(120, 220, 51, 20));
        comboBox = new QComboBox(dialog_fill_modify);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 270, 69, 22));
        label_9 = new QLabel(dialog_fill_modify);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 220, 54, 12));
        label = new QLabel(dialog_fill_modify);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 54, 12));
        label_2 = new QLabel(dialog_fill_modify);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 54, 12));
        lineEdit = new QLineEdit(dialog_fill_modify);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(120, 130, 113, 20));
        label_6 = new QLabel(dialog_fill_modify);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 320, 81, 16));
        lineEdit_3 = new QLineEdit(dialog_fill_modify);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 320, 113, 20));
        label_7 = new QLabel(dialog_fill_modify);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 350, 91, 16));

        retranslateUi(dialog_fill_modify);

        QMetaObject::connectSlotsByName(dialog_fill_modify);
    } // setupUi

    void retranslateUi(QDialog *dialog_fill_modify)
    {
        dialog_fill_modify->setWindowTitle(QApplication::translate("dialog_fill_modify", "\345\241\253\347\251\272\351\242\230\344\277\256\346\224\271", 0));
        pushButton->setText(QApplication::translate("dialog_fill_modify", "\346\217\220\344\272\244", 0));
        label_8->setText(QApplication::translate("dialog_fill_modify", "\347\255\224\346\241\210", 0));
        label_4->setText(QApplication::translate("dialog_fill_modify", "\351\242\230\345\217\267", 0));
        label_3->setText(QApplication::translate("dialog_fill_modify", "\351\232\276\345\272\246\347\263\273\346\225\260", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("dialog_fill_modify", "level", 0)
         << QApplication::translate("dialog_fill_modify", "1", 0)
         << QApplication::translate("dialog_fill_modify", "2", 0)
         << QApplication::translate("dialog_fill_modify", "3", 0)
         << QApplication::translate("dialog_fill_modify", "4", 0)
         << QApplication::translate("dialog_fill_modify", "5", 0)
        );
        label_9->setText(QApplication::translate("dialog_fill_modify", "\345\210\206\346\225\260", 0));
        label->setText(QApplication::translate("dialog_fill_modify", "\351\242\230\347\233\256\345\206\205\345\256\271", 0));
        label_2->setText(QApplication::translate("dialog_fill_modify", "\347\251\272\346\240\274\346\225\260\351\207\217", 0));
        label_6->setText(QApplication::translate("dialog_fill_modify", "\346\230\257\345\220\246\346\234\211\345\272\217\347\255\224\346\241\210", 0));
        label_7->setText(QApplication::translate("dialog_fill_modify", "\357\274\2101\357\274\232\346\230\257 0\357\274\232\345\220\246\357\274\211", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_fill_modify: public Ui_dialog_fill_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_FILL_MODIFY_H
