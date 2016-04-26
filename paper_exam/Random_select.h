#ifndef RANDOM_SELECT_H
#define RANDOM_SELECT_H

#include <QWidget>
#include <QComboBox>
class Random_select : public QWidget
{
    Q_OBJECT
public:
    explicit Random_select(QWidget *parent = 0);
    QString select_id[1000];
    QString judge_id[1000];
    QString fill_id[1000];
    int flag=0;
   // QString array_id[1000];
    int random_id(int num,int score,QString keypoint,int level,QString database_name);
    void random_id_help(QString* Q_id,QString* array_id,int row,int num);
signals:

public slots:

};

#endif // RANDOM_SELECT_H
