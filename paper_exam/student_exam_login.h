#ifndef STUDENT_EXAM_LOGIN_H
#define STUDENT_EXAM_LOGIN_H

#include <QDialog>

namespace Ui {
class student_exam_login;
}

class student_exam_login : public QDialog
{
    Q_OBJECT

public:
    explicit student_exam_login(QWidget *parent = 0);
    ~student_exam_login();

    static QString login;
    static QString pwd_data;
    static QString id_know;
private slots:
    void on_pushButton_2_clicked();



    void on_pushButton_clicked();

private:
    Ui::student_exam_login *ui;
};

#endif // STUDENT_EXAM_LOGIN_H
