#ifndef PRACTICE_WINDOWS_H
#define PRACTICE_WINDOWS_H

#include <QMainWindow>
#include <QList>
#include <QLineEdit>
#include <QLabel>
namespace Ui {
class practice_windows;
}

class practice_windows : public QMainWindow
{
    Q_OBJECT

public:
    explicit practice_windows(QWidget *parent = 0);
    ~practice_windows();
    int title_flag;
    int currentTitle;
    int titleTotal;
    int fill_create_line;
    int kong_frist;
    int anniu_a_frist;
    int anniu_b_frist;
    int anniu_c_frist;
    int anniu_d_frist;
    QList<QLineEdit* >QLineEdit_edit;
    QList<QLabel* >QLabel_label;
    QList<QLineEdit* >QLineEdit_answer_kong;
    QLineEdit *blank[10];
    int current_blank_num;
      int flag_blank=0;//如果编辑改变，自动删除已生成的答案空格
      int flag_hideblank=0;

      int show_answer_is_take=0;//如果显示答案的按钮未被点击且直接按下一题的时候this->current_blank_num==1但是不调用隐藏按钮

    bool question_answer(int i,QString table_name,QString id,QLabel *label,QString a,QString b);
private slots:
    void on_pushButton_6_clicked();
    
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::practice_windows *ui;
};

#endif // PRACTICE_WINDOWS_H
