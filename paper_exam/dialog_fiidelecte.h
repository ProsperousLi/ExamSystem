#ifndef DIALOG_FIIDELECTE_H
#define DIALOG_FIIDELECTE_H

#include <QDialog>

namespace Ui {
class Dialog_fiidelecte;
}

class Dialog_fiidelecte : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_fiidelecte(QWidget *parent = 0);
    ~Dialog_fiidelecte();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_fiidelecte *ui;
};

#endif // DIALOG_FIIDELECTE_H
