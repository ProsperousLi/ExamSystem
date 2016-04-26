#include "practice_windows.h"
#include "ui_practice_windows.h"
#include <rodom_question_id.h>
#include <read_data_from_sql.h>

#include <qradiobutton.h>
#include <qmessagebox.h>
#include <qsqlquery.h>
#include <qsqltablemodel.h>
#include <qlineedit.h>
#include <QVBoxLayout>
#include <qlist.h>
rodom_question_id id_select;
rodom_question_id id_judge;
rodom_question_id id_fill;
rodom_question_id id_anniu;
practice_windows::practice_windows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::practice_windows)
{
    ui->setupUi(this);
    /****隐藏*****/
    ui->radioButton_7->hide();
    ui->radioButton_8->hide();

    ui->formWidget->hide();//选择题按钮和选项
    ui->gridWidget->hide();//判断按钮
    ui->textEdit->hide();//文本框按钮
    ui->pushButton_5->hide();//填空题显示答案按钮隐藏
    title_flag = 0;//题目类型
    currentTitle = 0;//当前题
    titleTotal = 0; //题目总数
    fill_create_line = 1; //是否创建空数,点击填空题只需要创建一次
    kong_frist = 1; //点击下一题按钮时当前是否是第一题
    anniu_a_frist =1; //是否是第一次点击按钮
    anniu_b_frist =1;
    anniu_c_frist =1;
    anniu_d_frist =1;
}

practice_windows::~practice_windows()
{
    delete ui;
}

void practice_windows::on_pushButton_6_clicked()//退出按钮
{
    this->close();
}

void practice_windows::on_pushButton_clicked()//选择题按钮
{
    QMessageBox::StandardButton yn = QMessageBox::information(this, "选择", "离开此界面题目会刷新，确定要离开此界面么？",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);//弹出对话框提示
    if(yn == QMessageBox::Yes)
    {
        //如果当前填空题显示了答案，这时候点击更换题型，则将填空题答案生成的空释放掉
        if(this->flag_blank==1)
        for(int i=0;i<this->current_blank_num;i++){
            this->blank[i]->close();
             delete this->blank[i];
         }

        titleTotal = id_select.random_id(1,"single_select");
        read_data_from_sql sql_select ;
        QString str_id = id_select.arrary_id[0];
        qDebug()<<str_id+" practice_windows::on_pushButton_clicked";
        sql_select.read_sql("single_select",ui->textEdit,str_id);//连接sql，将题目显示在文本框里
        sql_select.read_sql("single_select",ui->lineEdit,ui->lineEdit_2,ui->lineEdit_3,ui->lineEdit_4,str_id);
        ui->gridWidget->hide();//隐藏判断题的对错按钮
        ui->verticalLayoutWidget->hide();//填空题隐藏
        ui->pushButton_5->hide();//填空题答案按钮隐藏
        ui->textEdit->show(); //显示文本框按钮
        ui->formWidget->show();//显示判断题的对错按钮

        title_flag = 0;
        currentTitle = 0;
        //创建一个label，可以让点击选择按钮时，有东西删除
        QLabel *label = new QLabel;
        QLabel_label.append(label);
        ui->formLayout->addWidget(label);
    }

}

void practice_windows::on_pushButton_3_clicked()//判断题按钮
{
    QMessageBox::StandardButton yn = QMessageBox::information(this, "判断", "离开此界面题目会刷新，确定要离开此界面么？",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);//弹出对话框提示
    if(yn == QMessageBox::Yes)
    {
        //如果当前填空题显示了答案，这时候点击更换题型，则将填空题答案生成的空释放掉
        if(this->flag_blank==1)
        for(int i=0;i<this->current_blank_num;i++){
            this->blank[i]->close();
             delete this->blank[i];
         }

        titleTotal = id_judge.random_id(0,"tf_question");
        read_data_from_sql sql_judge;
        sql_judge.read_sql("tf_question",ui->textEdit,id_judge.arrary_id[0]);
        ui->formWidget->hide();//隐藏选择题的对错按钮
        ui->verticalLayoutWidget->hide();//填空题隐藏
        ui->pushButton_5->hide();//填空题答案按钮隐藏
        ui->textEdit->show();  //显示文本框按钮
        ui->gridWidget->show();//显示判断题的对错按钮
        title_flag = 1;
        currentTitle = 0;
        //创建一个label，可以让点击选择按钮时，有东西删除
        QLabel *label = new QLabel;
        QLabel_label.append(label);
        ui->gridLayout->addWidget(label,4,0,1,1);
        ui->gridLayout->setColumnStretch(3,1);
        ui->gridLayout->setRowStretch(3,1);


    }
}

