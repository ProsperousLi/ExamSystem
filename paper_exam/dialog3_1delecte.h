#ifndef DIALOG3_1DELECTE_H
#define DIALOG3_1DELECTE_H

#include <QDialog>

namespace Ui {
class Dialog3_1delecte;
}

class Dialog3_1delecte : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3_1delecte(QWidget *parent = 0);
    ~Dialog3_1delecte();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog3_1delecte *ui;
};

#endif // DIALOG3_1DELECTE_H
