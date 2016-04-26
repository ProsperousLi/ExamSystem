#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QString>
#include <QStringList>
#include <QInputDialog>
#include <QFileDialog>
#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlResult>
#include <QVector>
#include <QVariant>
#include <Qtsql/QSqlTableModel>
#include <QTsql/QSqlRecord>
#include <iostream>
#include <QLabel>
#include <QDebug>
#include <dialog.h>
#include "ui_dialog2.h"
#include <dialog2.h>
#include "ui_dialog3.h"
#include <dialog3.h>
#include "dialog11_1.h"
#include "ui_dialog11_1.h"


using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //背景图片
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/2.jpg");
        QPalette palette;
        palette.setBrush(backgroundRole(), QBrush(pixmap));
        setPalette(palette);





//        //数据库的操作
//        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//        db.setHostName("localhost");
//        db.setUserName("root");
//        db.setDatabaseName("student_mis");

//        if(db.open())
//        {
//            cout<<"yes!"<<endl;
//        }
//        else
//        {
//               cout<<"oh no!"<<endl;
//        }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_5_triggered()
{

}

void MainWindow::on_pushButton_clicked()    //选择题的按钮
{

    Dialog d;
    d.exec();

//    QDialog *dialog =new QDialog;
//    bool ok;
//    QString str = QInputDialog::getText(this,
//                  tr("密码核对"),tr("请输入管理员密码: "),QLineEdit::Password,"",&ok);
//    if(ok)
//    {
//        if(str == QString("123"))
//        {



//        }

//        else
//        {
//            QDialog *dialog1 =new QDialog;
//        }
//}

}


void MainWindow::on_pushButton_2_clicked()   //填空题的按钮
{


    Dialog2 d;
    d.exec();

//    bool ok;
//    QString str = QInputDialog::getText(this,
//                  tr("密码核对"),tr("请输入管理员密码: "),QLineEdit::Password,"",&ok);
//    if(ok)
//    {
//        if(str == QString("123"))
//        {

//        }
//     }
}

void MainWindow::on_pushButton_3_clicked()   //判断题的按钮
{



    Dialog3 d;
    d.exec();


    /* bool ok;
    QString str = QInputDialog::getText(this,
                  tr("密码核对"),tr("请输入管理员密码: "),QLineEdit::Password,"",&ok);
    if(ok)
    {
        if(str == QString("123"))
        {

        }
     }*/

}


