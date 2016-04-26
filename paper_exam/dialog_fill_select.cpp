#include "dialog_fill_select.h"
#include "ui_dialog_fill_select.h"
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
Dialog_fill_select::Dialog_fill_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_fill_select)
{
    ui->setupUi(this);

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from filling");
    if(b){
        cout<<"ok1";
    }
    Dialog_fill_select::showList(&query2);
}

Dialog_fill_select::~Dialog_fill_select()
{
    delete ui;
}

void Dialog_fill_select::showList(QSqlQuery * query)const {
    ui->tableWidget->clearContents();
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("filling");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();

    ui->tableWidget->setColumnCount(lie-1);
    ui->tableWidget->setRowCount(ret);

    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"
                 <<"答案"<<"分值"<<"难度"<<"是否有序答案";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    while ( query->next()&& row<=ret ) {

        QString str[lie];
        QTableWidgetItem *item[lie];

        for(int i = 0; i < lie ; i++){
            if(i==2)
                continue;
            else if(i>2){
                if(i==6){
            int k = query->value(i).toInt();
            item[i] = new QTableWidgetItem();
            k==1?item[i]->setText("是"):item[i]->setText("否");
            ui->tableWidget->setItem(row, i-1, item[i]);
                }
                else{
                    str[i] = query->value(i).toString();
                    item[i] = new QTableWidgetItem();
                    QString txt = QString("%1").arg(str[i]);
                    item[i]->setText(txt);
                    ui->tableWidget->setItem(row, i-1, item[i]);
                }
            }
            else if(i<2){
            str[i] = query->value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
            }
        }
        row++;
    }
}
void Dialog_fill_select::on_pushButton_clicked()
{
    int level = ui->comboBox->currentIndex();
    QString strKey = ui->lineEdit->text();
    if(strKey !="" && level != 0){
         QSqlQuery keyQuery;
         keyQuery.prepare("select * from filling where Question like :QuestionKey and QuestionLevel = :QuestionLevel");
         keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
         keyQuery.bindValue(":QuestionLevel",level);
         bool b = keyQuery.exec();
         qDebug() << b;
         Dialog_fill_select::showList(&keyQuery);
    }
    else if(level != 0) {
        QSqlQuery level_query;
        level_query.prepare("select * from filling where QuestionLevel = :QuestionLevel");
        level_query.bindValue(":QuestionLevel",level);
        bool b = level_query.exec();
        qDebug() << b;
        Dialog_fill_select::showList(&level_query);
    }
    else if(strKey !=""){
        QSqlQuery keyQuery;
        keyQuery.prepare("select * from filling where Question like :QuestionKey");
        keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
        bool b = keyQuery.exec();
        qDebug() << b;
        Dialog_fill_select::showList(&keyQuery);
    }
    else{
        QSqlQuery query;
        query.exec("select * from filling");
        Dialog_fill_select::showList(&query);
    }
}
