#ifndef DIALOG_CHOOSECHECK_H
#define DIALOG_CHOOSECHECK_H

#include <QDialog>

namespace Ui {
class Dialog_choosecheck;
}

class Dialog_choosecheck : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_choosecheck(QWidget *parent = 0);
    ~Dialog_choosecheck();

private:
    Ui::Dialog_choosecheck *ui;
};

#endif // DIALOG_CHOOSECHECK_H
