#include "title_add_ui.h"
#include "ui_title_add_ui.h"
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

title_add_ui::title_add_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::title_add_ui)
{
    ui->setupUi(this);

    //背景图片
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/2.jpg");
        QPalette palette;
        palette.setBrush(backgroundRole(), QBrush(pixmap));
        setPalette(palette);
}

title_add_ui::~title_add_ui()
{
    delete ui;
}

void title_add_ui::on_pushButton_clicked()//选择
{
    Dialog d;
    d.exec();
}

void title_add_ui::on_pushButton_2_clicked()//填空
{

    Dialog2 d;
    d.exec();
}

void title_add_ui::on_pushButton_3_clicked()//判断
{

    Dialog3 d;
    d.exec();
}
