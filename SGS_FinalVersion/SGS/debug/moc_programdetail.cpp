/****************************************************************************
** Meta object code from reading C++ file 'programdetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../programdetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programdetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProgramDetail_t {
    QByteArrayData data[9];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgramDetail_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgramDetail_t qt_meta_stringdata_ProgramDetail = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProgramDetail"
QT_MOC_LITERAL(1, 14, 29), // "on_pushButton_Display_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 30), // "on_pushButton_ModifyPT_clicked"
QT_MOC_LITERAL(4, 76, 30), // "on_pushButton_DeletePT_clicked"
QT_MOC_LITERAL(5, 107, 30), // "on_pushButton_createPT_clicked"
QT_MOC_LITERAL(6, 138, 31), // "on_pushButton_createFIS_clicked"
QT_MOC_LITERAL(7, 170, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 194, 31) // "on_pushButton_ModifyFIS_clicked"

    },
    "ProgramDetail\0on_pushButton_Display_clicked\0"
    "\0on_pushButton_ModifyPT_clicked\0"
    "on_pushButton_DeletePT_clicked\0"
    "on_pushButton_createPT_clicked\0"
    "on_pushButton_createFIS_clicked\0"
    "on_pushButton_3_clicked\0"
    "on_pushButton_ModifyFIS_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgramDetail[] = {

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
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProgramDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgramDetail *_t = static_cast<ProgramDetail *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Display_clicked(); break;
        case 1: _t->on_pushButton_ModifyPT_clicked(); break;
        case 2: _t->on_pushButton_DeletePT_clicked(); break;
        case 3: _t->on_pushButton_createPT_clicked(); break;
        case 4: _t->on_pushButton_createFIS_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_pushButton_ModifyFIS_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProgramDetail::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProgramDetail.data,
      qt_meta_data_ProgramDetail,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgramDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramDetail.stringdata))
        return static_cast<void*>(const_cast< ProgramDetail*>(this));
    return QDialog::qt_metacast(_clname);
}

int ProgramDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
