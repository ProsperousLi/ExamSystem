#include "admin_ui.h"
#include "ui_admin_ui.h"
#include <Paper_operation.h>
#include <title_add_ui.h>
int admin_ui::id_know=0;
admin_ui::admin_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_ui)
{
    ui->setupUi(this);
}

admin_ui::~admin_ui()
{
    delete ui;
}

void admin_ui::on_pushButton_clicked()
{
    title_add_ui t;
    t.exec();
}

void admin_ui::on_pushButton_2_clicked()
{

    Paper_operation p;
    p.exec();
}
