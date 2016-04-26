#include "Specific_information.h"
#include "ui_Specific_information.h"

#include <QScrollArea>
#include <QTextEdit>

#include <qsqldatabase.h>
#include <qsqltablemodel.h>
#include <qsqlquery.h>
#include <QTableWidgetItem>
#include <qtablewidget.h>
#include <QDebug>
#include <qdebug.h>
#include <iostream>
#include <qdebug.h>
#include <QSqlError>
#include <QSqlRecord>

#include <QMessageBox>
#include <test_id.h>
#include <QSqlQueryModel>

#include <QLabel>
#include <QWidget>
#include <QGridLayout>


Specific_information::Specific_information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Specific_information)
{
    ui->setupUi(this);

    QWidget *containWidget = new QWidget;
    containWidget->setFixedSize(5000,5000);
    ui->scrollArea->setWidget(containWidget);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    int id=test_id::test_Id;

    //    QSqlQueryModel *model = new QSqlQueryModel();
    //    model->setQuery("select single_select.Question,single_select.OptionA,single_select.OptionB,single_select.OptionC,single_select.OptionD from testpaper_single_select join single_select on testpaper_single_select.QuestionID=single_select.QuestionID join test_paper on testpaper_single_select.Testpaper_id=test_paper.Testpaper_id where test_paper.Testpaper_id=id");
    //    QSqlQuery query = model->query();
    //    for(int i = 0; i < model->rowCount(); i++)
    //    {
    //        qDebug() << model->record(i).value("Question").toString();
    //        qDebug() << model->record(i).value("OptionA").toString();
    //    }
    QSqlQuery query_title;
    query_title.prepare("select Testpaper_title from test_paper where Testpaper_id =:Testpaper_id");
    query_title.bindValue(":Testpaper_id",id);
    bool ok_title=query_title.exec();
    if(ok_title){
        query_title.next();
        qDebug()<<query_title.value(0).toString();
    }
    QSqlQuery query1;
    query1.prepare("select single_select.Question,single_select.OptionA,single_select.OptionB,single_select.OptionC,single_select.OptionD from testpaper_single_select join single_select on testpaper_single_select.QuestionID=single_select.QuestionID join test_paper on testpaper_single_select.Testpaper_id=test_paper.Testpaper_id where test_paper.Testpaper_id =:Testpaper_id");
    query1.bindValue(":Testpaper_id",id);
    bool ok1=query1.exec();
    qDebug()<<id;

    int rec_x=50;
    int rec_y=50;
    int test_num=1;
    if(ok1)
    {

        qDebug()<<"testpaper_single_select select success!";

        QLabel* test_title=new QLabel();
        test_title->setText("       试卷名: "+query_title.value(0).toString());
        test_title->setGeometry(100,10,50,50);
        test_title->setParent(containWidget);
        test_title->adjustSize();

        QLabel* select_title=new QLabel();
        select_title->setText("一.选择题:");
        select_title->setGeometry(rec_x,rec_y,50,50);
        select_title->setParent(containWidget);
        select_title->adjustSize();

        rec_y+=50;

        int select_num=0;
        while(query1.next())
            select_num++;
        query1.exec();
        int row=0;
        QLabel* show_select_question[select_num];
        QLabel* show_select_option[select_num*4];

        while ( query1.next() && row<=select_num ) {
            for(int i=0,j=0;i<=4;i++){
                if(i==0){
                    show_select_question[i]=new QLabel;
                    show_select_question[i]->setGeometry(rec_x,rec_y,50,50);
                    show_select_question[i]->setText(QString::number(test_num++,10)+'.'+query1.value(i).toString());
                    show_select_question[i]->setParent(containWidget);

                    show_select_question[i]->adjustSize();

                    qDebug()<<query1.value(i).toString();
                    rec_y+=50;
                }
                else if(i==1){
                    j=i-1;
                    show_select_option[i]=new QLabel;
                    show_select_option[i]->setGeometry(rec_x,rec_y,50,50);

                    show_select_option[i]->setText("A:"+query1.value(i).toString());
                    show_select_option[i]->setParent(containWidget);
                    show_select_option[i]->adjustSize();

                    qDebug()<<query1.value(i).toString();
                    rec_y+=50;

                }
                else if(i==2){
                    j=i-1;
                    show_select_option[i]=new QLabel;
                    show_select_option[i]->setGeometry(rec_x,rec_y,50,50);

                    show_select_option[i]->setText("B:"+query1.value(i).toString());
                    show_select_option[i]->setParent(containWidget);
                    show_select_option[i]->adjustSize();

                    qDebug()<<query1.value(i).toString();
                    rec_y+=50;

                }
                else if(i==3){
                    j=i-1;
                    show_select_option[i]=new QLabel;
                    show_select_option[i]->setGeometry(rec_x,rec_y,50,50);

                    show_select_option[i]->setText("C:"+query1.value(i).toString());
                    show_select_option[i]->setParent(containWidget);
                    show_select_option[i]->adjustSize();

                    qDebug()<<query1.value(i).toString();
                    rec_y+=50;

                }
                else {
                    j=i-1;
                    show_select_option[i]=new QLabel;
                    show_select_option[i]->setGeometry(rec_x,rec_y,50,50);

                    show_select_option[i]->setText("D:"+query1.value(i).toString());
                    show_select_option[i]->setParent(containWidget);
                    show_select_option[i]->adjustSize();

                    qDebug()<<query1.value(i).toString();
                    rec_y+=50;

                }
            }
            row++;
        }
    }

    QSqlQuery query2;
    query2.prepare("select tf_question.Question from testpaper_tf_question join tf_question on testpaper_tf_question.QuestionID=tf_question.QuestionID join test_paper on testpaper_tf_question.Testpaper_id=test_paper.Testpaper_id where test_paper.Testpaper_id =:Testpaper_id");
    query2.bindValue(":Testpaper_id",id);
    bool ok2=query2.exec();
    if(ok2)
    {
        qDebug()<<"testpaper_tf_question select success!";

        QLabel* tf_question_title=new QLabel();
        tf_question_title->setText("二.判断题:");
        tf_question_title->setGeometry(rec_x,rec_y,50,50);
        tf_question_title->setParent(containWidget);
        tf_question_title->adjustSize();

        rec_y+=50;

        int select_num=0;
        while(query2.next())
            select_num++;
        query2.exec();
        int row=0;
        QLabel* show_tf_question[select_num];
        while ( query2.next() && row<=select_num ) {
            show_tf_question[row]=new QLabel;
            show_tf_question[row]->setGeometry(rec_x,rec_y,50,50);
            show_tf_question[row]->setText(QString::number(test_num++,10)+'.'+query2.value(0).toString());
            show_tf_question[row]->setParent(containWidget);
            show_tf_question[row]->adjustSize();

            qDebug()<<query2.value(0).toString();
            //query1.next();
            row++;
            rec_y+=50;
        }
    }

    QSqlQuery query3;
    query3.prepare("select filling.Question from testpaper_filling join filling on testpaper_filling.QuestionID=filling.QuestionID join test_paper on testpaper_filling.Testpaper_id=test_paper.Testpaper_id where test_paper.Testpaper_id =:Testpaper_id");
    query3.bindValue(":Testpaper_id",id);
    bool ok3=query3.exec();
    if(ok3)
    {
        qDebug()<<"testpaper_filling select success!";

        QLabel* filling_title=new QLabel();
        filling_title->setText("三.填空题:");
        filling_title->setGeometry(rec_x,rec_y,50,50);
        filling_title->setParent(containWidget);
        filling_title->adjustSize();

        rec_y+=50;

        int select_num=0;
        while(query3.next())
            select_num++;
        query3.exec();
        int row=0;
        QLabel* show_filling_question[select_num];

        while ( query3.next() && row<=select_num ) {
            show_filling_question[row]=new QLabel;
            show_filling_question[row]->setGeometry(rec_x,rec_y,50,50);
            show_filling_question[row]->setText(QString::number(test_num++,10)+'.'+query3.value(0).toString());
            show_filling_question[row]->setParent(containWidget);
            show_filling_question[row]->adjustSize();


            qDebug()<<query3.value(0).toString();
            row++;
            rec_y+=50;
        }
    }
}

Specific_information::~Specific_information()
{
    delete ui;
}
