#include "PaperMake.h"
#include "ui_PaperMake.h"

#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <Random_select.h>
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
PaperMake::PaperMake(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaperMake)
{
    ui->setupUi(this);
}

PaperMake::~PaperMake()
{
    delete ui;
}

void PaperMake::on_pushButton_clicked()//试卷生成
{
    int is_flag=0;
    int test_num;
    QString num=ui->lineEdit_10->text();
    if(num.isEmpty())
        test_num=1;
    else
        test_num=num.toInt();

    QString title=ui->lineEdit_9->text();

    QString knowledge_point=ui->lineEdit_8->text();

    int select_score=ui->lineEdit->text().toInt();
    int select_num=ui->lineEdit_2->text().toInt();
    int tf_question_score=ui->lineEdit_3->text().toInt();
    int tf_question_num=ui->lineEdit_4->text().toInt();
    int filling_score=ui->lineEdit_5->text().toInt();
    int filling_num=ui->lineEdit_6->text().toInt();
    int score=ui->lineEdit_7->text().toInt();
    int fill_score=select_score*select_num+tf_question_score*tf_question_num
            +filling_score*filling_num;
    if(score==fill_score&&score!=0)  {

        Random_select random;
        for(int i=0;i<test_num;i++){
            if(random.random_id(select_num,select_score,knowledge_point,ui->comboBox->currentIndex(),QString(QLatin1String("single_select")))){
                if(random.random_id(tf_question_num,tf_question_score,knowledge_point,ui->comboBox->currentIndex(),QString(QLatin1String("tf_question")))){
                    if(random.random_id(filling_num,filling_score,knowledge_point,ui->comboBox->currentIndex(),QString(QLatin1String("filling")))){


                        QSqlQuery query;
                        query.prepare("INSERT INTO test_paper(Testpaper_title,Testpaper_maketime,Testpaper_score,Testpaper_difficultylevel,Testpaper_description) "
                                      "VALUES (:Testpaper_title,:Testpaper_maketime, :Testpaper_score, :Testpaper_difficultylevel,:Testpaper_description)");
                        query.bindValue(":Testpaper_title",title);
//                        qDebug()<<title;
                        QDateTime cur=QDateTime::currentDateTime();
                        query.bindValue(":Testpaper_maketime",cur);

//                        qDebug()<<cur;

                        query.bindValue(":Testpaper_score", fill_score);
//                        qDebug()<<fill_score;
                        query.bindValue(":Testpaper_difficultylevel", ui->comboBox->currentText());
                        qDebug()<<ui->comboBox->currentText();
                        if(knowledge_point.isEmpty()){
                            query.bindValue(":Testpaper_description", "综合");
//                            qDebug()<<"综合";
                        }
                        else{
                            query.bindValue(":Testpaper_description", knowledge_point);
//                            qDebug()<<knowledge_point;
                        }

                        bool b =query.exec();
                        if(b){
//                            qDebug()<<"ok";

                            QSqlQuery query;
                            query.prepare("select Testpaper_id from Test_paper");
                            query.exec();
                            query.last();
                            QString cur_Testpaper_id= query.value(0).toString();
                            qDebug()<<cur_Testpaper_id<<"111111111111111111111111111";
                            for(int i=0;i<select_num;i++){

                                QSqlQuery query;
                                query.prepare("INSERT INTO Testpaper_single_select(Testpaper_id,QuestionID) "
                                              "VALUES (:Testpaper_id,:QuestionID)");
                                query.bindValue(":Testpaper_id",cur_Testpaper_id);
                                query.bindValue(":QuestionID",random.select_id[i]);
                                qDebug()<<random.select_id[i]<<"2222222222";
                                query.exec();

                            }
                            for(int i=0;i<tf_question_num;i++){

                                QSqlQuery query;
                                query.prepare("INSERT INTO Testpaper_tf_question(Testpaper_id,QuestionID) "
                                              "VALUES (:Testpaper_id,:QuestionID)");
                                query.bindValue(":Testpaper_id",cur_Testpaper_id);
                                query.bindValue(":QuestionID",random.judge_id[i]);
                                qDebug()<<random.judge_id[i]<<"33333333333";

                                query.exec();

                            }
                            for(int i=0;i<filling_num;i++){

                                QSqlQuery query;
                                query.prepare("INSERT INTO Testpaper_filling(Testpaper_id,QuestionID) "
                                              "VALUES (:Testpaper_id,:QuestionID)");
                                query.bindValue(":Testpaper_id",cur_Testpaper_id);
                                query.bindValue(":QuestionID",random.fill_id[i]);
                                qDebug()<<random.fill_id[i]<<"444444444";

                                query.exec();
                            }
                        }
                    }
                    else{
                        warnning("filling表不符合要求");is_flag=1;break;
                        }

                }
                else{
                    warnning("tf_question表不符合要求");is_flag=1;break;
                }

            }
            else{
                warnning("sing_select表不符合要求");is_flag=1;break;
            }
        }
     if(is_flag==0)
         this->close();
    }
    else
        warnning("分数组合错误，请重新输入！");
}

void PaperMake::warnning(QString warnning)
{
    QMessageBox::information(this,"warnning!",warnning);

}

void PaperMake::on_pushButton_2_clicked()   //试卷重置
{
    ui->lineEdit_9->clear();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    ui->lineEdit_8->clear();
    ui->comboBox->setCurrentIndex(0);
}

void PaperMake::on_pushButton_3_clicked()
{
    this->close();
}
