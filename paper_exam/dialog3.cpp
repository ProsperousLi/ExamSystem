#include "dialog3.h"
#include "ui_dialog3.h"
#include "dialogjudgeadd.h"
#include "dialog_judgedelecte.h"
#include "dialog_judge_select.h"
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <iostream>
#include <qsqldatabase.h>
#include<qdebug.h>
#include <qsqltablemodel.h>
#include <qsqlrecord.h>
#include <qtableview.h>
#include <QVBoxLayout>

#include <dialog_judge_change.h>
using namespace std;
Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    Dialogjudgeadd judgeadd;
    judgeadd.exec();
}

void Dialog3::on_pushButton_3_clicked()
{
    Dialog_judgedelecte delecte;
    delecte.exec();
}

void Dialog3::on_pushButton_4_clicked()
{
    Dialog_judge_select d;
    d.exec();
}

void Dialog3::on_pushButton_5_clicked()
{
    this->close();
}

void Dialog3::on_pushButton_2_clicked()
{
   dialog_judge_change c;
   c.exec();
}
