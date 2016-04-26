#include "tuichu_true.h"
#include "ui_tuichu_true.h"
#include <exam_windows.h>
#include <student_exam_login.h>
#include <QSqlQuery>
#include<qdebug.h>

tuichu_true::tuichu_true(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tuichu_true)
{
    ui->setupUi(this);
    ui->lineEdit->setText(student_exam_login::login);
    QSqlQuery keyQuery;
    keyQuery.prepare("select * from student where stu_num = "+student_exam_login::login);
    keyQuery.exec();
    keyQuery.first();
    ui->lineEdit_2->setText(keyQuery.value(0).toString());
    QString sorce = QString::number(exam_windows::all_sorce);
  qDebug()<<sorce<<"sorce";
    ui->lineEdit_4->setText(sorce+"分");
    int int_time =exam_windows::another_time;
    int hour = int_time/3600;
    int mini = (int_time-3600*hour)/60;
    int second = (int_time-3600*hour-mini*60);
    QString time1 = QString::number(hour);
    QString time2 = QString::number(mini);
    QString time3 = QString::number(second);
    ui->lineEdit_3->setText(time1+"小时"+time2+"分钟"+time3+"秒");

}

tuichu_true::~tuichu_true()
{
    delete ui;
}

void tuichu_true::on_pushButton_clicked()
{

    this->close();
}
