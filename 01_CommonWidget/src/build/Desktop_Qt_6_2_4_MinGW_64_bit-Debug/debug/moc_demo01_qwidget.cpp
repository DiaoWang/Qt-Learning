/****************************************************************************
** Meta object code from reading C++ file 'demo01_qwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo01_qwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo01_qwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWidgetDemo_t {
    const uint offsetsAndSize[20];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QWidgetDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QWidgetDemo_t qt_meta_stringdata_QWidgetDemo = {
    {
QT_MOC_LITERAL(0, 11), // "QWidgetDemo"
QT_MOC_LITERAL(12, 34), // "on_pbtn_GetGeometryAndSize_cl..."
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 23), // "on_pbtn_SetSize_clicked"
QT_MOC_LITERAL(72, 28), // "on_pbtn_SetFixedSize_clicked"
QT_MOC_LITERAL(101, 30), // "on_pbtn_SetMinimumSize_clicked"
QT_MOC_LITERAL(132, 30), // "on_pbtn_SetMaximumSize_clicked"
QT_MOC_LITERAL(163, 30), // "on_pbtn_MoveToPosition_clicked"
QT_MOC_LITERAL(194, 24), // "on_pbtn_SetTitle_clicked"
QT_MOC_LITERAL(219, 23) // "on_pbtn_SetIcon_clicked"

    },
    "QWidgetDemo\0on_pbtn_GetGeometryAndSize_clicked\0"
    "\0on_pbtn_SetSize_clicked\0"
    "on_pbtn_SetFixedSize_clicked\0"
    "on_pbtn_SetMinimumSize_clicked\0"
    "on_pbtn_SetMaximumSize_clicked\0"
    "on_pbtn_MoveToPosition_clicked\0"
    "on_pbtn_SetTitle_clicked\0"
    "on_pbtn_SetIcon_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWidgetDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QWidgetDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWidgetDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbtn_GetGeometryAndSize_clicked(); break;
        case 1: _t->on_pbtn_SetSize_clicked(); break;
        case 2: _t->on_pbtn_SetFixedSize_clicked(); break;
        case 3: _t->on_pbtn_SetMinimumSize_clicked(); break;
        case 4: _t->on_pbtn_SetMaximumSize_clicked(); break;
        case 5: _t->on_pbtn_MoveToPosition_clicked(); break;
        case 6: _t->on_pbtn_SetTitle_clicked(); break;
        case 7: _t->on_pbtn_SetIcon_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject QWidgetDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QWidgetDemo.offsetsAndSize,
    qt_meta_data_QWidgetDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QWidgetDemo_t
, QtPrivate::TypeAndForceComplete<QWidgetDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QWidgetDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidgetDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWidgetDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QWidgetDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
