#ifndef DIALOG_FILL_SELECT_H
#define DIALOG_FILL_SELECT_H

#include <QDialog>
#include <qsqlquery.h>

namespace Ui {
class Dialog_fill_select;
}

class Dialog_fill_select : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_fill_select(QWidget *parent = 0);
    ~Dialog_fill_select();
    void showList(QSqlQuery * query)const;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_fill_select *ui;
};

#endif // DIALOG_FILL_SELECT_H
