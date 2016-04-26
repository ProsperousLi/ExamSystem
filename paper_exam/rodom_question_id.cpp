#include "rodom_question_id.h"
#include <arrary_sql_sort.h>
#define MAX 1000
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <qsqltablemodel.h>
#include <qdebug.h>
#include <iostream>
#include <time.h>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;



rodom_question_id::rodom_question_id()
{

}


template<typename Fwd>
void printRange(Fwd first,Fwd last){

    cout << "{";
    while (first != last){
        qDebug() << * first;
        if(++first != last)
            cout <<' ';
    }
    cout << "}" << endl;
}


template<typename C>
void printContainer(const C& c){
    printRange(c.begin(),c.end());
}

int rodom_question_id::random_id(bool if_order,QString database_name){

    QSqlQuery query;
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable(database_name);
    model2->select();
    int ret = model2->rowCount();
    //有序的试题id处理
    if(if_order == 0)   //
    {

        int row =0;
        QString Q_id[ret];
        query.exec("select * from "+database_name);
        while (query.next()&& row<ret ) {
            Q_id[row] = query.value(0).toString();
            qDebug()<<Q_id[row]+" rodom_question_id::random_id";
            row++;
        }
        //将其id存于另一个数组里
        for (int i=0; i<ret ;i++) {
            arrary_id[i]=Q_id[i];
        }
    }
    //无序的试题id处理
    else
    {
        int row =0;
        QString Q_id[ret];
        query.exec("select * from "+database_name);
        while (query.next()&& row<=ret ) {
            Q_id[row] = query.value(0).toString();
            row++;
        }//先有序存起来
        vector<QString> v;
        back_insert_iterator<std::vector<QString> > p = back_inserter(v);
        for(int i = 0; i < ret; ++i){
            *p = Q_id[i];
        }
        printContainer(v);
        random_shuffle(v.begin(), v.end());//随机排列
        printContainer(v); //此时是无序的。
        //将其id存于另一个数组里
        std::vector <QString>::iterator vIter;
        int i = 0;
        for (vIter = v.begin(); vIter != v.end(); vIter++) {
            arrary_id[i]= *vIter;
            qDebug()<<arrary_id[i]<<"std::vector <QString>::iterator vIter";
            i++;
        }
    }
    return ret;
}




