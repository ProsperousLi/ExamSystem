#include "dialog_select_questions_level.h"
#include "ui_dialog_select_questions_level.h"

Dialog_select_questions_level::Dialog_select_questions_level(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_select_questions_level)
{
    ui->setupUi(this);

}

Dialog_select_questions_level::~Dialog_select_questions_level()
{
    delete ui;
}

void Dialog_select_questions_level::on_pushButton_clicked()
{
    this->close();
}
