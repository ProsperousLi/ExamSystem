#ifndef DIALOG_JUDGE_SELECT_H
#define DIALOG_JUDGE_SELECT_H

#include <QDialog>
#include <qsqlquery.h>
namespace Ui {
class Dialog_judge_select;
}

class Dialog_judge_select : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_judge_select(QWidget *parent = 0);
    ~Dialog_judge_select();
    void showList(QSqlQuery * query)const;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_judge_select *ui;
};

#endif // DIALOG_JUDGE_SELECT_H
