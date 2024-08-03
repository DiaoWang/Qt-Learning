/****************************************************************************
** Meta object code from reading C++ file 'demo02_qpushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo02_qpushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo02_qpushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPushButtonDemo_t {
    const uint offsetsAndSize[14];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QPushButtonDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QPushButtonDemo_t qt_meta_stringdata_QPushButtonDemo = {
    {
QT_MOC_LITERAL(0, 15), // "QPushButtonDemo"
QT_MOC_LITERAL(16, 20), // "on_pbtn_Play_clicked"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 23), // "on_pbtn_Connect_clicked"
QT_MOC_LITERAL(62, 26), // "on_pbtn_SignalDemo_clicked"
QT_MOC_LITERAL(89, 26), // "on_pbtn_SignalDemo_pressed"
QT_MOC_LITERAL(116, 27) // "on_pbtn_SignalDemo_released"

    },
    "QPushButtonDemo\0on_pbtn_Play_clicked\0"
    "\0on_pbtn_Connect_clicked\0"
    "on_pbtn_SignalDemo_clicked\0"
    "on_pbtn_SignalDemo_pressed\0"
    "on_pbtn_SignalDemo_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPushButtonDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QPushButtonDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QPushButtonDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbtn_Play_clicked(); break;
        case 1: _t->on_pbtn_Connect_clicked(); break;
        case 2: _t->on_pbtn_SignalDemo_clicked(); break;
        case 3: _t->on_pbtn_SignalDemo_pressed(); break;
        case 4: _t->on_pbtn_SignalDemo_released(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject QPushButtonDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QPushButtonDemo.offsetsAndSize,
    qt_meta_data_QPushButtonDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QPushButtonDemo_t
, QtPrivate::TypeAndForceComplete<QPushButtonDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QPushButtonDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPushButtonDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPushButtonDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QPushButtonDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
