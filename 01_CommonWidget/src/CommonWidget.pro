QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo00_common_widget.cpp \
    demo01_qwidget.cpp \
    demo02_qpushbutton.cpp \
    demo03_qlabel.cpp \
    demo04_qlineedit.cpp \
    demo05_qradiobutton.cpp \
    demo06_qcheckbox.cpp \
    demo07_qcombobox.cpp \
    demo08_qspinbox.cpp \
    demo09_qslider.cpp \
    demo10_qprogressbar.cpp \
    demo11_qlistwidget.cpp \
    demo12_qtablewidget.cpp \
    demobase.cpp \
    main.cpp

HEADERS += \
    demo00_common_widget.h \
    demo01_qwidget.h \
    demo02_qpushbutton.h \
    demo03_qlabel.h \
    demo04_qlineedit.h \
    demo05_qradiobutton.h \
    demo06_qcheckbox.h \
    demo07_qcombobox.h \
    demo08_qspinbox.h \
    demo09_qslider.h \
    demo10_qprogressbar.h \
    demo11_qlistwidget.h \
    demo12_qtablewidget.h \
    demobase.h

FORMS += \
    demo00_common_widget.ui \
    demo01_qwidget.ui \
    demo02_qpushbutton.ui \
    demo03_qlabel.ui \
    demo04_qlineedit.ui \
    demo05_qradiobutton.ui \
    demo06_qcheckbox.ui \
    demo07_qcombobox.ui \
    demo08_qspinbox.ui \
    demo09_qslider.ui \
    demo10_qprogressbar.ui \
    demo11_qlistwidget.ui \
    demo12_qtablewidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    rc.qrc
