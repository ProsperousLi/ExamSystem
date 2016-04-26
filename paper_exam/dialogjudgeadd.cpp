#include "dialogjudgeadd.h"
#include "ui_dialogjudgeadd.h"
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <iostream>
using namespace std;
Dialogjudgeadd::Dialogjudgeadd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogjudgeadd)
{
    ui->setupUi(this);
}

Dialogjudgeadd::~Dialogjudgeadd()
{
    delete ui;
}

void Dialogjudgeadd::on_pushButton_clicked()
{
    QSqlQuery query;
        query.prepare("INSERT INTO tf_question( Question, Answer,Score,QuestionLevel) "
                      "VALUES (:Question,:Answer, :Score, :QuestionLevel)");
        query.bindValue(":Question",ui->textEdit->toPlainText());
            query.bindValue(":Answer", ui->lineEdit->text());
             query.bindValue(":Score", ui->lineEdit_2->text());
             query.bindValue(":QuestionLevel", ui->comboBox->currentText());
        bool b =query.exec();
        if(b) {
            cout<<"ok";
        }
        else
            cout<<"on";
        this->close();
}

void Dialogjudgeadd::on_pushButton_2_clicked()
{
    this->close();
}
