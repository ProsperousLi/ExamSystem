#ifndef DIALOG3_3_H
#define DIALOG3_3_H

#include <QDialog>

namespace Ui {
class Dialog3_3;
}

class Dialog3_3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3_3(QWidget *parent = 0);
    ~Dialog3_3();

private:
    Ui::Dialog3_3 *ui;
};

#endif // DIALOG3_3_H
