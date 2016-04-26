#ifndef TITLE_ADD_UI_H
#define TITLE_ADD_UI_H

#include <QDialog>

namespace Ui {
class title_add_ui;
}

class title_add_ui : public QDialog
{
    Q_OBJECT

public:
    explicit title_add_ui(QWidget *parent = 0);
    ~title_add_ui();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::title_add_ui *ui;
};

#endif // TITLE_ADD_UI_H
