#include "Random_select.h"

#include <QSqlTableModel>
#include <QComboBox>
#include <QSqlQuery>
#include <QDebug>
#include <iostream>
#include <time.h>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

Random_select::Random_select(QWidget *parent) :
    QWidget(parent)
{
}

int Random_select::random_id(int num,int score,QString keypoint, int level, QString database_name)
{

    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable(database_name);
    model2->select();
    int ret = model2->rowCount();

    if(level!=0){
        QSqlQuery keyQuery;
        keyQuery.prepare("select * from "+database_name+" where Question like :QuestionKey and Score = :score and QuestionLevel = :QuestionLevel");
        keyQuery.bindValue(":QuestionKey","%"+keypoint +"%");
        keyQuery.bindValue(":score",score);
        keyQuery.bindValue(":QuestionLevel",level);
        qDebug()<<level<<"试卷的等级";
        bool b = keyQuery.exec();
        if(b){
//            qDebug()<<"ok";

            QString Q_id[ret];
            int row=0;
            while ( keyQuery.next()&& row<ret) {
                Q_id[row] = keyQuery.value(0).toString();
                row++;
            }
            if(row>=num){
                if(database_name.toStdString()=="single_select")
                random_id_help(Q_id, select_id,row,num);
                else if(database_name.toStdString()=="tf_question")
                    random_id_help(Q_id, judge_id,row,num);
                else if(database_name.toStdString()=="filling")
                    random_id_help(Q_id, fill_id,row,num);
               return 1;
            }
            else
               return 0;
        }
    }
    else{
        QSqlQuery keyQuery;
        keyQuery.prepare("select * from "+database_name+" where Question like :QuestionKey and Score = :score");
        keyQuery.bindValue(":QuestionKey","%"+keypoint +"%");
        keyQuery.bindValue(":score",score);
        bool b = keyQuery.exec();
        if(b){
            //qDebug()<<"ok";

            QString Q_id[ret];
            int row=0;
            while ( keyQuery.next()&& row<=ret) {
                Q_id[row]=keyQuery.value(0).toString();
                row++;
            }
            if(row>=num){

                if(database_name.toStdString()=="single_select"){
                random_id_help(Q_id, select_id,row,num);
                qDebug()<<"select_id";
                }
                else if(database_name.toStdString()=="tf_question"){
                    qDebug()<<"judge_id";
                    random_id_help(Q_id, judge_id,row,num);
                }
                else if(database_name.toStdString()=="filling"){
                    random_id_help(Q_id, fill_id,row,num);
                    qDebug()<<"fill_id";

                }
                return 1;
            }
            else
                return 0;
        }
        else
            qDebug()<<"no";
    }
}
void Random_select::random_id_help(QString* Q_id,QString* array_id,int row,int num)
{
    vector<QString> v;
        back_insert_iterator<std::vector<QString> > p = back_inserter(v);
        for(int i = 0; i < row; ++i){
            *p = Q_id[i];
        }
        random_shuffle(v.begin(), v.end());//随机排列
        //将其id存于另一个数组里
        std::vector <QString>::iterator vIter;
        int i = 0;
        for (vIter = v.begin(); vIter != v.end()&&i<num; vIter++) {
            array_id[i]= *vIter;
            qDebug()<<array_id[i]<<"std::vector <QString>::iterator vIter";
            i++;
        }

}
