#include "PaperInformation.h"
#include "ui_PaperInformation.h"

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

#include <Specific_information.h>

#include <test_id.h>

#include <QStandardItemModel>
#include <QModelIndexList>
#include <QList>

PaperInformation::PaperInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaperInformation)
{
    ui->setupUi(this);
    PaperInformation::showList_forshow();

}

PaperInformation::~PaperInformation()
{
    delete ui;
}

void PaperInformation::showList(QSqlQuery * query2)const
{
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("test_paper");
    model2->select();
    int ret = 0;
    int lie=model2->columnCount();


    while ( query2->next() ) {
        ret++;
    }
    query2->first();
    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    QStringList headerLabels;
    headerLabels << "试卷号" << "试卷名称"
                 <<"试卷生成时间"<<"试卷分数"<<"试卷等级"<<"试卷知识点";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    //数据库显示到table里
    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
    while ( query2&& row<=ret ) {

        QString str[lie];
        QTableWidgetItem *item[lie];

        for(int i = 0; i < lie ; i++){
            str[i] = query2->value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
        }
        query2->next();
        row++;
    }
    ui->lineEdit_2->setText(QString::number(ret,10));
    ui->lineEdit_2->setDisabled(true);
}
void PaperInformation::showList_forshow()const
{
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("test_paper");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();



    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    QStringList headerLabels;
    headerLabels << "试卷号" << "试卷名称"
                 <<"试卷生成时间"<<"试卷分数"<<"试卷等级"<<"试卷知识点";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from test_paper");
    if(b){
        qDebug()<<"ok";
    }
    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);

    while ( query2.next()&& row<=ret ) {

        QString str[lie];
        QTableWidgetItem *item[lie];

        for(int i = 0; i < lie ; i++){
            str[i] = query2.value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
        }
        row++;
    }

    ui->lineEdit_2->setText(QString::number(ret,10));
    ui->lineEdit_2->setDisabled(true);
}
void PaperInformation::on_pushButton_clicked()
{
    this->close();
}

void PaperInformation::on_pushButton_3_clicked() //试卷查询
{
    QString test_name = ui->lineEdit_3->text();
    QString level = ui->comboBox->currentText();
    QString strKey = ui->lineEdit->text();
    qDebug()<<level;
    qDebug()<<strKey;
    qDebug()<<test_name;

        QSqlQuery keyQuery;
        keyQuery.prepare("select * from test_paper where Testpaper_description like :Testpaper_description and Testpaper_difficultylevel like :Testpaper_difficultylevel and Testpaper_title like :Testpaper_title");
        keyQuery.bindValue(":Testpaper_description","%"+strKey+"%");
        keyQuery.bindValue(":Testpaper_difficultylevel","%"+level+"%");
        keyQuery.bindValue(":Testpaper_title","%"+test_name+"%");

        keyQuery.exec();
        PaperInformation::showList(&keyQuery);


}

void PaperInformation::on_pushButton_4_clicked()
{
    PaperInformation::showList_forshow();
}

void PaperInformation::on_pushButton_2_clicked()  //删除试卷
{
//    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->tableWidget->model());
//    QModelIndexList modelIndexList=ui->tableWidget->selectionMode().selectedIndexes();
//    foreach (QModelIndex modelIndex, modelIndexList)
//    {     qDebug()<<"="<<model->data(modelIndex).toString();    }



    QList<QTableWidgetItem*> items = ui->tableWidget->selectedItems();
    int item_count = items.count();

    QMessageBox::StandardButton yn =
            QMessageBox::information(this, "删除", "确定要删除么？",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(yn == QMessageBox::Yes){
        for(int i=0,j=0; i<item_count/6;i++,j+=6)
        {
            //获取选中的行
            int cur_row=ui->tableWidget->row(items.at(j));
            int id= ui->tableWidget->item(cur_row,0)->text().toInt();

            ui->tableWidget->removeRow(cur_row);
            //               qDebug()<<id<<"ui->tableWidget->removeRow(cur_row)";

            QSqlQuery query1;
            query1.prepare("delete from testpaper_single_select where Testpaper_id =:Testpaper_id");
            query1.bindValue(":Testpaper_id",id);
            bool ok1=query1.exec();
            if(ok1)
                qDebug()<<"testpaper_single_select delete success!";

            QSqlQuery query2;
            query2.prepare("delete from testpaper_tf_question where Testpaper_id =:Testpaper_id");
            query2.bindValue(":Testpaper_id",id);
            bool ok2=query2.exec();
            if(ok2)
                qDebug()<<"testpaper_tf_question delete success!";

            QSqlQuery query3;
            query3.prepare("delete from testpaper_filling where Testpaper_id =:Testpaper_id");
            query3.bindValue(":Testpaper_id",id);
            bool ok3=query3.exec();
            if(ok3)
                qDebug()<<"testpaper_filling delete success!";

            QSqlQuery query;
            query.prepare("delete from test_paper where Testpaper_id =:Testpaper_id");
            query.bindValue(":Testpaper_id",id);
            bool ok=query.exec();
            if(ok)
                qDebug()<<"test_paper delete success!";
        }
    }
}

void PaperInformation::on_pushButton_5_clicked()  //查看试卷
{
    QTableWidgetItem *item = ui->tableWidget->currentItem();
    test_id::test_Id= ui->tableWidget->item(item->row(),0)->text().toInt();

    Specific_information spe;
    spe.exec();
}
