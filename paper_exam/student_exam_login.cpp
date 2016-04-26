#include "student_exam_login.h"
#include "ui_student_exam_login.h"

#include <QSqlTableModel>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include <qdebug.h>

QString student_exam_login::login = "110";
QString student_exam_login::pwd_data="2";
QString student_exam_login::id_know="0";

student_exam_login::student_exam_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_exam_login)
{
    ui->setupUi(this);
    //密码为非明码
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    //设置背景图片
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/4.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    //设置按钮的颜色
    ui->pushButton->setStyleSheet("background-color: rgb(170, 0, 255);");
    ui->pushButton_2->setStyleSheet("background-color: rgb(255, 0, 0);");
}

student_exam_login::~student_exam_login()
{
    delete ui;
}

void student_exam_login::on_pushButton_2_clicked()  //关闭按钮
{
    this->close();
}


void student_exam_login::on_pushButton_clicked()  //登陆按钮
{
    if(ui->radioButton->isChecked()||ui->radioButton_2->isChecked())
    {
        qDebug()<<"loginClick";
        QString str = ui->lineEdit->text();
        QString str2 = ui->lineEdit_2->text();

        QSqlTableModel *model2;
        model2 = new QSqlTableModel;
        model2->setTable("student");
        model2->select();
        int ret = model2->rowCount();

        int row=0;
        QSqlQuery query2;
        if(ui->radioButton->isChecked()){
            query2.exec("select * from student");
        }
        else if(ui->radioButton_2->isChecked()){
            query2.exec("select * from admin");
        }

        bool flag = 0;
        while(query2.next() && row<=ret ){
            flag = 0;
            QString id;
            QString pwd;
            if(ui->radioButton->isChecked()){//学生
                id = query2.value(2).toString();
                pwd = query2.value(1).toString();
                student_exam_login::id_know="1";
            }
            else if(ui->radioButton_2->isChecked()){//管理员
                qDebug()<<"guanliyuanlogin";
                id = query2.value(0).toString();
                pwd = query2.value(1).toString();
                student_exam_login::id_know="2";
            }
            if(str==id && str2==pwd)
            {
                student_exam_login::login=str;
                student_exam_login::pwd_data=str2;
                accept();
                qDebug()<<"zhanghaomima";
                flag = 0;
                break;
            }
            else{
                flag = 1;
            }
        }

        if(1==flag) {
            QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!!!"),QMessageBox::Yes);
            ui->lineEdit->clear();                   //清除用户名
            ui->lineEdit_2->clear();                 //清除密码
        }

    }
    else{
         QMessageBox::warning(this,tr("警告"),tr("请选择身份登陆！！！"),QMessageBox::Yes);
    }

}
