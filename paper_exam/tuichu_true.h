#ifndef TUICHU_TRUE_H
#define TUICHU_TRUE_H

#include <QDialog>

namespace Ui {
class tuichu_true;
}

class tuichu_true : public QDialog
{
    Q_OBJECT

public:
    explicit tuichu_true(QWidget *parent = 0);
    ~tuichu_true();

private slots:
    void on_pushButton_clicked();

private:
    Ui::tuichu_true *ui;
};

#endif // TUICHU_TRUE_H
