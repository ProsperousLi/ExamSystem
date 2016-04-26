#ifndef DIALOG2_2_H
#define DIALOG2_2_H

#include <QDialog>

namespace Ui {
class Dialog2_2;
}

class Dialog2_2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2_2(QWidget *parent = 0);
    ~Dialog2_2();

private:
    Ui::Dialog2_2 *ui;
};

#endif // DIALOG2_2_H
