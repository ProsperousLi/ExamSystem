#ifndef DIALOG_CHOOSE_SELECT_H
#define DIALOG_CHOOSE_SELECT_H

#include <QDialog>
#include <qsqlquery.h>

namespace Ui {
class Dialog_choose_select;
}

class Dialog_choose_select : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_choose_select(QWidget *parent = 0);
    ~Dialog_choose_select();
    void showList(QSqlQuery * query) const;

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Dialog_choose_select *ui;
};

#endif // DIALOG_CHOOSE_SELECT_H
