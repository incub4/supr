#-------------------------------------------------
#
# Project created by QtCreator 2016-02-02T12:10:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ui
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    preprocessor.cpp \
    construction.cpp \
    load.cpp \
    rod.cpp

HEADERS  += dialog.h \
    preprocessor.h \
    construction.h \
    load.h \
    rod.h

FORMS    += dialog.ui \
    preprocessor.ui

RESOURCES += \
    myres.qrc
