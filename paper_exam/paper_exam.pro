#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T13:39:53
#
#-------------------------------------------------

QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = paper_exam
TEMPLATE = app

CONFIG += C++11


SOURCES += main.cpp\
        exam_windows.cpp \
    student_exam_login.cpp \
    tuichu_true.cpp \
    dialog.cpp \
    dialog_choose_select.cpp \
    dialog_choose_select_modify.cpp \
    dialog_choosecheck.cpp \
    dialog_fiidelecte.cpp \
    dialog_fill_change.cpp \
    dialog_fill_modify.cpp \
    dialog_fill_select.cpp \
    dialog_filladd.cpp \
    dialog_judge_change.cpp \
    dialog_judge_modify.cpp \
    dialog_judge_select.cpp \
    dialog_judgedelecte.cpp \
    dialog_select_questions_level.cpp \
    dialog2.cpp \
    dialog2_2.cpp \
    dialog3.cpp \
    dialog3_1delecte.cpp \
    dialog3_3.cpp \
    dialog11_1.cpp \
    dialogchoosechance.cpp \
    dialogjudgeadd.cpp \
    flag.cpp \
    mainwindow.cpp \
    widget.cpp \
    student_ui.cpp \
    admin_ui.cpp \
    dialoglogin.cpp \
    order_disorder.cpp \
    practice_windows.cpp \
    read_data_from_sql.cpp \
    rodom_question_id.cpp \
    Paper_operation.cpp \
    PaperInformation.cpp \
    PaperMake.cpp \
    Random_select.cpp \
    Specific_information.cpp \
    test_id.cpp \
    title_add_ui.cpp

HEADERS  += exam_windows.h \
    student_exam_login.h \
    tuichu_true.h \
    dialog.h \
    dialog_choose_select.h \
    dialog_choose_select_modify.h \
    dialog_choosecheck.h \
    dialog_fiidelecte.h \
    dialog_fill_change.h \
    dialog_fill_modify.h \
    dialog_fill_select.h \
    dialog_filladd.h \
    dialog_judge_change.h \
    dialog_judge_modify.h \
    dialog_judge_select.h \
    dialog_judgedelecte.h \
    dialog_select_questions_level.h \
    dialog2.h \
    dialog2_2.h \
    dialog3.h \
    dialog3_1delecte.h \
    dialog3_3.h \
    dialog11_1.h \
    dialogchoosechance.h \
    dialogjudgeadd.h \
    flag.h \
    mainwindow.h \
    student_ui.h \
    admin_ui.h \
    dialoglogin.h \
    order_disorder.h \
    practice_windows.h \
    read_data_from_sql.h \
    rodom_question_id.h \
    widget.h \
    Paper_operation.h \
    PaperInformation.h \
    PaperMake.h \
    Random_select.h \
    Specific_information.h \
    test_id.h \
    title_add_ui.h

FORMS    += exam_windows.ui \
    student_exam_login.ui \
    tuichu_true.ui \
    dialog.ui \
    dialog_choose_select.ui \
    dialog_choose_select_modify.ui \
    dialog_choosecheck.ui \
    dialog_fiidelecte.ui \
    dialog_fill_change.ui \
    dialog_fill_modify.ui \
    dialog_fill_select.ui \
    dialog_filladd.ui \
    dialog_judge_change.ui \
    dialog_judge_modify.ui \
    dialog_judge_select.ui \
    dialog_judgedelecte.ui \
    dialog_select_questions_level.ui \
    dialog2.ui \
    dialog2_2.ui \
    dialog3.ui \
    dialog3_1delecte.ui \
    dialog3_3.ui \
    dialog11_1.ui \
    dialogchoosechance.ui \
    dialogjudgeadd.ui \
    mainwindow.ui \
    student_ui.ui \
    admin_ui.ui \
    dialoglogin.ui \
    order_disorder.ui \
    practice_windows.ui \
    widget.ui \
    Paper_operation.ui \
    PaperInformation.ui \
    PaperMake.ui \
    Specific_information.ui \
    title_add_ui.ui

OTHER_FILES += \
    paper_exam.pro.user \
    practice_mis.pro.user \
    practice_mis.pro.user.2cb2b09 \
    practice_mis.pro.user.fbb08f0 \
    TestPaper.pro.user \
    TestPaper.pro.user.2cb2b09

SUBDIRS += \
    practice_mis.pro \
    practice_mis.pro \
    TestPaper.pro
