#-------------------------------------------------
#
# Project created by QtCreator 2015-08-27T15:51:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TEMPLATE = app

TARGET = datebase
QT +=widgets gui  sql

SOURCES += main.cpp\
    MIS_main.cpp \
    PaperMake.cpp \
    PaperInformation.cpp \
    Paper_operation.cpp \
    Random_select.cpp \
    Specific_information.cpp \
    test_id.cpp

HEADERS  += \
    MIS_main.h \
    PaperMake.h \
    PaperInformation.h \
    Paper_operation.h \
    Random_select.h \
    Specific_information.h \
    test_id.h

FORMS    += \
    MIS_main.ui \
    PaperMake.ui \
    PaperInformation.ui \
    Paper_operation.ui \
    Specific_information.ui
