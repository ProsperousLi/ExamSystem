#ifndef PAPER_OPERATION_H
#define PAPER_OPERATION_H

#include <QDialog>

namespace Ui {
class Paper_operation;
}

class Paper_operation : public QDialog
{
    Q_OBJECT

public:
    explicit Paper_operation(QWidget *parent = 0);
    ~Paper_operation();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Paper_operation *ui;
};

#endif // PAPER_OPERATION_H
