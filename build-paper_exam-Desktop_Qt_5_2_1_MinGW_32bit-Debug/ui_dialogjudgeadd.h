/********************************************************************************
** Form generated from reading UI file 'dialogjudgeadd.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGJUDGEADD_H
#define UI_DIALOGJUDGEADD_H

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

class Ui_Dialogjudgeadd
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialogjudgeadd)
    {
        if (Dialogjudgeadd->objectName().isEmpty())
            Dialogjudgeadd->setObjectName(QStringLiteral("Dialogjudgeadd"));
        Dialogjudgeadd->resize(795, 320);
        comboBox = new QComboBox(Dialogjudgeadd);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 270, 91, 22));
        label = new QLabel(Dialogjudgeadd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 270, 54, 12));
        label_2 = new QLabel(Dialogjudgeadd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 30, 54, 12));
        label_3 = new QLabel(Dialogjudgeadd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 100, 54, 12));
        label_4 = new QLabel(Dialogjudgeadd);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 200, 54, 12));
        lineEdit = new QLineEdit(Dialogjudgeadd);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 100, 113, 20));
        textEdit = new QTextEdit(Dialogjudgeadd);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 10, 331, 71));
        label_5 = new QLabel(Dialogjudgeadd);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(630, 30, 101, 31));
        lineEdit_2 = new QLineEdit(Dialogjudgeadd);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(130, 200, 113, 20));
        pushButton = new QPushButton(Dialogjudgeadd);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 280, 75, 23));
        pushButton_2 = new QPushButton(Dialogjudgeadd);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 280, 75, 23));

        retranslateUi(Dialogjudgeadd);

        QMetaObject::connectSlotsByName(Dialogjudgeadd);
    } // setupUi

    void retranslateUi(QDialog *Dialogjudgeadd)
    {
        Dialogjudgeadd->setWindowTitle(QApplication::translate("Dialogjudgeadd", "\345\210\244\346\226\255\351\242\230\346\267\273\345\212\240", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialogjudgeadd", "level", 0)
         << QApplication::translate("Dialogjudgeadd", "1", 0)
         << QApplication::translate("Dialogjudgeadd", "2", 0)
         << QApplication::translate("Dialogjudgeadd", "3", 0)
         << QApplication::translate("Dialogjudgeadd", "4", 0)
         << QApplication::translate("Dialogjudgeadd", "5", 0)
        );
        label->setText(QApplication::translate("Dialogjudgeadd", "\351\232\276\345\272\246\347\263\273\346\225\260", 0));
        label_2->setText(QApplication::translate("Dialogjudgeadd", "\351\242\230\347\233\256\345\206\205\345\256\271", 0));
        label_3->setText(QApplication::translate("Dialogjudgeadd", "\347\255\224\346\241\210", 0));
        label_4->setText(QApplication::translate("Dialogjudgeadd", "\345\210\206\346\225\260", 0));
        label_5->setText(QApplication::translate("Dialogjudgeadd", "\345\210\244\346\226\255\351\242\230", 0));
        pushButton->setText(QApplication::translate("Dialogjudgeadd", "\346\217\220\344\272\244", 0));
        pushButton_2->setText(QApplication::translate("Dialogjudgeadd", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogjudgeadd: public Ui_Dialogjudgeadd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGJUDGEADD_H
