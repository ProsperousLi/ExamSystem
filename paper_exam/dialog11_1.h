#ifndef DIALOG11_1_H
#define DIALOG11_1_H

#include <QDialog>

namespace Ui {
class Dialog11_1;
}

class Dialog11_1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog11_1(QWidget *parent = 0);
    ~Dialog11_1();

private slots:
   // void on_buttonBox_accepted();

    //void on_buttonBox_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog11_1 *ui;
};

#endif // DIALOG11_1_H
