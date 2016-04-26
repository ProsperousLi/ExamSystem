#include "read_data_from_sql.h"
#include <qsqltablemodel.h>
#include <QString>
#include <qsqlquery.h>
#include <QTextEdit>
#include <qdebug.h>
#include <iostream>

read_data_from_sql::read_data_from_sql()
{
}

void read_data_from_sql::read_sql(QString table_name, QTextEdit *edit, QString id)
{
    QSqlQuery query;
    //QString id_str = QString::number(id); //这里做一下转换，否则下面的sql语句无法识别int型的数据
    query.exec("select * from "+table_name+" where QuestionID = "+ id);
    query.first();//id是唯一的，所以只取第一个
    QString str = query.value(1).toString();
    //qDebug()<<str; //调试
    edit->setText(str);
}

int read_data_from_sql::read_sql_fill(QString table_name,QTextEdit *edit,QString id)  //返回填空题的空数
{
    QSqlQuery query;
    //QString id_str = QString::number(id); //这里做一下转换，否则下面的sql语句无法识别int型的数据
    query.exec("select * from "+table_name+" where QuestionID = "+ id);
    query.first();//id是唯一的，所以只取第一个
    QString str = query.value(1).toString();
    int len = query.value(2).toInt();
    //qDebug()<<str; //调试
    edit->setText(str);
    return len;
}


void read_data_from_sql::read_sql(QString table_name, QLineEdit *a, QLineEdit *b, QLineEdit *c, QLineEdit *d, QString id)
{
    QSqlQuery query;
    //QString id_str = QString::number(id);//这里做一下转换，否则下面的sql语句无法识别int型的数据
    query.exec("select * from "+table_name+" where QuestionID = " +id);
    query.first();//id是唯一的，所以只取第一个
    QString str_a = query.value(2).toString();
    QString str_b = query.value(3).toString();
    QString str_c = query.value(4).toString();
    QString str_d = query.value(5).toString();
    //qDebug()<<str; //调试
    a->setText(str_a);
    b->setText(str_b);
    c->setText(str_c);
    d->setText(str_d);
}
