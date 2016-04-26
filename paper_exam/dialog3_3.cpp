#include "dialog3_3.h"
#include "ui_dialog3_3.h"

Dialog3_3::Dialog3_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3_3)
{
    ui->setupUi(this);
}

Dialog3_3::~Dialog3_3()
{
    delete ui;
}
