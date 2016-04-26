#include "student_ui.h"
#include "ui_student_ui.h"
#include <exam_windows.h>

int student_ui::id_know=0;

student_ui::student_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::student_ui)
{
    ui->setupUi(this);

    //设置背景图片
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/5.jpg");
        QPalette palette;
        palette.setBrush(backgroundRole(), QBrush(pixmap));
        setPalette(palette);
}

student_ui::~student_ui()
{
    delete ui;
}



//考试系统进入按钮
void student_ui::on_pushButton_clicked()
{
    student_ui::id_know=1;
    accept();

}
//练习系统进入按钮
void student_ui::on_pushButton_2_clicked()
{
    student_ui::id_know=2;
    accept();

}
