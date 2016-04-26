#include "dialog_choose_select.h"
#include "ui_dialog_choose_select.h"
#include "dialog_select_questions_level.h"


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
Dialog_choose_select::Dialog_choose_select(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_choose_select)
{
    ui->setupUi(this);

    //数据库显示到table里
    QSqlQuery query;
    bool b= query.exec("select * from single_select");
    if(b){
        cout<<"ok";
    }
    Dialog_choose_select::showList(&query);

}

Dialog_choose_select::~Dialog_choose_select()
{
    delete ui;
}

void Dialog_choose_select::showList(QSqlQuery * query) const{
    ui->tableWidget->clearContents();
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;

    model2->setTable("single_select");
    // model2->setFilter(tr("QuestionLevel=")+ui->comboBox->currentIndex()+tr(""));
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();

    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"<<"选项A"<<"选项B"
                 << "选项C" << "选项D"<<"答案"<<"分值"<<"难度";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row=0;

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

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


void Dialog_choose_select::on_pushButton_clicked()
{
    int level = ui->comboBox->currentIndex();
    QString strKey = ui->lineEdit->text();
    if(strKey !="" && level != 0){
         QSqlQuery keyQuery;
         keyQuery.prepare("select * from single_select where Question like :QuestionKey and QuestionLevel = :QuestionLevel");
         keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
         keyQuery.bindValue(":QuestionLevel",level);
         bool b = keyQuery.exec();
         qDebug() << b;
         Dialog_choose_select::showList(&keyQuery);
    }
    else if(level != 0) {
        QSqlQuery level_query;
        level_query.prepare("select * from single_select where QuestionLevel = :QuestionLevel");
        level_query.bindValue(":QuestionLevel",level);
        bool b = level_query.exec();
        qDebug() << b;
        Dialog_choose_select::showList(&level_query);
    }
    else if(strKey !=""){
        QSqlQuery keyQuery;
        keyQuery.prepare("select * from single_select where Question like :QuestionKey");
        keyQuery.bindValue(":QuestionKey","%"+strKey +"%");
        bool b = keyQuery.exec();
        qDebug() << b;
        Dialog_choose_select::showList(&keyQuery);
    }
    else{
        QSqlQuery query;
        query.exec("select * from single_select");
        Dialog_choose_select::showList(&query);
    }

}

void Dialog_choose_select::on_comboBox_currentIndexChanged(int index)
{
    //qDebug() << index;
    //emit Dialog_choose_select::on_pushButton_clicked();
}
