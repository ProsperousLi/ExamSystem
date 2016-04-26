/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog3
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QStringLiteral("Dialog3"));
        Dialog3->resize(400, 300);
        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 75, 23));
        pushButton_2 = new QPushButton(Dialog3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 60, 75, 23));
        pushButton_3 = new QPushButton(Dialog3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 150, 75, 23));
        pushButton_4 = new QPushButton(Dialog3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 150, 75, 23));
        pushButton_5 = new QPushButton(Dialog3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(270, 250, 75, 23));

        retranslateUi(Dialog3);

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QApplication::translate("Dialog3", "\345\210\244\346\226\255\351\242\230\347\256\241\347\220\206", 0));
        pushButton->setText(QApplication::translate("Dialog3", "\346\267\273\345\212\240\351\242\230\347\233\256", 0));
        pushButton_2->setText(QApplication::translate("Dialog3", "\344\277\256\346\224\271\351\242\230\347\233\256", 0));
        pushButton_3->setText(QApplication::translate("Dialog3", "\345\210\240\351\231\244\351\242\230\347\233\256", 0));
        pushButton_4->setText(QApplication::translate("Dialog3", "\346\237\245\350\257\242\351\242\230\347\233\256", 0));
        pushButton_5->setText(QApplication::translate("Dialog3", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
