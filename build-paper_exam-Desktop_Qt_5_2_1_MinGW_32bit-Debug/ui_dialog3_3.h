/********************************************************************************
** Form generated from reading UI file 'dialog3_3.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_3_H
#define UI_DIALOG3_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Dialog3_3
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog3_3)
    {
        if (Dialog3_3->objectName().isEmpty())
            Dialog3_3->setObjectName(QStringLiteral("Dialog3_3"));
        Dialog3_3->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog3_3);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog3_3);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog3_3, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog3_3, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog3_3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3_3)
    {
        Dialog3_3->setWindowTitle(QApplication::translate("Dialog3_3", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog3_3: public Ui_Dialog3_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_3_H
