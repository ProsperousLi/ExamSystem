#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <qpixmap.h>
#include <qstring.h>
#include <QDebug>
#include <qdebug.h>
 #include "mainwindow.h"
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <qsqltablemodel.h>
#include <qmessagebox.h>
#include <iostream>
#include <qsqlrecord.h>

using namespace std;
DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::on_DialogLogin_accepted()
{
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/1.jpg");
        QPalette palette;
        palette.setBrush(backgroundRole(), QBrush(pixmap));
        setPalette(palette);
}

void DialogLogin::on_pushButton_clicked()
{

    QString str = ui->lineEdit->text();
    QString str2 = ui->lineEdit_2->text();

    QSqlTableModel *model2;
    model2 = new QSqlTableModel;
    model2->setTable("admin");
    model2->select();
    int ret = model2->rowCount();

    int row=0;
    QSqlQuery query2;
    query2.exec("select * from admin");
    bool flag = 0;
      while(query2.next() && row<=ret ){
         flag = 0;
         QString id = query2.value(0).toString();
         QString pwd = query2.value(1).toString();
         if(str==id && str2==pwd)
          {

           accept();
           flag = 0;
           break;
         }
         else{
            flag = 1;
         }
      }
      if(1==flag) {
          QMessageBox::warning(this,tr("Warning"),tr("user name or password error!"),QMessageBox::Yes);
          ui->lineEdit->clear();                   //清除用户名
          ui->lineEdit_2->clear();                 //清除密码
      }

}

void DialogLogin::on_pushButton_2_clicked()
{
    this->close();
}
