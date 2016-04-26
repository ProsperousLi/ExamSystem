#ifndef STUDENT_UI_H
#define STUDENT_UI_H

#include <QDialog>

namespace Ui {
class student_ui;
}

class student_ui : public QDialog
{
    Q_OBJECT

public:
    explicit student_ui(QWidget *parent = 0);
    ~student_ui();
    static int id_know;
private slots:




    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::student_ui *ui;
};

#endif // STUDENT_UI_H
