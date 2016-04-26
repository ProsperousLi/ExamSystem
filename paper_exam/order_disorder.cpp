#include "order_disorder.h"
#include "ui_order_disorder.h"
#include "practice_windows.h"
order_disorder::order_disorder(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::order_disorder)
{
    ui->setupUi(this);
}

order_disorder::~order_disorder()
{
    delete ui;
}

void order_disorder::on_pushButton_clicked()
{
    practice_windows w;

}
