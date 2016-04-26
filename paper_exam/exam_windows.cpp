#include "exam_windows.h"
#include "ui_exam_windows.h"
#include <tuichu_true.h>
#include <QObject>
#include <qpixmap.h>
#include <QMessageBox>
#include <QString>
#include <time.h>
#include <QTimer>
#include <QtGui>
#include <student_exam_login.h>
#include <qsqlquery.h>
#include <QDebug>
#include <qpushbutton.h>
#include <qradiobutton.h>
#include <QLineEdit>

int exam_windows::i=3600; //定义考试时间的倒计时
int exam_windows::another_time=0;//考试所用时间
QTimer *timer;//倒计时所用到的一个指针
int flag_select =0;
int flag_tf_question =0;
int flag_filling =0;
int count_bank =0; //记录上一个填空题的空数
int last_flag = 0;
int next_flag = 0;//上一题和下一题的标志
int current_title = 0;//当前题
int count =0;
int count1 =0;
int count2 =0;//选择题，判断题，填空题的按钮控件生数
int exam_windows::all_sorce=0;
QString my_select_answer; //学生选择的控件答案
QString my_answer[100];//存储学生选择题答案
QString my_answer_tf_question[100];//学生判断题
QString my_answer_filling[50][10];//学生填空题
int my_answer_index=0;//存储第几道题
QString number_select[200];
QString number_tf_question[200];
QString number_filling[200];
int number_select_flag[100];
int number_tf_question_flag[100];

void exam_windows::button_two_click(QString table_name,QString QuestionID,int id,int current_answer_index){ //点击按钮，显示当前试题和选项
    id=id-1;
    current_title = id;
    current_answer_index--;
    qDebug()<<"QString QuestionID"<<QuestionID;
    QSqlQuery query;
    query.prepare("select * from "+table_name+" where QuestionID = "+ QuestionID);
    query.exec();
    query.next();
    QString question = query.value(1).toString();
    ui->textEdit_2->setText(question);
    if(table_name=="single_select"){
        ui->formWidget_3->hide();
        ui->formWidget_4->hide();
        ui->formLayoutWidget->show();

        if(flag_select==1)
        {
            for(int i=0;i<4;i++){
                if(radio_select.at(i)->isChecked()){//只找到最后一次点击的


                    qDebug()<<i<<"radio->isChecked()";
                    //                   QString answer = query.value(6).toString();
                    //                    if(i==0){
                    //                        if(answer=="a"||answer=="A")
                    //                        {
                    //                            all_sorce+=query.value(7).toInt();

                    //                        }
                    //                    }
                    //                    else if(i==1){
                    //                        if(answer=="b"||answer=="B")
                    //                        {
                    //                            all_sorce+=query.value(7).toInt();
                    //                        }
                    //                    }
                    //                    else if(i==2){
                    //                        if(answer=="c"||answer=="C")
                    //                        {
                    //                            all_sorce+=query.value(7).toInt();
                    //                        }
                    //                    }
                    //                    else if(i==3){
                    //                        if(answer=="d"||answer=="D")
                    //                        {
                    //                            all_sorce+=query.value(7).toInt();
                    //                        }
                    //                    }

                }
                radio_select.at(i)->deleteLater();

            }
            radio_select.clear();
        }

        for(int i=0;i<4;i++){
            QRadioButton *radio = new QRadioButton(this);
            radio->setText(query.value(2+i).toString());
            radio_select.append(radio);
            QObject::connect(radio, &QRadioButton::clicked, [this,i, radio,current_answer_index](){
                number_select_flag[current_answer_index]=i+1;
                qDebug()<< " number_select_flag[current_answer_index]=i;"<<i+1;
                QString my_select_answer= radio->text();
                my_answer[current_answer_index]=my_select_answer;
                qDebug()<<"my_select_answer"<<my_select_answer;
            });

            ui->formLayout->addWidget(radio);

        }
        for(int i=0;i<4;i++){
            if(my_answer[current_answer_index] == radio_select.at(i)->text())
            {
                radio_select.at(i)->setChecked(true);
            }
        }
        flag_select=1;
    }

    else if(table_name=="tf_question"){
        ui->formWidget_3->show();
        ui->formWidget_4->hide();
        ui->formLayoutWidget->hide();
        if(flag_tf_question==1){
            for(int i=0;i<2;i++){
                //                if(radio_tf_question.at(i)->isChecked()){
                //                    qDebug()<<"radio_tf_question.at(i)->isChecked()";
                //                    QString answer = query.value(2).toString();
                //                    if(i==0&&answer=="true"){
                //                        all_sorce+=query.value(3).toInt();
                //                    }
                //                    else if(i==1&&answer=="false"){
                //                        all_sorce+=query.value(3).toInt();
                //                    }
                //                }
                radio_tf_question.at(i)->deleteLater();
            }
            radio_tf_question.clear();
        }
        QRadioButton *tf = new QRadioButton;
        tf->setText("正确");
        ui->formLayout_3->addWidget(tf);
        radio_tf_question.append(tf);
        QObject::connect(tf, &QRadioButton::clicked, [this, tf,current_answer_index](){
            number_tf_question_flag[current_answer_index]=1;
            QString my_select_answer= tf->text();
            my_answer_tf_question[current_answer_index]=my_select_answer;
        });

        QRadioButton *tf_2 = new QRadioButton;
        tf_2->setText("错误");
        ui->formLayout_3->addWidget(tf_2);
        radio_tf_question.append(tf_2);
        QObject::connect(tf_2, &QRadioButton::clicked, [this, tf_2,current_answer_index](){
            number_tf_question_flag[current_answer_index]=2;
            QString my_select_answer= tf_2->text();
            my_answer_tf_question[current_answer_index]=my_select_answer;
        });
        for(int i=0;i<2;i++){
            if(my_answer_tf_question[current_answer_index] == radio_tf_question.at(i)->text())
            {
                radio_tf_question.at(i)->setChecked(true);
            }
        }
        flag_tf_question=1;
    }

    else if(table_name=="filling") {

        ui->formWidget_4->show();
        ui->formLayoutWidget->hide();
        ui->formWidget_3->hide();

        if(flag_filling==1)
        {
            for(int i=0;i<count_bank;i++){
                Lineedit_filling.at(i)->deleteLater();

            }
            Lineedit_filling.clear();
        }

        int bank = query.value(2).toInt();
        count_bank = bank;
        for(int i=0;i<bank;i++) {
            QLineEdit *edit = new QLineEdit(this);
            Lineedit_filling.append(edit);

            QObject::connect(edit, &QLineEdit::textChanged, [this,i,edit,current_answer_index](){
                QString filling_answer =edit->text();
                qDebug()<<"QString filling_answer =edit->text()"<<filling_answer;
                my_answer_filling[current_answer_index][i]=filling_answer;
            });
            ui->formLayout_4->addWidget(edit);

        }
        for(int i=0;i<bank;i++){
            qDebug()<<"my_answer_filling[current_answer_index]"<<my_answer_filling[current_answer_index];

            Lineedit_filling.at(i)->setText(my_answer_filling[current_answer_index][i]);
            qDebug()<<" Lineedit_filling.at(i)->text()"<< Lineedit_filling.at(i)->text();
        }
        flag_filling=1;
    }
}

