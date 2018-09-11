#-------------------------------------------------
#
# Project created by QtCreator 2018-09-08T18:48:32
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = Electronics_Calculator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        calculator.cpp \
    complex.cpp \
    smd_resistor.cpp \
    number_systems.cpp \
    facade.cpp \
    dB_calculator.cpp \
    binObserver.cpp \
    decObserver.cpp \
    hexObserver.cpp \
    observer.cpp \
    octObserver.cpp \
    QLineEditSubject.cpp

HEADERS += \
        calculator.h \
    complex.h \
    smd_resistor.h \
    number_systems.h \
    facade.h \
    dB_calculator.h \
    binObserver.h \
    decObserver.h \
    hexObserver.h \
    observer.h \
    octObserver.h \
    QLineEditSubject.h

FORMS += \
        calculator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
