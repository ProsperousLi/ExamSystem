#include "dialog_filladd.h"
#include "ui_dialog_filladd.h"
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <QLineEdit>

#include <QDebug>
#include <QEvent>
#include <iostream>
using namespace std;

Dialog_filladd::Dialog_filladd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_filladd)
{
    ui->setupUi(this);
}

Dialog_filladd::~Dialog_filladd()
{
    delete ui;
}

void Dialog_filladd::on_pushButton_clicked()
{
    qDebug()<<this->blank_num;
   // qDebug()<<this->flag;

    QString s=this->blank[0]->text();
    for(int i=1;i<this->blank_num;i++){
        s.append( "###"+this->blank[i]->text());

    }
    qDebug()<<s;

    QSqlQuery query;
    query.prepare("INSERT INTO filling( Question, Blank_num,Answer,Score,QuestionLevel,Is_order) "
                  "VALUES (:Question,:Blank_num,:Answer, :Score, :QuestionLevel,:Is_order)");
    query.bindValue(":Question",ui->textEdit->toPlainText());
    query.bindValue(":Blank_num", ui->lineEdit_2->text().toInt());

    query.bindValue(":Answer", s);
    query.bindValue(":Score", ui->lineEdit_3->text());
    query.bindValue(":QuestionLevel", ui->comboBox->currentText());
    query.bindValue(":Is_order", ui->lineEdit->text());
    bool b =query.exec();
    if(b) {
        cout<<"ok";
    }
    else
        cout<<"on";

    this->close();
}

void Dialog_filladd::on_pushButton_2_clicked()
{
    this->close();
}


void Dialog_filladd::on_lineEdit_2_returnPressed()
{
    if(!flag){
    int num=ui->lineEdit_2->text().toInt();
    for(int i=0;i<num;i++){
        this->blank[i]=new QLineEdit(this);
        this->blank[i]->setGeometry(170+160*i,180,113,20);

        this->blank[i]->show();
        this->j++;
    }
    this->blank_num=num;
    qDebug()<<this->blank_num;
    qDebug()<<this->j;
    this->flag=1;
    }
    else
    {
        for(int i=0;i<this->blank_num;i++){
            this->blank[i]->close();
             delete this->blank[i];
        }
        this->j-=blank_num;
        this->flag=0;
    }
}
