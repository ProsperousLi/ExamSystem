#include "dialog_judgedelecte.h"
#include "ui_dialog_judgedelecte.h"
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
#include <QMessageBox>

using namespace std;
Dialog_judgedelecte::Dialog_judgedelecte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_judgedelecte)
{
    ui->setupUi(this);

    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("tf_question");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();



    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);
    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"<<"答案"<<"分值"<<"难度";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    //数据库显示到table里
    QSqlQuery query2;
     bool b= query2.exec("select * from tf_question");
       if(b){
           cout<<"ok1";
       }
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

Dialog_judgedelecte::~Dialog_judgedelecte()
{
    delete ui;
}

void Dialog_judgedelecte::on_pushButton_clicked()
{
    QTableWidgetItem *item = ui->tableWidget->currentItem();
    int id= ui->tableWidget->item(item->row(),0)->text().toInt();
    if(item == Q_NULLPTR) return;
    QMessageBox::StandardButton yn =
            QMessageBox::information(this, "删除", "确定要删除么？",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(yn == QMessageBox::Yes)
    {
    ui->tableWidget->removeRow(item->row());

       qDebug()<<id;

          //int id = item->data(item->row()).toInt();

       //  int id=index.sibling(curRow,0).data().toInt();


          QSqlQuery query;

            bool c =  query.prepare("delete from tf_question where QuestionID =:QuestionID");
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
