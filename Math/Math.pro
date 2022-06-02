QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bonusform.cpp \
    factorymaker.cpp \
    graphics.cpp \
    main.cpp \
    mainwindow.cpp \
    shape2dcircle.cpp \
    shape2dcircledialog.cpp \
    shape2dfactory.cpp \
    shape2drect.cpp \
    shape2drectdialog.cpp \
    shape3dcircle.cpp \
    shape3dcircledialog.cpp \
    shape3dfactory.cpp \
    shape3drect.cpp \
    shape3drectdialog.cpp

HEADERS += \
    abstractfactory.h \
    bonusform.h \
    factorymaker.h \
    graphics.hpp \
    mainwindow.h \
    shape.h \
    shape2dcircle.h \
    shape2dcircledialog.h \
    shape2dfactory.h \
    shape2drect.h \
    shape2drectdialog.h \
    shape3dcircle.h \
    shape3dcircledialog.h \
    shape3dfactory.h \
    shape3drect.h \
    shape3drectdialog.h

FORMS += \
    bonusform.ui \
    mainwindow.ui \
    shape2dcircledialog.ui \
    shape2drectdialog.ui \
    shape3dcircledialog.ui \
    shape3drectdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
