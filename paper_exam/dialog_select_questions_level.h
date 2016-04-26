#ifndef DIALOG_SELECT_QUESTIONS_LEVEL_H
#define DIALOG_SELECT_QUESTIONS_LEVEL_H

#include <QDialog>

namespace Ui {
class Dialog_select_questions_level;
}

class Dialog_select_questions_level : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_select_questions_level(QWidget *parent = 0);
    ~Dialog_select_questions_level();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog_select_questions_level *ui;
};

#endif // DIALOG_SELECT_QUESTIONS_LEVEL_H
