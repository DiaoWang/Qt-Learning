/****************************************************************************
** Meta object code from reading C++ file 'demo00_common_widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../demo00_common_widget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demo00_common_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CommonWidgetDemo_t {
    const uint offsetsAndSize[34];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CommonWidgetDemo_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CommonWidgetDemo_t qt_meta_stringdata_CommonWidgetDemo = {
    {
QT_MOC_LITERAL(0, 16), // "CommonWidgetDemo"
QT_MOC_LITERAL(17, 17), // "onSubWindowClosed"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 7), // "uint8_t"
QT_MOC_LITERAL(44, 8), // "demoType"
QT_MOC_LITERAL(53, 23), // "on_pbtn_QWidget_clicked"
QT_MOC_LITERAL(77, 27), // "on_pbtn_QPushButton_clicked"
QT_MOC_LITERAL(105, 22), // "on_pbtn_QLabel_clicked"
QT_MOC_LITERAL(128, 25), // "on_pbtn_QLineEdit_clicked"
QT_MOC_LITERAL(154, 28), // "on_pbtn_QRadioButton_clicked"
QT_MOC_LITERAL(183, 25), // "on_pbtn_QCheckBox_clicked"
QT_MOC_LITERAL(209, 25), // "on_pbtn_QComboBox_clicked"
QT_MOC_LITERAL(235, 24), // "on_pbtn_QSpinBox_clicked"
QT_MOC_LITERAL(260, 23), // "on_pbtn_QSlider_clicked"
QT_MOC_LITERAL(284, 28), // "on_pbtn_QProgressBar_clicked"
QT_MOC_LITERAL(313, 27), // "on_pbtn_QListWidget_clicked"
QT_MOC_LITERAL(341, 28) // "on_pbtn_QTableWidget_clicked"

    },
    "CommonWidgetDemo\0onSubWindowClosed\0\0"
    "uint8_t\0demoType\0on_pbtn_QWidget_clicked\0"
    "on_pbtn_QPushButton_clicked\0"
    "on_pbtn_QLabel_clicked\0on_pbtn_QLineEdit_clicked\0"
    "on_pbtn_QRadioButton_clicked\0"
    "on_pbtn_QCheckBox_clicked\0"
    "on_pbtn_QComboBox_clicked\0"
    "on_pbtn_QSpinBox_clicked\0"
    "on_pbtn_QSlider_clicked\0"
    "on_pbtn_QProgressBar_clicked\0"
    "on_pbtn_QListWidget_clicked\0"
    "on_pbtn_QTableWidget_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommonWidgetDemo[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x08,    1 /* Private */,
       5,    0,   95,    2, 0x08,    3 /* Private */,
       6,    0,   96,    2, 0x08,    4 /* Private */,
       7,    0,   97,    2, 0x08,    5 /* Private */,
       8,    0,   98,    2, 0x08,    6 /* Private */,
       9,    0,   99,    2, 0x08,    7 /* Private */,
      10,    0,  100,    2, 0x08,    8 /* Private */,
      11,    0,  101,    2, 0x08,    9 /* Private */,
      12,    0,  102,    2, 0x08,   10 /* Private */,
      13,    0,  103,    2, 0x08,   11 /* Private */,
      14,    0,  104,    2, 0x08,   12 /* Private */,
      15,    0,  105,    2, 0x08,   13 /* Private */,
      16,    0,  106,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void CommonWidgetDemo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CommonWidgetDemo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSubWindowClosed((*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 1: _t->on_pbtn_QWidget_clicked(); break;
        case 2: _t->on_pbtn_QPushButton_clicked(); break;
        case 3: _t->on_pbtn_QLabel_clicked(); break;
        case 4: _t->on_pbtn_QLineEdit_clicked(); break;
        case 5: _t->on_pbtn_QRadioButton_clicked(); break;
        case 6: _t->on_pbtn_QCheckBox_clicked(); break;
        case 7: _t->on_pbtn_QComboBox_clicked(); break;
        case 8: _t->on_pbtn_QSpinBox_clicked(); break;
        case 9: _t->on_pbtn_QSlider_clicked(); break;
        case 10: _t->on_pbtn_QProgressBar_clicked(); break;
        case 11: _t->on_pbtn_QListWidget_clicked(); break;
        case 12: _t->on_pbtn_QTableWidget_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CommonWidgetDemo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CommonWidgetDemo.offsetsAndSize,
    qt_meta_data_CommonWidgetDemo,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CommonWidgetDemo_t
, QtPrivate::TypeAndForceComplete<CommonWidgetDemo, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CommonWidgetDemo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommonWidgetDemo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CommonWidgetDemo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CommonWidgetDemo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