exam_windows::exam_windows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::exam_windows)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/123/Desktop/qt sucai/3.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);



    //考试时间倒计时
    QTimer *timer = new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(TimeMSConvert()));
    timer->start(1000);

    //读取学号和姓名
    QSqlQuery keyQuery;
    keyQuery.prepare("select * from student where stu_num = "+student_exam_login::login);
    keyQuery.exec();
    keyQuery.first();
    ui->label_3->setText(keyQuery.value(0).toString());
    ui->textEdit->setText(keyQuery.value(2).toString());



    //选择题控件
    //连接试卷数据库
    QSqlQuery query;
    query.exec("select QuestionID from testpaper_single_select where Testpaper_id = 2");
    //动态生成控件
    count =0; //计数
    while(query.next()){

        count++;
    }
    int heng  =0;
    int heng2 =0;
    int heng3 =0;
    int heng4 =0;
    int heng5 =0;
    int shu =0;
    query.first();
    for(int i=1;i<=count;i++)
    {
        QString number = QString::number(i,10);
        QPushButton *button = new QPushButton(this);
        pushbutton_all.append(button);  //总的控件存储,默认下标从一开始
        QString str = query.value(0).toString();
        number_select[i]=str;
        QString name = "single_select";
        if(i==1){
            button_two_click(name,str,i,i);
        }
        QObject::connect(button, &QPushButton::clicked, [this, str, name,i](){
            button_two_click(name,str,i,i);
        });

        if(i<=7){
            button->setGeometry(10+heng,100+shu,20,20);
            heng+=25;
        }
        else if(i>7&&i<=14) {
            shu =25;
            button->setGeometry(10+heng2,100+shu,20,20);
            heng2+=25;
        }
        else if(i>14&&i<=21) {
            shu =50;
            button->setGeometry(10+heng3,100+shu,20,20);
            heng3+=25;
        }
        else if(i>21&&i<=28) {
            shu =75;
            button->setGeometry(10+heng4,100+shu,20,20);
            heng4+=25;
        }
        else if(i>28&&i<=35){
            shu=100;
            button->setGeometry(10+heng5,100+shu,20,20);
            heng5+=25;
        }

        button->setText(number);
        query.next();
    }


    //判断题控件
    QSqlQuery query2;
    query2.exec("select QuestionID from testpaper_tf_question where Testpaper_id = 2");
    //动态生成控件
    count1 =0; //计数
    while(query2.next()){

        count1++;
    }
    heng  =0;
    heng2 =0;
    heng3 =0;
    heng4 =0;
    heng5 =0;
    shu =0;
    query2.first();
    for(int i=1;i<=count1;i++)
    {
        QString number = QString::number(i,10);
        QPushButton *button = new QPushButton(this);
        pushbutton_all.append(button);
        QString str = query2.value(0).toString();
        number_tf_question[i]= str;
        QString name = "tf_question";
        QObject::connect(button, &QPushButton::clicked, [this, str, name,i,count](){

            button_two_click(name,str,i+count,i);
        });
        if(i<=7){
            button->setGeometry(10+heng,265+shu,20,20);
            heng+=25;
        }
        else if(i>7&&i<=14) {
            shu =25;
            button->setGeometry(10+heng2,265+shu,20,20);
            heng2+=25;
        }
        else if(i>14&&i<=21) {
            shu =50;
            button->setGeometry(10+heng3,265+shu,20,20);
            heng3+=25;
        }
        else if(i>21&&i<=28) {
            shu =75;
            button->setGeometry(10+heng4,265+shu,20,20);
            heng4+=25;
        }
        else if(i>28&&i<=35){
            shu=95;
            button->setGeometry(10+heng5,265+shu,20,20);
            heng5+=25;
        }

        button->setText(number);
        query2.next();
    }

    //填空题按钮
    QSqlQuery query3;
    query3.exec("select QuestionID from testpaper_filling where Testpaper_id = 2");
    //动态生成控件
    count2 =0; //计数
    while(query3.next()){

        count2++;
    }
    heng  =0;
    heng2 =0;
    heng3 =0;
    heng4 =0;
    heng5 =0;
    shu =0;
    query3.first();
    for(int i=1;i<=count2;i++)
    {
        QString number = QString::number(i,10);
        QPushButton *button = new QPushButton(this);
        pushbutton_all.append(button);
        QString str = query3.value(0).toString();
        number_filling[i]=str;
        QString name = "filling";
        //qDebug()<<query3.value(0).toString()<<"query3.value(0).toString()";
        QObject::connect(button, &QPushButton::clicked, [this, str, name,i,count,count1](){
            button_two_click(name,str,i+count+count1,i);
        });
        if(i<=7){
            button->setGeometry(10+heng,425+shu,20,20);
            heng+=25;
        }
        else if(i>7&&i<=14) {
            shu =25;
            button->setGeometry(10+heng2,425+shu,20,20);
            heng2+=25;
        }
        else if(i>14&&i<=21) {
            shu =50;
            button->setGeometry(10+heng3,425+shu,20,20);
            heng3+=25;
        }
        else if(i>21&&i<=28) {
            shu =75;
            button->setGeometry(10+heng4,425+shu,20,20);
            heng4+=25;
        }
        else if(i>28&&i<=35){
            shu=95;
            button->setGeometry(10+heng5,425+shu,20,20);
            heng5+=25;
        }

        button->setText(number);
        query3.next();
    }

}

