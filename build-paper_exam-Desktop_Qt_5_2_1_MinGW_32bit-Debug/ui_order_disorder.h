/********************************************************************************
** Form generated from reading UI file 'order_disorder.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_DISORDER_H
#define UI_ORDER_DISORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_order_disorder
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *order_disorder)
    {
        if (order_disorder->objectName().isEmpty())
            order_disorder->setObjectName(QStringLiteral("order_disorder"));
        order_disorder->resize(642, 375);
        pushButton = new QPushButton(order_disorder);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 80, 151, 71));
        pushButton_2 = new QPushButton(order_disorder);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 210, 151, 61));

        retranslateUi(order_disorder);

        QMetaObject::connectSlotsByName(order_disorder);
    } // setupUi

    void retranslateUi(QDialog *order_disorder)
    {
        order_disorder->setWindowTitle(QApplication::translate("order_disorder", "\346\234\211\345\272\217\344\270\216\346\227\240\345\272\217", 0));
        pushButton->setText(QApplication::translate("order_disorder", "\351\241\272\345\272\217\347\273\203\344\271\240", 0));
        pushButton_2->setText(QApplication::translate("order_disorder", "\351\232\217\346\234\272\347\273\203\344\271\240", 0));
    } // retranslateUi

};

namespace Ui {
    class order_disorder: public Ui_order_disorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_DISORDER_H