void practice_windows::on_pushButton_2_clicked()   //填空题
{
    QMessageBox::StandardButton yn = QMessageBox::information(this, "填空", "离开此界面题目会刷新，确定要离开此界面么？",
                                                              QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);//弹出对话框提示
    if(yn == QMessageBox::Yes)
    {
        ui->verticalLayoutWidget->show();
        ui->pushButton_5->show();
        titleTotal = id_fill.random_id(0,"filling");
        read_data_from_sql sql_fill;
        int filltotal = sql_fill.read_sql_fill("filling",ui->textEdit,id_fill.arrary_id[0]);
        ui->formWidget->hide();//隐藏选择题的对错按钮

        ui->textEdit->show();  //显示文本框按钮
        ui->gridWidget->hide();//隐藏判断题的对错按钮
        if(fill_create_line == 1) //只创建一次
        {
            for (int i=0; i<filltotal; i++) {
                QLineEdit *edit = new QLineEdit;
                QLineEdit_edit.append(edit);
                ui->verticalLayout->addWidget(edit);
            }
            fill_create_line=0;
        }
        title_flag = 2;
        currentTitle = 0;
    }
}

bool practice_windows::question_answer(int i, QString table_name, QString id, QLabel *label, QString a, QString b) //选择题答案在数据库的位置和表名，返回答案的值,当前的题号
{
    QSqlQuery query;
    query.exec("select * from "+table_name+" where QuestionID = "+ id);
    query.first();
    QString answer = query.value(i).toString();//id怎么获得
    qDebug()<<"answer: " <<answer;
    if((a== answer)||(b==answer))
    {

        label->setText("yes");
        return 1;

    }
    else{
        label->setText("no");
        return 0;
    }

}

void practice_windows::on_radioButton_clicked()  //按钮A
{

     ui->formLayout->removeWidget(QLabel_label.at(0));
     QLabel_label.at(0)->deleteLater();
     QLabel_label.clear();
     QLabel *label = new QLabel;
     this->question_answer(6,"single_select",id_select.arrary_id[currentTitle],label,"a","A");
     ui->formLayout->addWidget(label);
     QLabel_label.append(label);
     anniu_a_frist=0;
}

void practice_windows::on_radioButton_2_clicked()  //按钮B
{
     ui->formLayout->removeWidget(QLabel_label.at(0));
     QLabel_label.at(0)->deleteLater();
     QLabel_label.clear();
     QLabel *label = new QLabel;
     this->question_answer(6,"single_select",id_select.arrary_id[currentTitle],label,"b","B");
     ui->formLayout->addWidget(label);
     QLabel_label.append(label);
}

void practice_windows::on_radioButton_3_clicked()  //按钮C
{

     ui->formLayout->removeWidget(QLabel_label.at(0));
     QLabel_label.at(0)->deleteLater();
     QLabel_label.clear();
     QLabel *label = new QLabel;
     this->question_answer(6,"single_select",id_select.arrary_id[currentTitle],label,"c","C");
     ui->formLayout->addWidget(label);
     QLabel_label.append(label);
}

void practice_windows::on_radioButton_4_clicked()  //按钮D
{
     ui->formLayout->removeWidget(QLabel_label.at(0));
     QLabel_label.at(0)->deleteLater();
     QLabel_label.clear();
     QLabel *label = new QLabel;
     this->question_answer(6,"single_select",id_select.arrary_id[currentTitle],label,"d","D");
     ui->formLayout->addWidget(label);
     QLabel_label.append(label);
}

void practice_windows::on_pushButton_5_clicked()  //填空题答案显示按钮
{
    this->show_answer_is_take=1;
    this->flag_hideblank=1;
    QSqlQuery query;
    query.exec("select * from filling where QuestionID = "+ id_fill.arrary_id[currentTitle]);
    query.first();
    QString answer = query.value(3).toString();//答案
    QString kong_number =query.value(2).toString();//空数
    int num=kong_number.toInt();

    //        QStringList strlist = qanswer.split("###");
    //        cout<<strlist.at(0).toLocal8Bit().data();
    if(this->flag_blank==0){
    for(int i=0;i<num;i++){
        this->blank[i]=new QLineEdit(this);
        this->blank[i]->setGeometry(250+140*i,300,81,43);
        QString txt=QString::fromStdString(answer.section("###", i, i).trimmed().toStdString());
       //将答案按照###分隔开，然后依次填入空格
       //tostdstring:将string 转换成QString
        this->blank[i]->setReadOnly(true);

        qDebug()<<txt;
                   this->blank[i]->setText(txt);
        this->blank[i]->show();

    }
    this->flag_blank=1;
    current_blank_num=num;
    }
    else
    {
        for(int i=0;i<this->current_blank_num;i++){
            this->blank[i]->close();
             delete this->blank[i];
        }

        for(int i=0;i<num;i++){
            this->blank[i]=new QLineEdit(this);
            this->blank[i]->setGeometry(250+140*i,300,81,43);


            QString txt=QString::fromStdString(answer.section("###", i, i).trimmed().toStdString());
           //将答案按照###分隔开，然后依次填入空格
           //tostdstring:将string 转换成QString
            qDebug()<<txt;
                       this->blank[i]->setText(txt);
            this->blank[i]->setReadOnly(true);
            this->blank[i]->show();
        }
        this->flag_blank=1;
        current_blank_num=num;
    }
//    for(int i=0; i<kong_number; i++) {
//        QLabel *label = new QLabel;

//    }
}

