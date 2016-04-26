/****************************************************************************
** Meta object code from reading C++ file 'practice_windows.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../paper_exam/practice_windows.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'practice_windows.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_practice_windows_t {
    QByteArrayData data[16];
    char stringdata[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_practice_windows_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_practice_windows_t qt_meta_stringdata_practice_windows = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 23),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 21),
QT_MOC_LITERAL(4, 64, 23),
QT_MOC_LITERAL(5, 88, 22),
QT_MOC_LITERAL(6, 111, 24),
QT_MOC_LITERAL(7, 136, 24),
QT_MOC_LITERAL(8, 161, 24),
QT_MOC_LITERAL(9, 186, 23),
QT_MOC_LITERAL(10, 210, 23),
QT_MOC_LITERAL(11, 234, 23),
QT_MOC_LITERAL(12, 258, 23),
QT_MOC_LITERAL(13, 282, 24),
QT_MOC_LITERAL(14, 307, 24),
QT_MOC_LITERAL(15, 332, 23)
    },
    "practice_windows\0on_pushButton_6_clicked\0"
    "\0on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "on_radioButton_3_clicked\0"
    "on_radioButton_4_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_5_clicked\0"
    "on_radioButton_5_clicked\0"
    "on_radioButton_6_clicked\0"
    "on_pushButton_4_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_practice_windows[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    0,   88,    2, 0x08,
       7,    0,   89,    2, 0x08,
       8,    0,   90,    2, 0x08,
       9,    0,   91,    2, 0x08,
      10,    0,   92,    2, 0x08,
      11,    0,   93,    2, 0x08,
      12,    0,   94,    2, 0x08,
      13,    0,   95,    2, 0x08,
      14,    0,   96,    2, 0x08,
      15,    0,   97,    2, 0x08,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void practice_windows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        practice_windows *_t = static_cast<practice_windows *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_6_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_radioButton_clicked(); break;
        case 4: _t->on_radioButton_2_clicked(); break;
        case 5: _t->on_radioButton_3_clicked(); break;
        case 6: _t->on_radioButton_4_clicked(); break;
        case 7: _t->on_pushButton_7_clicked(); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_5_clicked(); break;
        case 11: _t->on_radioButton_5_clicked(); break;
        case 12: _t->on_radioButton_6_clicked(); break;
        case 13: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject practice_windows::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_practice_windows.data,
      qt_meta_data_practice_windows,  qt_static_metacall, 0, 0}
};


const QMetaObject *practice_windows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *practice_windows::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_practice_windows.stringdata))
        return static_cast<void*>(const_cast< practice_windows*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int practice_windows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
