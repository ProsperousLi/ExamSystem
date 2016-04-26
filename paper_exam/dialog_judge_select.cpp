#include "dialog_judge_select.h"
#include "ui_dialog_judge_select.h"
#include <qsqldatabase.h>
#include <qsqltablemodel.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <QTableWidgetItem>
#include <qstring.h>
#include <qdebug.h>
#include <QDebug>
#include<iostream>
using namespace std;


Dialog_judge_select::Dialog_judge_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_judge_select)
{
    ui->setupUi(this);

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from tf_question");
    if(b){
        cout<<"ok1";
    }
    Dialog_judge_select::showList(&query2);
}

Dialog_judge_select::~Dialog_judge_select()
{
    delete ui;
}

void Dialog_judge_select::showList(QSqlQuery * query)const{

    ui->tableWidget->clearContents();
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("tf_question");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();

    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"<<"空格数量"<<"答案"<<"分值"<<"难度";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    while ( query->next()&& row<=ret ) {
        QString str[9];
        QTableWidgetItem *item[9];

        for(int i = 0; i < 9 ; i++){
            str[i] = query->value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
        }
        row++;
    }
}

void Dialog_judge_select::on_pushButton_clicked()
{
    int level = ui->comboBox->currentIndex();
    QString strKey = ui->lineEdit->text();
    if(strKey !="" && level != 0){
         QSqlQuery keyQuery;
         keyQuery.prepare("select * from tf_question where Question like :QuestionKey and QuestionLevel = :QuestionLevel");
         keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
         keyQuery.bindValue(":QuestionLevel",level);
         bool b = keyQuery.exec();
         qDebug() << b;
         Dialog_judge_select::showList(&keyQuery);
    }
    else if(level != 0) {
        QSqlQuery level_query;
        level_query.prepare("select * from tf_question where QuestionLevel = :QuestionLevel");
        level_query.bindValue(":QuestionLevel",level);
        bool b = level_query.exec();
        qDebug() << b;
        Dialog_judge_select::showList(&level_query);
    }
    else if(strKey !=""){
        QSqlQuery keyQuery;
        keyQuery.prepare("select * from tf_question where Question like :QuestionKey");
        keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
        bool b = keyQuery.exec();
        qDebug() << b;
        Dialog_judge_select::showList(&keyQuery);
    }
    else{
        QSqlQuery query;
        query.exec("select * from tf_question");
        Dialog_judge_select::showList(&query);
    }
}
