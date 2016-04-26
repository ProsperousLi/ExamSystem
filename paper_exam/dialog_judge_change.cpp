#include "dialog_judge_change.h"
#include "ui_dialog_judge_change.h"
#include "dialog_judge_modify.h"

#include "qsqltablemodel.h"
#include "qsqlquery.h"
#include "iostream"
#include "flag.h"


using namespace std;

dialog_judge_change::dialog_judge_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_judge_change)
{
    ui->setupUi(this);
    dialog_judge_change::showList();
}

dialog_judge_change::~dialog_judge_change()
{
    delete ui;
}

void dialog_judge_change::showList()const{
    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("tf_question");
    model2->select();
    int ret = model2->rowCount();
    int lie = model2->columnCount();



    ui->tableWidget->setColumnCount(lie);
    ui->tableWidget->setRowCount(ret);

    //数据库显示到table里
    QSqlQuery query2;
    bool b= query2.exec("select * from tf_question");
    if(b){
        cout<<"ok";
    }
    QStringList headerLabels;
    headerLabels << "问题编号" << "问题内容"<<"答案"<<"分值"<<"难度";
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

void dialog_judge_change::on_pushButton_3_clicked()
{
    Flag::modifyFlag = ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toInt();

    dialog_judge_modify d;
    d.exec();
}

void dialog_judge_change::on_pushButton_4_clicked()
{
    dialog_judge_change::showList();
}
