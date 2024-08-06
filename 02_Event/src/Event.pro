QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    demo00_event.cpp \
    demo01_mouse_event.cpp \
    demo02_keyboard_event.cpp \
    demo03_timer_event.cpp \
    demo04_drag_event.cpp \
    demo05_paint_event.cpp \
    demo06_context_menu_event.cpp \
    demo07_event_propagate_process.cpp \
    main.cpp

HEADERS += \
    demo00_event.h \
    demo01_mouse_event.h \
    demo02_keyboard_event.h \
    demo03_timer_event.h \
    demo04_drag_event.h \
    demo05_paint_event.h \
    demo06_context_menu_event.h \
    demo07_event_propagate_process.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
