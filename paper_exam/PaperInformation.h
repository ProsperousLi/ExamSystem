#ifndef PAPERINFORMATION_H
#define PAPERINFORMATION_H

#include <QDialog>

#include <QSqlQuery>
namespace Ui {
class PaperInformation;
}

class PaperInformation : public QDialog
{
    Q_OBJECT

public:
    explicit PaperInformation(QWidget *parent = 0);
    ~PaperInformation();
     int cur_test_num;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void showList(QSqlQuery * query2) const;

    void showList_forshow() const;

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PaperInformation *ui;
};

#endif // PAPERINFORMATION_H
