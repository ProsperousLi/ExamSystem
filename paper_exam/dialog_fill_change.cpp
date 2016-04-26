#include "dialog_fill_change.h"
#include "ui_dialog_fill_change.h"
#include "dialog_fill_modify.h"

#include "qsqltablemodel.h"
#include "qsqlquery.h"
#include "iostream"
#include "flag.h"


using namespace std;

dialog_fill_change::dialog_fill_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_fill_change)
{
    ui->setupUi(this);
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

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from filling");
    if(b){
        cout<<"ok1";
    }
    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    while ( query2.next()&& row<=ret ) {

        QString str[lie];
        QTableWidgetItem *item[lie];

        for(int i = 0; i < lie ; i++){
            if(i==2)
                continue;
            else if(i>2){
                if(i==6){
            int k = query2.value(i).toInt();
            item[i] = new QTableWidgetItem();
            k==1?item[i]->setText("是"):item[i]->setText("否");
            ui->tableWidget->setItem(row, i-1, item[i]);
                }
                else{
                    str[i] = query2.value(i).toString();
                    item[i] = new QTableWidgetItem();
                    QString txt = QString("%1").arg(str[i]);
                    item[i]->setText(txt);
                    ui->tableWidget->setItem(row, i-1, item[i]);
                }
            }
            else if(i<2){
            str[i] = query2.value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
            }
        }
        row++;
    }
}

dialog_fill_change::~dialog_fill_change()
{
    delete ui;
}

void dialog_fill_change::showList()const{
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

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from filling");
    if(b){
        cout<<"ok1";
    }
    int row=0;
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    while ( query2.next()&& row<=ret ) {

        QString str[lie];
        QTableWidgetItem *item[lie];

        for(int i = 0; i < lie ; i++){
            if(i==2)
                continue;
            else if(i>2){
                if(i==6){
            int k = query2.value(i).toInt();
            item[i] = new QTableWidgetItem();
            k==1?item[i]->setText("是"):item[i]->setText("否");
            ui->tableWidget->setItem(row, i-1, item[i]);
                }
                else{
                    str[i] = query2.value(i).toString();
                    item[i] = new QTableWidgetItem();
                    QString txt = QString("%1").arg(str[i]);
                    item[i]->setText(txt);
                    ui->tableWidget->setItem(row, i-1, item[i]);
                }
            }
            else if(i<2){
            str[i] = query2.value(i).toString();
            item[i] = new QTableWidgetItem();
            QString txt = QString("%1").arg(str[i]);
            item[i]->setText(txt);
            ui->tableWidget->setItem(row, i, item[i]);
            }
        }
        row++;
    }
}

void dialog_fill_change::on_pushButton_3_clicked()
{
    Flag::modifyFlag = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();

    dialog_fill_modify d;
    d.exec();
}

void dialog_fill_change::on_pushButton_4_clicked()
{
    dialog_fill_change::showList();
}
