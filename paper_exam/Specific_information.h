#ifndef SPECIFIC_INFORMATION_H
#define SPECIFIC_INFORMATION_H

#include <QDialog>

namespace Ui {
class Specific_information;
}

class Specific_information : public QDialog
{
    Q_OBJECT

public:
    explicit Specific_information(QWidget *parent = 0);
    ~Specific_information();

private:
    Ui::Specific_information *ui;
};

#endif // SPECIFIC_INFORMATION_H
