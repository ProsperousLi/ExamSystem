/****************************************************************************
** Meta object code from reading C++ file 'PaperInformation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../paper_exam/PaperInformation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PaperInformation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaperInformation_t {
    QByteArrayData data[11];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PaperInformation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PaperInformation_t qt_meta_stringdata_PaperInformation = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 21),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 23),
QT_MOC_LITERAL(4, 64, 8),
QT_MOC_LITERAL(5, 73, 10),
QT_MOC_LITERAL(6, 84, 6),
QT_MOC_LITERAL(7, 91, 16),
QT_MOC_LITERAL(8, 108, 23),
QT_MOC_LITERAL(9, 132, 23),
QT_MOC_LITERAL(10, 156, 23)
    },
    "PaperInformation\0on_pushButton_clicked\0"
    "\0on_pushButton_3_clicked\0showList\0"
    "QSqlQuery*\0query2\0showList_forshow\0"
    "on_pushButton_4_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_5_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaperInformation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08,
       3,    0,   50,    2, 0x08,
       4,    1,   51,    2, 0x08,
       7,    0,   54,    2, 0x08,
       8,    0,   55,    2, 0x08,
       9,    0,   56,    2, 0x08,
      10,    0,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PaperInformation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaperInformation *_t = static_cast<PaperInformation *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->showList((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 3: _t->showList_forshow(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PaperInformation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PaperInformation.data,
      qt_meta_data_PaperInformation,  qt_static_metacall, 0, 0}
};


const QMetaObject *PaperInformation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaperInformation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaperInformation.stringdata))
        return static_cast<void*>(const_cast< PaperInformation*>(this));
    return QDialog::qt_metacast(_clname);
}

int PaperInformation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
