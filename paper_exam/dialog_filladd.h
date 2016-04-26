#ifndef DIALOG_FILLADD_H
#define DIALOG_FILLADD_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class Dialog_filladd;
}

class Dialog_filladd : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_filladd(QWidget *parent = 0);
    ~Dialog_filladd();


    QLineEdit *blank[10];
    int blank_num;
    int j=0;  //测试到底生成了多少个答案空格
    int flag=0;//如果编辑改变，自动删除已生成的答案空格

private slots:
    //void on_buttonBox_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();





    void on_lineEdit_2_returnPressed();

private:
    Ui::Dialog_filladd *ui;
};

#endif // DIALOG_FILLADD_H
