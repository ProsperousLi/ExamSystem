#ifndef PAPERMAKE_H
#define PAPERMAKE_H

#include <QDialog>
namespace Ui {
class PaperMake;
}

class PaperMake : public QDialog
{
    Q_OBJECT

public:
    explicit PaperMake(QWidget *parent = 0);
    ~PaperMake();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void warnning(QString);

private:
    Ui::PaperMake *ui;
};

#endif // PAPERMAKE_H
