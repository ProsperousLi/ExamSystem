#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog_fill_select.h"
#include "dialog_filladd.h"
#include "dialog_fiidelecte.h"
#include <qsqldatabase.h>
#include<qdebug.h>
#include <qsqltablemodel.h>
#include <qsqlrecord.h>
#include <qtableview.h>
#include <QVBoxLayout>
#include <dialog_fill_change.h>l

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    Dialog_filladd filladd;
    filladd.exec();
}

void Dialog2::on_pushButton_3_clicked()
{
    Dialog_fiidelecte filldele;
    filldele.exec();
}

void Dialog2::on_pushButton_4_clicked()
{
 Dialog_fill_select d;
 d.exec();
}

void Dialog2::on_pushButton_5_clicked()
{
    this->close();
}

void Dialog2::on_pushButton_2_clicked()
{
    dialog_fill_change c;
    c.exec();
}
