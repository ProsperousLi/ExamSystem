#-------------------------------------------------
#
# Project created by QtCreator 2015-08-28T14:23:34
#
#-------------------------------------------------

QT       += core gui
QT +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = practice_mis
TEMPLATE = app


SOURCES += main.cpp\
        practice_windows.cpp \
    read_data_from_sql.cpp \
    rodom_question_id.cpp \
    order_disorder.cpp

HEADERS  += practice_windows.h \
    read_data_from_sql.h \
    rodom_question_id.h \
    order_disorder.h

FORMS    += practice_windows.ui \
    order_disorder.ui
