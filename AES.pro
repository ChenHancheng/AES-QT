#-------------------------------------------------
#
# Project created by QtCreator 2016-12-19T10:16:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AES
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    AESAES.cpp

HEADERS  += mainwindow.h \
    AES.h \
    StdAfx.h

FORMS    += mainwindow.ui

RC_FILE = myico.rc

DISTFILES += \
    myico.rc
