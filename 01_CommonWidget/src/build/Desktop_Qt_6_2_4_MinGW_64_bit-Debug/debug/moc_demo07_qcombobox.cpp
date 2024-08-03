/****************************************************************************
** Meta object code from reading C++ file 'demo07_qcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo07_qcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo07_qcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QComboBoxDemo_t {
    const uint offsetsAndSize[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QComboBoxDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QComboBoxDemo_t qt_meta_stringdata_QComboBoxDemo = {
    {
QT_MOC_LITERAL(0, 13), // "QComboBoxDemo"
QT_MOC_LITERAL(14, 22), // "on_le_Name_textChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 34), // "on_cbbox_School_currentTextCh..."
QT_MOC_LITERAL(73, 37), // "on_cbbox_Province_currentInde..."
QT_MOC_LITERAL(111, 5), // "index"
QT_MOC_LITERAL(117, 32) // "on_cbbox_City_currentTextChanged"

    },
    "QComboBoxDemo\0on_le_Name_textChanged\0"
    "\0on_cbbox_School_currentTextChanged\0"
    "on_cbbox_Province_currentIndexChanged\0"
    "index\0on_cbbox_City_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QComboBoxDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       3,    1,   41,    2, 0x08,    3 /* Private */,
       4,    1,   44,    2, 0x08,    5 /* Private */,
       6,    1,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QComboBoxDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QComboBoxDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_le_Name_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_cbbox_School_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_cbbox_Province_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_cbbox_City_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QComboBoxDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QComboBoxDemo.offsetsAndSize,
    qt_meta_data_QComboBoxDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QComboBoxDemo_t
, QtPrivate::TypeAndForceComplete<QComboBoxDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QComboBoxDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QComboBoxDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QComboBoxDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QComboBoxDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