void practice_windows::on_radioButton_5_clicked() //判断题正确按钮
{
    ui->gridLayout->removeWidget(QLabel_label.at(0));
    QLabel_label.at(0)->deleteLater();
    QLabel_label.clear();
    QLabel *label = new QLabel;
    this->question_answer(2,"tf_question",id_judge.arrary_id[currentTitle],label,"true","TRUE");
    ui->gridLayout->addWidget(label,4,0,1,1);
    QLabel_label.append(label);
}

void practice_windows::on_radioButton_6_clicked()//判断题错误按钮
{
    ui->gridLayout->removeWidget(QLabel_label.at(0));
    QLabel_label.at(0)->deleteLater();
    QLabel_label.clear();
    QLabel *label = new QLabel;
    this->question_answer(2,"tf_question",id_judge.arrary_id[currentTitle],label,"false","FALSE");
    ui->gridLayout->addWidget(label,4,0,1,1);
    QLabel_label.append(label);
}

void practice_windows::on_pushButton_7_clicked()  //上一题
{


    read_data_from_sql sql_select;
    if(0 != currentTitle)
    {
        currentTitle--;
        if(0 == title_flag){
            sql_select.read_sql("single_select",ui->textEdit,id_select.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            sql_select.read_sql("single_select",ui->lineEdit,ui->lineEdit_2,ui->lineEdit_3,ui->lineEdit_4,id_select.arrary_id[currentTitle]);
            ui->radioButton_7->setChecked(true);
            QLabel_label.at(0)->hide();

        }else if(1 == title_flag) {
            sql_select.read_sql("tf_question",ui->textEdit,id_judge.arrary_id[currentTitle]);
            ui->radioButton_8->setChecked(true);
            QLabel_label.at(0)->hide();

            //连接sql，将题目显示在文本框里
        }else {
            this->flag_hideblank=1;
            int filltotal = sql_select.read_sql_fill("filling",ui->textEdit,id_fill.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            int filltotal_last = sql_select.read_sql_fill("filling",ui->textEdit,id_fill.arrary_id[currentTitle+1]);


            for (int i=0; i<filltotal_last; i++) {
                  ui->verticalLayout->removeWidget(QLineEdit_edit.at(i));
                    QLineEdit_edit.at(i)->deleteLater();
                    qDebug() << "QLineEdit_edit.at(i):"<<QLineEdit_edit.at(i);
            }
                QLineEdit_edit.clear();
                qDebug()<<"111111111111111111111";
                //QLineEdit_edit_last_tow.clear();
            for (int i=0; i<filltotal; i++) {
                QLineEdit *edit = new QLineEdit(this);

                QLineEdit_edit.append(edit);

                //QLineEdit_edit_last_tow.append(edit);
                ui->verticalLayout->addWidget(edit);

            }
            if(this->show_answer_is_take==1&&this->flag_hideblank!=0)
                for(int i=0;i<this->current_blank_num;i++)
                    this->blank[i]->hide();

        }
    }else{
        kong_frist=1;//到达第一题，读第一个空
        QMessageBox::about(this, "注意", "当前题为第一题");
    }
}

int delete_layoutwidget_flag =1;
void practice_windows::on_pushButton_8_clicked()  //下一题
{

    read_data_from_sql sql_select ;
    if(titleTotal-1 != currentTitle)
    {
        currentTitle++;
        if(0 == title_flag){
            sql_select.read_sql("single_select",ui->textEdit,id_select.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            sql_select.read_sql("single_select",ui->lineEdit,ui->lineEdit_2,ui->lineEdit_3,ui->lineEdit_4,id_select.arrary_id[currentTitle]);
            ui->radioButton_7->setChecked(true);
            QLabel_label.at(0)->hide();

        }else if(1 == title_flag) {
            //sql_select.read_sql("tf_question",ui->textEdit,id_judge.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            sql_select.read_sql("tf_question",ui->textEdit,id_judge.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            ui->radioButton_8->setChecked(true);
            QLabel_label.at(0)->hide();

        }else {
            this->flag_hideblank=1;
            int filltotal_last = sql_select.read_sql_fill("filling",ui->textEdit,id_fill.arrary_id[currentTitle-1]);
            int filltotal = sql_select.read_sql_fill("filling",ui->textEdit,id_fill.arrary_id[currentTitle]);//连接sql，将题目显示在文本框里
            for (int i=0; i<filltotal_last; i++) {

                    ui->verticalLayout->removeWidget(QLineEdit_edit.at(i));
                    QLineEdit_edit.at(i)->deleteLater();
                    qDebug() << "QLineEdit_edit.at(i):"<<QLineEdit_edit.at(i);
                }
                QLineEdit_edit.clear();

            for (int i=0; i<filltotal; i++) {
                QLineEdit *edit = new QLineEdit(this);
                QLineEdit_edit.append(edit);
                ui->verticalLayout->addWidget(edit);
               }
            if(this->show_answer_is_take==1&&this->flag_hideblank!=0)
                for(int i=0;i<this->current_blank_num;i++)
                    this->blank[i]->hide();
        }
    }
    else{
        QMessageBox::about(this, "注意", "当前题为最后一题");
    }
}






void practice_windows::on_pushButton_4_clicked()
{

}

