#include "dialog3_1delecte.h"
#include "ui_dialog3_1delecte.h"
#include <QTableWidget>
#include <qabstractitemview.h>
#include <QStringList>
#include <QTableWidgetItem>
#include <qsqldatabase.h>
#include <QDebug>
#include <qDebug>
#include <QSqlTableModel>
#include <qsqlrecord.h>
#include <qsqlquery.h>
#include<iostream>
#include <QModelIndex>
#include <QSqlError>
#include <qmessagebox.h>

using namespace std;
Dialog3_1delecte::Dialog3_1delecte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3_1delecte)
{
    ui->setupUi(this);

    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("single_select");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();



    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from single_select");
    if(b){
        cout<<"ok";
    }
    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"<<"选项A"<<"选项B"
                 << "选项C" << "选项D"<<"答案"<<"分值"<<"难度";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    int row=0;

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    while ( query2.next()&& row<=ret ) {

        QString str[9];
        QTableWidgetItem *item[9];

        for(int i = 0; i < 9 ; i++){
            str[i] = query2.value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
        }
        row++;
    }
}

Dialog3_1delecte::~Dialog3_1delecte()
{
    delete ui;
}

void Dialog3_1delecte::on_pushButton_clicked()    //删除选中行
{
    QTableWidgetItem *item = ui->tableWidget->currentItem();
    int id= ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();
    if(item == Q_NULLPTR) return;
    QMessageBox::StandardButton yn = QMessageBox::information(this, "删除", "确定要删除么？",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(yn == QMessageBox::Yes)
    {

        ui->tableWidget->removeRow(item->row());

        qDebug()<<id;

        QSqlQuery query;

        bool c =  query.prepare("delete from single_select where QuestionID =:QuestionID");
        if (c)
        {
            qDebug()<<"yes  ...";
        }

        query.bindValue(":QuestionID",id);
        bool ok=query.exec();
        if(ok)
        {
            qDebug()<<"delete success";
        }
        else
        {
            qDebug()<<"delete error"<<query.lastError().text();

        }
    }
}


void Dialog3_1delecte::on_pushButton_2_clicked()
{
    this->close();
}
