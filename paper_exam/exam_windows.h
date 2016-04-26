#ifndef EXAM_WINDOWS_H
#define EXAM_WINDOWS_H

#include <QMainWindow>
#include <QString>
#include <QList>
#include <QRadioButton>
#include <QLineEdit>
#include <QPushButton>

namespace Ui {
class exam_windows;
}

class exam_windows : public QMainWindow
{
    Q_OBJECT

public:

    explicit exam_windows(QWidget *parent = 0);
    ~exam_windows();
     QString TimeMSConvert(int i);
     QList <QRadioButton*> radio_select;
     QList <QRadioButton*> radio_tf_question;
     QList <QLineEdit *> Lineedit_filling;
     QList <QPushButton *> pushbutton_all;
     QList <QRadioButton*> radio_select_answer;
     static int all_sorce ;//成绩
     static int i;//考试时间
     static int another_time;//考试所用时间
     void button_two_click(QString table_name, QString QuestionID, int id, int current_answer_index);
     int score();
private slots:
    void on_pushButton_2_clicked();
    void TimeMSConvert();
    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::exam_windows *ui;
};

#endif // EXAM_WINDOWS_H
