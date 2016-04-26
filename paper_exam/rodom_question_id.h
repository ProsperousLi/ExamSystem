#ifndef RODOM_QUESTION_ID_H
#define RODOM_QUESTION_ID_H

#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>

#include <qdebug.h>
using namespace std;

class rodom_question_id
{
public:
    QString arrary_id[1000];
    rodom_question_id();
    int random_id(bool if_order,QString database_name);//返回长度
    //void get_arrary
};

#endif // RODOM_QUESTION_ID_H
