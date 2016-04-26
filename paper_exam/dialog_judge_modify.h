#ifndef DIALOG_JUDGE_MODIFY_H
#define DIALOG_JUDGE_MODIFY_H

#include <QDialog>

namespace Ui {
class dialog_judge_modify;
}

class dialog_judge_modify : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_judge_modify(QWidget *parent = 0);
    ~dialog_judge_modify();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog_judge_modify *ui;
};

#endif // DIALOG_JUDGE_MODIFY_H
