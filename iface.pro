#-------------------------------------------------
#
# Project created by QtCreator 2015-09-21T17:50:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = iface
TEMPLATE = app

LIBS += -L/usr/local/lib -lcurl 	-lxml2


SOURCES += main.cpp\
        iface.cpp \


HEADERS  += iface.h \

FORMS    += iface.ui
