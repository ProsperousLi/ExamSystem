#ifndef ADMIN_UI_H
#define ADMIN_UI_H

#include <QDialog>

namespace Ui {
class admin_ui;
}

class admin_ui : public QDialog
{
    Q_OBJECT

public:
    explicit admin_ui(QWidget *parent = 0);
    ~admin_ui();
    static int id_know;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::admin_ui *ui;
};

#endif // ADMIN_UI_H
