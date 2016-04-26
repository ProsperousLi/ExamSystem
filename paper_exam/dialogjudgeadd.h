#ifndef DIALOGJUDGEADD_H
#define DIALOGJUDGEADD_H

#include <QDialog>

namespace Ui {
class Dialogjudgeadd;
}

class Dialogjudgeadd : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogjudgeadd(QWidget *parent = 0);
    ~Dialogjudgeadd();

private slots:
   // void on_buttonBox_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialogjudgeadd *ui;
};

#endif // DIALOGJUDGEADD_H
