/********************************************************************************
** Form generated from reading UI file 'title_add_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TITLE_ADD_UI_H
#define UI_TITLE_ADD_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_title_add_ui
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *title_add_ui)
    {
        if (title_add_ui->objectName().isEmpty())
            title_add_ui->setObjectName(QStringLiteral("title_add_ui"));
        title_add_ui->resize(524, 302);
        pushButton = new QPushButton(title_add_ui);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 50, 101, 41));
        pushButton_2 = new QPushButton(title_add_ui);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 120, 101, 41));
        pushButton_3 = new QPushButton(title_add_ui);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 190, 101, 41));

        retranslateUi(title_add_ui);

        QMetaObject::connectSlotsByName(title_add_ui);
    } // setupUi

    void retranslateUi(QDialog *title_add_ui)
    {
        title_add_ui->setWindowTitle(QApplication::translate("title_add_ui", "\351\242\230\347\233\256\351\200\211\346\213\251\346\223\215\344\275\234", 0));
        pushButton->setText(QApplication::translate("title_add_ui", "\351\200\211\346\213\251\351\242\230", 0));
        pushButton_2->setText(QApplication::translate("title_add_ui", "\345\241\253\347\251\272\351\242\230", 0));
        pushButton_3->setText(QApplication::translate("title_add_ui", "\345\210\244\346\226\255\351\242\230", 0));
    } // retranslateUi

};

namespace Ui {
    class title_add_ui: public Ui_title_add_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TITLE_ADD_UI_H
