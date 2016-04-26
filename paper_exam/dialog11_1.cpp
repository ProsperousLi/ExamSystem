#include "dialog11_1.h"
#include "ui_dialog11_1.h"
#include <qsqldatabase.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <iostream>
using namespace std;
Dialog11_1::Dialog11_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog11_1)
{
    ui->setupUi(this);
}

Dialog11_1::~Dialog11_1()
{
    delete ui;
}

void Dialog11_1::on_pushButton_clicked()
{
    QSqlQuery query;
        query.prepare("INSERT INTO single_select( Question, OptionA,OptionB,OptionC,OptionD,Answer,Score,QuestionLevel) "
                      "VALUES (:Question, :OptionA,  :OptionB, :OptionC, :OptionD, :Answer, :Score, :QuestionLevel)");
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
            cout<<"on";
        this->close();
}

void Dialog11_1::on_pushButton_2_clicked()
{
    this->close();
}
