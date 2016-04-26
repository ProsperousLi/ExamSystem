#ifndef DIALOG_JUDGE_CHANGE_H
#define DIALOG_JUDGE_CHANGE_H

#include <QDialog>

namespace Ui {
class dialog_judge_change;
}

class dialog_judge_change : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_judge_change(QWidget *parent = 0);
    ~dialog_judge_change();
    void showList()const;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::dialog_judge_change *ui;
};

#endif // DIALOG_JUDGE_CHANGE_H
