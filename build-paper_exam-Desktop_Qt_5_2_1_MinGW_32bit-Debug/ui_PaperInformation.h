/********************************************************************************
** Form generated from reading UI file 'PaperInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPERINFORMATION_H
#define UI_PAPERINFORMATION_H

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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_PaperInformation
{
public:
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *PaperInformation)
    {
        if (PaperInformation->objectName().isEmpty())
            PaperInformation->setObjectName(QStringLiteral("PaperInformation"));
        PaperInformation->resize(708, 435);
        tableWidget = new QTableWidget(PaperInformation);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 70, 521, 301));
        pushButton = new QPushButton(PaperInformation);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 390, 81, 31));
        label = new QLabel(PaperInformation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 380, 71, 41));
        pushButton_2 = new QPushButton(PaperInformation);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 190, 81, 31));
        lineEdit = new QLineEdit(PaperInformation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 40, 91, 21));
        comboBox = new QComboBox(PaperInformation);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 40, 81, 21));
        lineEdit_2 = new QLineEdit(PaperInformation);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 390, 71, 21));
        label_2 = new QLabel(PaperInformation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 71, 21));
        label_3 = new QLabel(PaperInformation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 10, 81, 21));
        pushButton_3 = new QPushButton(PaperInformation);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(600, 30, 81, 31));
        pushButton_4 = new QPushButton(PaperInformation);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(470, 390, 81, 31));
        lineEdit_3 = new QLineEdit(PaperInformation);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(50, 40, 91, 21));
        label_4 = new QLabel(PaperInformation);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 10, 81, 21));
        pushButton_5 = new QPushButton(PaperInformation);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(600, 110, 81, 31));

        retranslateUi(PaperInformation);

        QMetaObject::connectSlotsByName(PaperInformation);
    } // setupUi

    void retranslateUi(QDialog *PaperInformation)
    {
        PaperInformation->setWindowTitle(QApplication::translate("PaperInformation", "\350\257\225\345\215\267\346\237\245\347\234\213", 0));
        pushButton->setText(QApplication::translate("PaperInformation", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("PaperInformation", "\347\216\260\346\234\211\350\257\225\345\215\267\346\225\260\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("PaperInformation", "\345\210\240\351\231\244\350\257\225\345\215\267", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PaperInformation", "\351\232\217\346\234\272", 0)
         << QApplication::translate("PaperInformation", "\347\255\211\347\272\247\344\270\200", 0)
         << QApplication::translate("PaperInformation", "\347\255\211\347\272\247\344\272\214", 0)
         << QApplication::translate("PaperInformation", "\347\255\211\347\272\247\344\270\211", 0)
         << QApplication::translate("PaperInformation", "\347\255\211\347\272\247\345\233\233", 0)
         << QApplication::translate("PaperInformation", "\347\255\211\347\272\247\344\272\224", 0)
        );
        label_2->setText(QApplication::translate("PaperInformation", "\346\214\211\351\232\276\345\272\246\346\237\245\350\257\242\357\274\232", 0));
        label_3->setText(QApplication::translate("PaperInformation", "\346\214\211\347\237\245\350\257\206\347\202\271\346\237\245\350\257\242\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("PaperInformation", "\350\257\225\345\215\267\346\237\245\350\257\242", 0));
        pushButton_4->setText(QApplication::translate("PaperInformation", "\345\210\267\346\226\260", 0));
        label_4->setText(QApplication::translate("PaperInformation", "\346\214\211\350\257\225\345\215\267\345\220\215\346\237\245\350\257\242\357\274\232", 0));
        pushButton_5->setText(QApplication::translate("PaperInformation", "\346\237\245\347\234\213\350\257\225\345\215\267", 0));
    } // retranslateUi

};

namespace Ui {
    class PaperInformation: public Ui_PaperInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPERINFORMATION_H
