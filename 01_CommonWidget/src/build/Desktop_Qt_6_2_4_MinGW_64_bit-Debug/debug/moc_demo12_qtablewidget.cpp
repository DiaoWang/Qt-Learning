/****************************************************************************
** Meta object code from reading C++ file 'demo12_qtablewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo12_qtablewidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo12_qtablewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTableWidgetDemo_t {
    const uint offsetsAndSize[34];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QTableWidgetDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QTableWidgetDemo_t qt_meta_stringdata_QTableWidgetDemo = {
    {
QT_MOC_LITERAL(0, 16), // "QTableWidgetDemo"
QT_MOC_LITERAL(17, 26), // "on_ckbox_RowHeader_toggled"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 7), // "checked"
QT_MOC_LITERAL(53, 29), // "on_ckbox_ColumnHeader_toggled"
QT_MOC_LITERAL(83, 36), // "on_ckbox_AlternatingRowColor_..."
QT_MOC_LITERAL(120, 30), // "on_ckbox_AlterableCell_toggled"
QT_MOC_LITERAL(151, 29), // "on_pbtn_SetStyleSheet_clicked"
QT_MOC_LITERAL(181, 26), // "on_rbtn_SelectCell_clicked"
QT_MOC_LITERAL(208, 26), // "on_rbtn_SelectLine_clicked"
QT_MOC_LITERAL(235, 25), // "on_tbwgt_Info_itemClicked"
QT_MOC_LITERAL(261, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(279, 4), // "item"
QT_MOC_LITERAL(284, 23), // "on_pbtn_AddLine_clicked"
QT_MOC_LITERAL(308, 26), // "on_pbtn_InsertLine_clicked"
QT_MOC_LITERAL(335, 33), // "on_pbtn_DeleteCurrentLine_cli..."
QT_MOC_LITERAL(369, 32) // "on_pbtn_AlterCurrentLine_clicked"

    },
    "QTableWidgetDemo\0on_ckbox_RowHeader_toggled\0"
    "\0checked\0on_ckbox_ColumnHeader_toggled\0"
    "on_ckbox_AlternatingRowColor_toggled\0"
    "on_ckbox_AlterableCell_toggled\0"
    "on_pbtn_SetStyleSheet_clicked\0"
    "on_rbtn_SelectCell_clicked\0"
    "on_rbtn_SelectLine_clicked\0"
    "on_tbwgt_Info_itemClicked\0QTableWidgetItem*\0"
    "item\0on_pbtn_AddLine_clicked\0"
    "on_pbtn_InsertLine_clicked\0"
    "on_pbtn_DeleteCurrentLine_clicked\0"
    "on_pbtn_AlterCurrentLine_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTableWidgetDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       4,    1,   89,    2, 0x08,    3 /* Private */,
       5,    1,   92,    2, 0x08,    5 /* Private */,
       6,    1,   95,    2, 0x08,    7 /* Private */,
       7,    0,   98,    2, 0x08,    9 /* Private */,
       8,    0,   99,    2, 0x08,   10 /* Private */,
       9,    0,  100,    2, 0x08,   11 /* Private */,
      10,    1,  101,    2, 0x08,   12 /* Private */,
      13,    0,  104,    2, 0x08,   14 /* Private */,
      14,    0,  105,    2, 0x08,   15 /* Private */,
      15,    0,  106,    2, 0x08,   16 /* Private */,
      16,    0,  107,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QTableWidgetDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTableWidgetDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_ckbox_RowHeader_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->on_ckbox_ColumnHeader_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_ckbox_AlternatingRowColor_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_ckbox_AlterableCell_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_pbtn_SetStyleSheet_clicked(); break;
        case 5: _t->on_rbtn_SelectCell_clicked(); break;
        case 6: _t->on_rbtn_SelectLine_clicked(); break;
        case 7: _t->on_tbwgt_Info_itemClicked((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 8: _t->on_pbtn_AddLine_clicked(); break;
        case 9: _t->on_pbtn_InsertLine_clicked(); break;
        case 10: _t->on_pbtn_DeleteCurrentLine_clicked(); break;
        case 11: _t->on_pbtn_AlterCurrentLine_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject QTableWidgetDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<DemoBase::staticMetaObject>(),
    qt_meta_stringdata_QTableWidgetDemo.offsetsAndSize,
    qt_meta_data_QTableWidgetDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QTableWidgetDemo_t
, QtPrivate::TypeAndForceComplete<QTableWidgetDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTableWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QTableWidgetDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTableWidgetDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTableWidgetDemo.stringdata0))
        return static_cast<void*>(this);
    return DemoBase::qt_metacast(_clname);
}

int QTableWidgetDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DemoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