QString exam_windows::TimeMSConvert(int i)
{
    exam_windows::another_time= 3600-i;
    if(i==0){
        QMessageBox::information(this, "考试结束", "时间到，即将退出！！",
                                 QMessageBox::Yes, QMessageBox::Yes);
        tuichu_true tuichu;
        tuichu.exec();
        this->close();
    }
    int nhour = i/3600%60;

    int nMinute = i/60%60;

    int nSec = i%60;

    QString strTime = QString("%1 : %2 : %3").arg(nhour,2,10,QChar('0')).arg(nMinute, 2, 10, QChar('0')).arg(nSec, 2, 10, QChar('0'));

    return strTime;
}

void exam_windows::TimeMSConvert()
{
    ui->label_12->setText(TimeMSConvert(--i));
}

exam_windows::~exam_windows()
{
    delete ui;
}

void exam_windows::on_pushButton_2_clicked()  //退出考试按钮
{
    QMessageBox::StandardButton yn = QMessageBox::information(this, "退出", "确定要退出么？退出后将结束考试!!",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if (yn == QMessageBox::Yes)
    {

        tuichu_true tuichu;
        tuichu.exec();
        this->close();
    }
}

void exam_windows::on_pushButton_clicked()   //交卷按钮
{
    qDebug()<<all_sorce<<"all_sorce";
    QMessageBox::StandardButton yn = QMessageBox::information(this, "交卷", "确定要交卷么？这将将结束考试!!",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if (yn == QMessageBox::Yes)
    {
        exam_windows::score();
        tuichu_true tuichu;

        tuichu.exec();

        this->close();
    }
}



void exam_windows::on_pushButton_3_clicked() //考试上一题
{
    if(current_title==0)
    {
        //pushbutton_all.at(0)->click();
        QMessageBox::about(this, "注意", "当前题为第一题");
    }
    else{
        current_title--;
        pushbutton_all.at(current_title)->click();
        // qDebug()<< current_title<<"current_title_last";
    }

}


void exam_windows::on_pushButton_4_clicked() //考试下一题
{
    // qDebug()<<"count"<<count;
    //qDebug()<<"count1"<<count1;
    // qDebug()<<"count2"<<count2;
    if(current_title==(count+count1+count2-1)){
        //pushbutton_all.at(count+count1+count2-1)->click();
        QMessageBox::about(this, "注意", "当前题为最后一题");
    }
    else{
        current_title++;
        pushbutton_all.at(current_title)->click();
        //  qDebug()<< current_title<<"current_title";


    }

}

int exam_windows::score(){
    QSqlQuery query;
    for(int i=1;i<=count2;i++){
        query.prepare("select * from filling where QuestionID = "+ number_filling[i]);
        query.exec();
        query.first();
        QString filling_answer = query.value(3).toString();
        int kong = query.value(2).toInt();
        if(query.value(6).toInt()==1){//有序

            for(int j=0;j<kong;j++)
            {
                QString answer=my_answer_filling[i-1][j].replace(" ","");
                qDebug()<<answer;

                QString txt=QString::fromStdString( filling_answer.section("###", j, j).trimmed().toStdString()).replace(" ","");
                if(txt.indexOf(QString(QLatin1String("&&&")))!=-1){
                    int txt_kong=txt.count(QString(QLatin1String("&&&")))+1;
                    for(int k=0;k<txt_kong;k++){
                        QString xiao_txt=QString::fromStdString( txt.section("&&&", k, k).trimmed().toStdString()).replace(" ","");
                        if(xiao_txt==answer){
                            all_sorce+=query.value(4).toInt()/kong;
                            break;
                        }
                    }
                }
                else if(txt==answer)
                    all_sorce+=query.value(4).toInt()/kong;
            }
        }
        else{//无序
            int flag[kong];
            for(int k=0;k<kong;k++)
                flag[k]=0;
            for(int m=0;m<kong;m++){

                QString answer=my_answer_filling[i-1][m].replace(" ","");
                for(int j=0;j<kong;j++)
                {
                    QString txt=QString::fromStdString( filling_answer.section("###", j, j).trimmed().toStdString()).replace(" ","");
                    if(txt.indexOf(QString(QLatin1String("&&&")))!=-1){
                        int txt_kong=txt.count(QString(QLatin1String("&&&")))+1;
                        for(int k=0;k<txt_kong;k++){
                            QString xiao_txt=QString::fromStdString( txt.section("&&&", k, k).trimmed().toStdString()).replace(" ","");
                            if(xiao_txt==answer&&flag[j]==0){
                                all_sorce+=query.value(4).toInt()/kong;
                                flag[j]=1;
                                break;
                            }
                        }
                    }

                    else if(txt==answer&&flag[j]==0){
                        all_sorce+=query.value(4).toInt()/kong;
                        flag[j]=1;
                    }
                }
            }
        }
    }


    QSqlQuery query2;
    for(int i=1;i<=count;i++){

        query2.exec("select * from single_select where QuestionID = "+ number_select[i]);
        query2.first();
        QString answer = query2.value(6).toString();
        qDebug()<<query2.value(6).toString()<<"query2.value(6).toString()";
        qDebug()<<"number_select_flag[i-1]"<<number_select_flag[i-1];
        if((answer=="a"||answer=="A")&&(number_select_flag[i-1]==1)){
            qDebug()<<"query2.value(7).toInt();"<<query2.value(7).toInt();

            all_sorce+=query2.value(7).toInt();
        }
        else if((answer=="b"||answer=="B")&&(number_select_flag[i-1]==2)){


            all_sorce+=query2.value(7).toInt();
        }
        else if((answer=="c"||answer=="C")&&(number_select_flag[i-1]==3)){

            all_sorce+=query2.value(7).toInt();
        }
        else  if((answer=="d"||answer=="D")&&(number_select_flag[i-1]==4)){

            all_sorce+=query2.value(7).toInt();
        }

    }

    QSqlQuery query3;
    for(int i=1;i<=count1;i++){
        query3.exec("select * from tf_question where QuestionID = "+ number_tf_question[i]);
        query3.first();
        QString answer = query3.value(2).toString();
        if(number_tf_question_flag[i-1]==1&&(answer=="true"||answer=="TRUE")){
            all_sorce+=query3.value(3).toInt();
        }
        else if(number_tf_question_flag[i-1]==2&&(answer=="false"||answer=="false")){
            all_sorce+=query3.value(3).toInt();
        }

    }
    qDebug()<<"all_sorce"<<all_sorce;

}



