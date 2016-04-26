#ifndef TEST_ID_H
#define TEST_ID_H

#include <QWidget>

class test_id : public QWidget
{
    Q_OBJECT
public:
    explicit test_id(QWidget *parent = 0);
    static int test_Id;
signals:

public slots:

};

#endif // TEST_ID_H
