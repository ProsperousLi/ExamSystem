/********************************************************************************
** Form generated from reading UI file 'Specific_information.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIC_INFORMATION_H
#define UI_SPECIFIC_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Specific_information
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *Specific_information)
    {
        if (Specific_information->objectName().isEmpty())
            Specific_information->setObjectName(QStringLiteral("Specific_information"));
        Specific_information->resize(590, 488);
        scrollArea = new QScrollArea(Specific_information);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 591, 491));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 572, 472));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(Specific_information);

        QMetaObject::connectSlotsByName(Specific_information);
    } // setupUi

    void retranslateUi(QDialog *Specific_information)
    {
        Specific_information->setWindowTitle(QApplication::translate("Specific_information", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Specific_information: public Ui_Specific_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFIC_INFORMATION_H
