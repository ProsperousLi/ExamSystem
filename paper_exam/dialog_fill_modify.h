#ifndef DIALOG_FILL_MODIFY_H
#define DIALOG_FILL_MODIFY_H

#include <QDialog>
#include <QLineEdit>

namespace Ui {
class dialog_fill_modify;
}

class dialog_fill_modify : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fill_modify(QWidget *parent = 0);
    ~dialog_fill_modify();
    QLineEdit *blank[10];
    int blank_num;

private slots:
    void on_pushButton_clicked();

    //void on_lineEdit_returnPressed();

private:
    Ui::dialog_fill_modify *ui;
};

#endif // DIALOG_FILL_MODIFY_H
