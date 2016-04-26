#include "dialog_judge_modify.h"
#include "ui_dialog_judge_modify.h"

#include "qsqlquery.h"
#include "flag.h"

dialog_judge_modify::dialog_judge_modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_judge_modify)
{
    ui->setupUi(this);
    //数据库显示到lineEdit
//    QSqlQuery query2;
//    query2.prepare("select * from tf_question where QuestionID = :QuestionID");

//    query2.bindValue(":QuestionID",Flag::modifyFlag);
//    query2.exec();

//    if(query2.first()) {
//        QString q = query2.value(0).toString();
//        ui->lineEdit_2->setText(q);
//        QString content = query2.value(1).toString();
//        ui->textEdit->setText(content);
//        QString qanswer = query2.value(2).toString();
//        ui->lineEdit_6->setText(qanswer);
//        QString qs = query2.value(3).toString();
//        ui->lineEdit_7->setText(qs);
//        int ql = query2.value(4).toInt();
//        ui->comboBox->setCurrentIndex(ql);


}

dialog_judge_modify::~dialog_judge_modify()
{
    delete ui;
}

void dialog_judge_modify::on_pushButton_clicked()
{
    QSqlQuery query;

    query.prepare("delete from tf_question where QuestionID =:QuestionID");
    query.bindValue(":QuestionID",ui->lineEdit_2->text().toInt());
    query.exec();

    query.prepare("INSERT INTO tf_question( QuestionID,Question,Answer,Score,QuestionLevel) "
                  "VALUES (:QuestionID, :Question,:Answer, :Score, :QuestionLevel)");

    query.bindValue(":QuestionID",ui->lineEdit_2->text().toInt());
    query.bindValue(":Question",ui->textEdit->toPlainText());
    query.bindValue(":Answer", ui->lineEdit_6->text());
    query.bindValue(":Score", ui->lineEdit_7->text());
    query.bindValue(":QuestionLevel", ui->comboBox->currentText());

    query.exec();

    this->close();
}
