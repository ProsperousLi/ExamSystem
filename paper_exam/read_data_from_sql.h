#ifndef READ_DATA_FROM_SQL_H
#define READ_DATA_FROM_SQL_H
#include <QString>
#include <QTextEdit>
#include <QLineEdit>
class read_data_from_sql
{
public:
    read_data_from_sql();
    void read_sql(QString table_name, QTextEdit *edit, QString id);
    void read_sql(QString table_name, QLineEdit *a,QLineEdit *b,QLineEdit *c,QLineEdit *d,QString id);
    int read_sql_fill(QString table_name, QTextEdit *edit,QString id);
};

#endif // READ_DATA_FROM_SQL_H
