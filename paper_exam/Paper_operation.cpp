#include "Paper_operation.h"
#include "ui_Paper_operation.h"
#include <PaperMake.h>
#include <PaperInformation.h>

Paper_operation::Paper_operation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paper_operation)
{
    ui->setupUi(this);
}

Paper_operation::~Paper_operation()
{
    delete ui;
}

void Paper_operation::on_pushButton_clicked()
{
    PaperMake make;
    make.exec();
}

void Paper_operation::on_pushButton_2_clicked()
{
    PaperInformation information;
    information.exec();
}
