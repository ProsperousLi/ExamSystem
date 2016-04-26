/********************************************************************************
** Form generated from reading UI file 'dialog_choosecheck.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHOOSECHECK_H
#define UI_DIALOG_CHOOSECHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_choosecheck
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_choosecheck)
    {
        if (Dialog_choosecheck->objectName().isEmpty())
            Dialog_choosecheck->setObjectName(QStringLiteral("Dialog_choosecheck"));
        Dialog_choosecheck->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_choosecheck);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_choosecheck);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_choosecheck, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_choosecheck, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_choosecheck);
    } // setupUi

    void retranslateUi(QDialog *Dialog_choosecheck)
    {
        Dialog_choosecheck->setWindowTitle(QApplication::translate("Dialog_choosecheck", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_choosecheck: public Ui_Dialog_choosecheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHOOSECHECK_H
