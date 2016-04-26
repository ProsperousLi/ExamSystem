#ifndef DIALOG_CHOOSE_SELECT_MODIFY_H
#define DIALOG_CHOOSE_SELECT_MODIFY_H

#include <QDialog>

namespace Ui {
class Dialog_choose_select_modify;
}

class Dialog_choose_select_modify : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_choose_select_modify(QWidget *parent = 0);
    ~Dialog_choose_select_modify();


private slots:
   // void on_buttonBox_clicked();

    //void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::Dialog_choose_select_modify *ui;
};

#endif // DIALOG_CHOOSE_SELECT_MODIFY_H
