#include "exam_windows.h"
#include <mainwindow.h>
#include <QApplication>
#include <student_exam_login.h>
#include <student_ui.h>
#include <admin_ui.h>
#include <title_add_ui.h>
#include <Paper_operation.h>
#include <practice_windows.h>
#include <QSqlDatabase>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setDatabaseName("test_mis");
    if(db.open())
    {
        qDebug()<<"ok,database";
    }
    else
    {
        qDebug()<<"oh no,database not open";
    }

    student_exam_login login;
    login.show();
    if(login.exec()==QDialog::Accepted){
        if(login.id_know=="1")//学生登陆
        {

            student_ui s;
            s.show();
            if(s.exec()==QDialog::Accepted){
                if(student_ui::id_know==1){//考试
                    exam_windows w;
                    w.show();
                    return a.exec();
                }
                else if(student_ui::id_know==2){//练习
                    practice_windows p;
                    p.show();
                    return a.exec();
                }
            }



        }
        else if(login.id_know=="2")//管理员按钮
        {
            qDebug()<<"aaaaaaaaaa";
            admin_ui d;
            d.exec();

        }

    }

}
