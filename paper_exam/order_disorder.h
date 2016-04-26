#ifndef ORDER_DISORDER_H
#define ORDER_DISORDER_H

#include <QDialog>

namespace Ui {
class order_disorder;
}

class order_disorder : public QDialog
{
    Q_OBJECT

public:
    explicit order_disorder(QWidget *parent = 0);
    ~order_disorder();

private slots:
    void on_pushButton_clicked();

private:
    Ui::order_disorder *ui;
};

#endif // ORDER_DISORDER_H
