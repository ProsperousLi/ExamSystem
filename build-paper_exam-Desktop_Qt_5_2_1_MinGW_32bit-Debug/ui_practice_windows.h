/********************************************************************************
** Form generated from reading UI file 'practice_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICE_WINDOWS_H
#define UI_PRACTICE_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_practice_windows
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *label;
    QWidget *formWidget;
    QFormLayout *formLayout;
    QRadioButton *radioButton;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QRadioButton *radioButton_7;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_5;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *practice_windows)
    {
        if (practice_windows->objectName().isEmpty())
            practice_windows->setObjectName(QStringLiteral("practice_windows"));
        practice_windows->resize(1003, 478);
        action = new QAction(practice_windows);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(practice_windows);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(practice_windows);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(practice_windows);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 40, 81, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 90, 81, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 140, 81, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(870, 390, 71, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 220, 54, 12));
        formWidget = new QWidget(centralWidget);
        formWidget->setObjectName(QStringLiteral("formWidget"));
        formWidget->setGeometry(QRect(430, 210, 441, 171));
        formLayout = new QFormLayout(formWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        radioButton = new QRadioButton(formWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, radioButton);

        lineEdit = new QLineEdit(formWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setFrame(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        radioButton_2 = new QRadioButton(formWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, radioButton_2);

        lineEdit_2 = new QLineEdit(formWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setFrame(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        radioButton_3 = new QRadioButton(formWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioButton_3);

        radioButton_4 = new QRadioButton(formWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, radioButton_4);

        lineEdit_4 = new QLineEdit(formWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setFrame(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_3 = new QLineEdit(formWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setFrame(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        radioButton_7 = new QRadioButton(formWidget);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radioButton_7);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(270, 380, 121, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(420, 380, 131, 31));
        gridWidget = new QWidget(centralWidget);
        gridWidget->setObjectName(QStringLiteral("gridWidget"));
        gridWidget->setGeometry(QRect(250, 250, 151, 131));
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton_6 = new QRadioButton(gridWidget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        gridLayout->addWidget(radioButton_6, 2, 0, 1, 1);

        radioButton_8 = new QRadioButton(gridWidget);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        gridLayout->addWidget(radioButton_8, 3, 0, 1, 1);

        radioButton_5 = new QRadioButton(gridWidget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout->addWidget(radioButton_5, 0, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(250, 30, 401, 181));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(670, 40, 160, 168));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 220, 81, 23));
        practice_windows->setCentralWidget(centralWidget);
        formWidget->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_6->raise();
        label->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        gridWidget->raise();
        textEdit->raise();
        verticalLayoutWidget->raise();
        pushButton_5->raise();
        menuBar = new QMenuBar(practice_windows);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1003, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        practice_windows->setMenuBar(menuBar);
        mainToolBar = new QToolBar(practice_windows);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        practice_windows->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(practice_windows);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        practice_windows->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);

        retranslateUi(practice_windows);

        QMetaObject::connectSlotsByName(practice_windows);
    } // setupUi

    void retranslateUi(QMainWindow *practice_windows)
    {
        practice_windows->setWindowTitle(QApplication::translate("practice_windows", "\347\273\203\344\271\240\347\225\214\351\235\242", 0));
        action->setText(QApplication::translate("practice_windows", "\351\200\211\346\213\251\351\242\230", 0));
        action_2->setText(QApplication::translate("practice_windows", "\345\241\253\347\251\272\351\242\230", 0));
        action_3->setText(QApplication::translate("practice_windows", "\345\210\244\346\226\255\351\242\230", 0));
        pushButton->setText(QApplication::translate("practice_windows", "\351\200\211\346\213\251\351\242\230", 0));
        pushButton_2->setText(QApplication::translate("practice_windows", "\345\241\253\347\251\272\351\242\230", 0));
        pushButton_3->setText(QApplication::translate("practice_windows", "\345\210\244\346\226\255\351\242\230", 0));
        pushButton_6->setText(QApplication::translate("practice_windows", "\351\200\200\345\207\272", 0));
        label->setText(QApplication::translate("practice_windows", "\345\205\250\351\203\250\351\242\230\345\236\213", 0));
        radioButton->setText(QApplication::translate("practice_windows", "A", 0));
        radioButton_2->setText(QApplication::translate("practice_windows", "B", 0));
        radioButton_3->setText(QApplication::translate("practice_windows", "C", 0));
        radioButton_4->setText(QApplication::translate("practice_windows", "D", 0));
        radioButton_7->setText(QApplication::translate("practice_windows", "\351\200\211\346\213\251\351\242\230\344\274\217\347\254\224", 0));
        pushButton_7->setText(QApplication::translate("practice_windows", "\344\270\212\344\270\200\351\242\230", 0));
        pushButton_8->setText(QApplication::translate("practice_windows", "\344\270\213\344\270\200\351\242\230", 0));
        radioButton_6->setText(QApplication::translate("practice_windows", "false", 0));
        radioButton_8->setText(QApplication::translate("practice_windows", "\345\210\244\346\226\255\351\242\230\344\274\217\347\254\224", 0));
        radioButton_5->setText(QApplication::translate("practice_windows", "true", 0));
        pushButton_5->setText(QApplication::translate("practice_windows", "\346\230\276\347\244\272\347\255\224\346\241\210", 0));
        menu->setTitle(QApplication::translate("practice_windows", "\346\226\207\344\273\266", 0));
    } // retranslateUi

};

namespace Ui {
    class practice_windows: public Ui_practice_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICE_WINDOWS_H
