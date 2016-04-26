#include "dialog_choosecheck.h"
#include "ui_dialog_choosecheck.h"

Dialog_choosecheck::Dialog_choosecheck(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_choosecheck)
{
    ui->setupUi(this);
}

Dialog_choosecheck::~Dialog_choosecheck()
{
    delete ui;
}
