/****************************************************************************
** Meta object code from reading C++ file 'demo08_qspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo08_qspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo08_qspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSpinBoxDemo_t {
    const uint offsetsAndSize[10];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QSpinBoxDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QSpinBoxDemo_t qt_meta_stringdata_QSpinBoxDemo = {
    {
QT_MOC_LITERAL(0, 12), // "QSpinBoxDemo"
QT_MOC_LITERAL(13, 28), // "on_dspbox_Price_valueChanged"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 4), // "arg1"
QT_MOC_LITERAL(48, 28) // "on_spbox_Weight_valueChanged"

    },
    "QSpinBoxDemo\0on_dspbox_Price_valueChanged\0"
    "\0arg1\0on_spbox_Weight_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpinBoxDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       4,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QSpinBoxDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSpinBoxDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_dspbox_Price_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->on_spbox_Weight_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QSpinBoxDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QSpinBoxDemo.offsetsAndSize,
    qt_meta_data_QSpinBoxDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QSpinBoxDemo_t
, QtPrivate::TypeAndForceComplete<QSpinBoxDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *QSpinBoxDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpinBoxDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSpinBoxDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QSpinBoxDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
