#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <iostream>
#include <QDebug>
#include "dialog11_1.h"
#include "ui_dialog11_1.h"
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QTableView>
#include <QVBoxLayout>
#include <dialog3_1delecte.h>
#include "dialogchoosechance.h"
#include "dialog_choose_select.h"
using namespace std;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;

}


void Dialog::on_pushButton_clicked()
{

    Dialog11_1 d;
    d.exec();
}


void Dialog::on_pushButton_2_clicked()
{

    Dialogchoosechance choose;
    choose.exec();
}


void Dialog::on_pushButton_3_clicked()
{



    Dialog3_1delecte d;
    d.exec();



}

void Dialog::on_pushButton_4_clicked()
{

    Dialog_choose_select d;
    d.exec();

}




void Dialog::on_pushButton_5_clicked()
{
    this->close();
}
