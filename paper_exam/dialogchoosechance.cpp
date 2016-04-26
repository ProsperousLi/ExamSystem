#include "dialogchoosechance.h"
#include "dialog_choose_select_modify.h"
#include "ui_dialogchoosechance.h"
#include <qsqldatabase.h>
#include <qsqltablemodel.h>
#include <qsqldriver.h>
#include <qsqlquery.h>
#include <QTableWidgetItem>
#include <qstring.h>
#include <qdebug.h>
#include <QDebug>
#include<iostream>
#include <qtablewidget.h>
#include <QModelIndex>
#include <flag.h>
using namespace std;
Dialogchoosechance::Dialogchoosechance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogchoosechance)
{
    ui->setupUi(this);
    Dialogchoosechance::showList();

}

Dialogchoosechance::~Dialogchoosechance()
{
    delete ui;

}

void Dialogchoosechance::on_pushButton_clicked()
{


    qDebug() << Flag::modifyFlag;
    Flag::modifyFlag = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();

    Dialog_choose_select_modify d;
    d.exec();

}

void Dialogchoosechance::showList()const{
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

void Dialogchoosechance::on_pushButton_2_clicked()
{
    Dialogchoosechance::showList();
}
