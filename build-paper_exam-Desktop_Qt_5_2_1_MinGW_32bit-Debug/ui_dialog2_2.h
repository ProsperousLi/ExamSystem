/********************************************************************************
** Form generated from reading UI file 'dialog2_2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_2_H
#define UI_DIALOG2_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog2_2
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog2_2)
    {
        if (Dialog2_2->objectName().isEmpty())
            Dialog2_2->setObjectName(QStringLiteral("Dialog2_2"));
        Dialog2_2->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog2_2);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog2_2);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog2_2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog2_2, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog2_2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2_2)
    {
        Dialog2_2->setWindowTitle(QApplication::translate("Dialog2_2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2_2: public Ui_Dialog2_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_2_H
