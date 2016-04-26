#ifndef DIALOGCHOOSECHANCE_H
#define DIALOGCHOOSECHANCE_H

#include <QDialog>

namespace Ui {
class Dialogchoosechance;
}

class Dialogchoosechance : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogchoosechance(QWidget *parent = 0);
    ~Dialogchoosechance();
    void showList() const;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialogchoosechance *ui;
};

#endif // DIALOGCHOOSECHANCE_H
