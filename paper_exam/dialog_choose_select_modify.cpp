#include "dialog_choose_select_modify.h"
#include "ui_dialog_choose_select_modify.h"
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <iostream>
#include <qsqlquery.h>
#include <qdebug.h>
#include <qsqltablemodel.h>
#include <flag.h>
#include <qstring.h>

using namespace std;
Dialog_choose_select_modify::Dialog_choose_select_modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_choose_select_modify)
{
    ui->setupUi(this);

    //数据库显示到lineEdit
    QSqlQuery query2;
    query2.prepare("select * from single_select where QuestionID = :QuestionID");

    query2.bindValue(":QuestionID",Flag::modifyFlag);
    query2.exec();

    if(query2.first()) {
        QString q = query2.value(0).toString();
        ui->lineEdit_2->setText(q);
        QString content = query2.value(1).toString();
        ui->textEdit->setText(content);
        QString qa = query2.value(2).toString();
        ui->lineEdit->setText(qa);
        QString qb = query2.value(3).toString();
        ui->lineEdit_3->setText(qb);
        QString qc = query2.value(4).toString();
        ui->lineEdit_4->setText(qc);
        QString qd = query2.value(5).toString();
        ui->lineEdit_5->setText(qd);
        QString qanswer = query2.value(6).toString();
        ui->lineEdit_6->setText(qanswer);
        QString qs = query2.value(7).toString();
        ui->lineEdit_7->setText(qs);
        int ql = query2.value(8).toInt();
        ui->comboBox->setCurrentIndex(ql);
    }
}

Dialog_choose_select_modify::~Dialog_choose_select_modify()
{
    delete ui;
}

void Dialog_choose_select_modify::on_pushButton_clicked()
{
    QSqlQuery query;

    query.prepare("delete from single_select where QuestionID =:QuestionID");
    query.bindValue(":QuestionID",ui->lineEdit_2->text().toInt());
    query.exec();

    query.prepare("INSERT INTO single_select( QuestionID,Question, OptionA,OptionB,OptionC,OptionD,Answer,Score,QuestionLevel) "
                  "VALUES (:QuestionID, :Question, :OptionA,  :OptionB, :OptionC, :OptionD, :Answer, :Score, :QuestionLevel)");

    query.bindValue(":QuestionID",ui->lineEdit_2->text().toInt());
    query.bindValue(":Question",ui->textEdit->toPlainText());
    query.bindValue(":OptionA", ui->lineEdit->text());
    query.bindValue(":OptionB", ui->lineEdit_3->text());
    query.bindValue(":OptionC", ui->lineEdit_4->text());
    query.bindValue(":OptionD", ui->lineEdit_5->text());
    query.bindValue(":Answer", ui->lineEdit_6->text());
    query.bindValue(":Score", ui->lineEdit_7->text());
    query.bindValue(":QuestionLevel", ui->comboBox->currentText());

    bool b =query.exec();
    if(b) {
        cout<<"ok";
    }
    else
        cout<<"no";
    this->close();
}
