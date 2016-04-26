#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDesktopWidget>
#include <QApplication>
#include <QSize>
#include <QPushButton>
#include <QPixmap>
#include <QSqlQuery>
#include <QDebug>
#include <qdebug>
#include <qmessagebox.h>
#include <QSqlResult>
#include <QVector>
#include <QVariant>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QTableView>
#include <QVBoxLayout>
#include <QResizeEvent>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //数据库的操作
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setDatabaseName("test");

    if(db.open())
    {
        cout<<"yes!"<<endl;
    }
    else
    {
           cout<<"oh no!"<<endl;
    }

    //db.exec("insert into students values(131101003,1234567890)");
    QSqlTableModel *model;
    model = new QSqlTableModel;

    model->setTable("students");
   // model.setFilter("stu_num=123");  //等于123的数据
    //model->setFilter("stu_num<>123");  //不等于123的数据
    model->select();
    int ret = model->rowCount();
    for (int i=0;i<ret;i++) {
        QSqlRecord record = model->record(i);
        for (int j=0; j<record.count(); j++) {
           qDebug() << record.value(j);
        }
    }



    //显示数据库的数据
    QTableView *_view;
    _view = new QTableView;
    _view->setModel(model);

    QVBoxLayout *lay = new QVBoxLayout(this);
    lay->addWidget(_view);



    //背景图片的操作
    this->setAutoFillBackground(true);
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/2.jpg");
    QPixmap fitpixmap=pixmap.scaled(1200, 1200).scaled( Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(fitpixmap));
    this->setPalette(palette);



    //窗口的操作
     this->setWindowTitle("炉石传说");               //窗口题目
    this->resize(QSize(1020,600));            // 设置窗口的初始大小
}






Widget::~Widget()
{
    delete ui;
}



