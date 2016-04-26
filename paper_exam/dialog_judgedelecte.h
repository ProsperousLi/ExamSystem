#ifndef DIALOG_JUDGEDELECTE_H
#define DIALOG_JUDGEDELECTE_H

#include <QDialog>

namespace Ui {
class Dialog_judgedelecte;
}

class Dialog_judgedelecte : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_judgedelecte(QWidget *parent = 0);
    ~Dialog_judgedelecte();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_judgedelecte *ui;
};

#endif // DIALOG_JUDGEDELECTE_H
