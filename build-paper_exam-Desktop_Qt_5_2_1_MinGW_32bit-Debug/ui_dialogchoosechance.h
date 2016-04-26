/********************************************************************************
** Form generated from reading UI file 'dialogchoosechance.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHOOSECHANCE_H
#define UI_DIALOGCHOOSECHANCE_H

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

class Ui_Dialogchoosechance
{
public:
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialogchoosechance)
    {
        if (Dialogchoosechance->objectName().isEmpty())
            Dialogchoosechance->setObjectName(QStringLiteral("Dialogchoosechance"));
        Dialogchoosechance->resize(781, 386);
        pushButton = new QPushButton(Dialogchoosechance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 40, 75, 23));
        tableWidget = new QTableWidget(Dialogchoosechance);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 581, 301));
        label = new QLabel(Dialogchoosechance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 70, 101, 51));
        label->setStyleSheet(QStringLiteral("font: 75 9pt \"Arial\";"));
        pushButton_2 = new QPushButton(Dialogchoosechance);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 280, 75, 23));

        retranslateUi(Dialogchoosechance);

        QMetaObject::connectSlotsByName(Dialogchoosechance);
    } // setupUi

    void retranslateUi(QDialog *Dialogchoosechance)
    {
        Dialogchoosechance->setWindowTitle(QApplication::translate("Dialogchoosechance", "\345\210\244\346\226\255\351\242\230\346\237\245\350\257\242", 0));
        pushButton->setText(QApplication::translate("Dialogchoosechance", "\344\277\256\346\224\271", 0));
        label->setText(QApplication::translate("Dialogchoosechance", "\351\200\211\344\270\255\350\241\214\345\220\216\347\202\271\345\207\273\344\277\256\346\224\271", 0));
        pushButton_2->setText(QApplication::translate("Dialogchoosechance", "\345\210\267\346\226\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialogchoosechance: public Ui_Dialogchoosechance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHOOSECHANCE_H
