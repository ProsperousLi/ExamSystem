#ifndef DIALOG_FILL_CHANGE_H
#define DIALOG_FILL_CHANGE_H

#include <QDialog>

namespace Ui {
class dialog_fill_change;
}

class dialog_fill_change : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fill_change(QWidget *parent = 0);
    ~dialog_fill_change();
    void showList() const;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::dialog_fill_change *ui;
};

#endif // DIALOG_FILL_CHANGE_H
