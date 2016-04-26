#include "dialog_fill_modify.h"
#include "ui_dialog_fill_modify.h"


#include "qsqlquery.h"
#include "flag.h"

#include "QLineEdit"
#include <QDebug>

#include <iostream>

#include <string.h>
using namespace std;

dialog_fill_modify::dialog_fill_modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_fill_modify)
{
    ui->setupUi(this);


    //    int num=ui->lineEdit->text().toInt();
    //    for(int i=0;i<num;i++){
    //        this->blank[i]=new QLineEdit(this);
    //        this->blank[i]->setGeometry(170+160*i,180,113,20);
    //        this->blank[i]->show();
    //    }
    //    qDebug()<<num;
    QSqlQuery query2;
    query2.prepare("select * from filling where QuestionID = :QuestionID");

    query2.bindValue(":QuestionID",Flag::modifyFlag);
    query2.exec();

    if(query2.first()) {
        QString q = query2.value(0).toString();
        ui->lineEdit_2->setText(q);
        QString content = query2.value(1).toString();
        ui->textEdit->setText(content);
        QString qblanknum = query2.value(2).toString();
        ui->lineEdit->setText(qblanknum);
        QString qanswer = query2.value(3).toString();

        int num=qblanknum.toInt();
        blank_num=num;
        //        QStringList strlist = qanswer.split("###");
        //        cout<<strlist.at(0).toLocal8Bit().data();
        for(int i=0;i<num;i++){
            this->blank[i]=new QLineEdit(this);
            this->blank[i]->setGeometry(120+140*i,180,113,20);
            QString txt=QString::fromStdString(qanswer.section("###", i, i).trimmed().toStdString());
           //将答案按照###分隔开，然后依次填入空格
           //tostdstring:将string 转换成QString
            this->blank[i]->setText(txt);
            this->blank[i]->show();
        }
        /*
        str[0]=blank[0];
        for(int j=1;qblanknum[j]!='#';j++){
           str.append(qblanknum[j]);
            this->blank[0]->setText(str);
        }
       int k=1;
        for(int i=j+2;i<num;i++){
            while(qblanknum[i]!='#')
                str.append(qblanknum[i]);
            this->blank[k]->setText(str);
        }*/

        QString qs = query2.value(4).toString();
        ui->lineEdit_7->setText(qs);
        int ql = query2.value(5).toInt();
        ui->comboBox->setCurrentIndex(ql);
        QString Is_order = query2.value(6).toString();
        ui->lineEdit_3->setText(Is_order);
    }

}

dialog_fill_modify::~dialog_fill_modify()
{
    delete ui;
}

void dialog_fill_modify::on_pushButton_clicked()
{

    qDebug()<<this->blank_num;
    // qDebug()<<this->flag;

    QString s=this->blank[0]->text();
    for(int i=1;i<this->blank_num;i++){
        s.append( "###"+this->blank[i]->text());

    }
    qDebug()<<s;
    QSqlQuery query;
    query.prepare
            ("UPDATE filling SET Question = :Question, Answer = :Answer , Score = :Score,QuestionLevel = :QuestionLevel, Is_order = :Is_order  where QuestionID = :QuestionID");
    query.bindValue(":QuestionID",ui->lineEdit_2->text());

    query.bindValue(":Question",ui->textEdit->toPlainText());
    query.bindValue(":Blank_num",ui->lineEdit->text());

    query.bindValue(":Answer",s);
    query.bindValue(":Score", ui->lineEdit_7->text());
    query.bindValue(":QuestionLevel", ui->comboBox->currentText());
    query.bindValue(":Is_order", ui->lineEdit_3->text());

    query.exec();

    this->close();
}
