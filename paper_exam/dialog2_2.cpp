#include "dialog2_2.h"
#include "ui_dialog2_2.h"

Dialog2_2::Dialog2_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2_2)
{
    ui->setupUi(this);
}

Dialog2_2::~Dialog2_2()
{
    delete ui;
}
