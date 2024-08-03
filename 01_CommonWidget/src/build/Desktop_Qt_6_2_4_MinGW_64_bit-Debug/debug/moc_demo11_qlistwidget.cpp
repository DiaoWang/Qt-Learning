/****************************************************************************
** Meta object code from reading C++ file 'demo11_qlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo11_qlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo11_qlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QListWidgetDemo_t {
    const uint offsetsAndSize[22];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QListWidgetDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QListWidgetDemo_t qt_meta_stringdata_QListWidgetDemo = {
    {
QT_MOC_LITERAL(0, 15), // "QListWidgetDemo"
QT_MOC_LITERAL(16, 19), // "on_pbtn_Add_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 22), // "on_pbtn_Insert_clicked"
QT_MOC_LITERAL(60, 22), // "on_pbtn_Delete_clicked"
QT_MOC_LITERAL(83, 24), // "on_rbtn_ListMode_clicked"
QT_MOC_LITERAL(108, 24), // "on_rbtn_IconMode_clicked"
QT_MOC_LITERAL(133, 30), // "on_lstwgt_Province_itemClicked"
QT_MOC_LITERAL(164, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(181, 4), // "item"
QT_MOC_LITERAL(186, 36) // "on_lstwgt_Province_itemDouble..."

    },
    "QListWidgetDemo\0on_pbtn_Add_clicked\0"
    "\0on_pbtn_Insert_clicked\0on_pbtn_Delete_clicked\0"
    "on_rbtn_ListMode_clicked\0"
    "on_rbtn_IconMode_clicked\0"
    "on_lstwgt_Province_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_lstwgt_Province_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QListWidgetDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    1,   61,    2, 0x08,    6 /* Private */,
      10,    1,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QListWidgetDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QListWidgetDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbtn_Add_clicked(); break;
        case 1: _t->on_pbtn_Insert_clicked(); break;
        case 2: _t->on_pbtn_Delete_clicked(); break;
        case 3: _t->on_rbtn_ListMode_clicked(); break;
        case 4: _t->on_rbtn_IconMode_clicked(); break;
        case 5: _t->on_lstwgt_Province_itemClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 6: _t->on_lstwgt_Province_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QListWidgetDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QListWidgetDemo.offsetsAndSize,
    qt_meta_data_QListWidgetDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QListWidgetDemo_t
, QtPrivate::TypeAndForceComplete<QListWidgetDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>


>,
    nullptr
} };


const QMetaObject *QListWidgetDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QListWidgetDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QListWidgetDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QListWidgetDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
