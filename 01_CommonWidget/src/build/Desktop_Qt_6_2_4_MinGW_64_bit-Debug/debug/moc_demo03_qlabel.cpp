/****************************************************************************
** Meta object code from reading C++ file 'demo03_qlabel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo03_qlabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo03_qlabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLabelDemo_t {
    const uint offsetsAndSize[20];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QLabelDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QLabelDemo_t qt_meta_stringdata_QLabelDemo = {
    {
QT_MOC_LITERAL(0, 10), // "QLabelDemo"
QT_MOC_LITERAL(11, 23), // "on_pbtn_GetText_clicked"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 23), // "on_pbtn_SetText_clicked"
QT_MOC_LITERAL(60, 25), // "on_pbtn_AlignLeft_clicked"
QT_MOC_LITERAL(86, 27), // "on_pbtn_AlignCenter_clicked"
QT_MOC_LITERAL(114, 26), // "on_pbtn_AlignRight_clicked"
QT_MOC_LITERAL(141, 31), // "on_pbtn_DisableWordWrap_clicked"
QT_MOC_LITERAL(173, 30), // "on_pbtn_EnableWordWrap_clicked"
QT_MOC_LITERAL(204, 27) // "on_pbtn_SwitchImage_clicked"

    },
    "QLabelDemo\0on_pbtn_GetText_clicked\0\0"
    "on_pbtn_SetText_clicked\0"
    "on_pbtn_AlignLeft_clicked\0"
    "on_pbtn_AlignCenter_clicked\0"
    "on_pbtn_AlignRight_clicked\0"
    "on_pbtn_DisableWordWrap_clicked\0"
    "on_pbtn_EnableWordWrap_clicked\0"
    "on_pbtn_SwitchImage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLabelDemo[] = {

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

void QLabelDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QLabelDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbtn_GetText_clicked(); break;
        case 1: _t->on_pbtn_SetText_clicked(); break;
        case 2: _t->on_pbtn_AlignLeft_clicked(); break;
        case 3: _t->on_pbtn_AlignCenter_clicked(); break;
        case 4: _t->on_pbtn_AlignRight_clicked(); break;
        case 5: _t->on_pbtn_DisableWordWrap_clicked(); break;
        case 6: _t->on_pbtn_EnableWordWrap_clicked(); break;
        case 7: _t->on_pbtn_SwitchImage_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject QLabelDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QLabelDemo.offsetsAndSize,
    qt_meta_data_QLabelDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QLabelDemo_t
, QtPrivate::TypeAndForceComplete<QLabelDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QLabelDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLabelDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QLabelDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QLabelDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
