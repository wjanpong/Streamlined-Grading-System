/****************************************************************************
** Meta object code from reading C++ file 'createrubric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../createrubric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createrubric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_createRubric_t {
    QByteArrayData data[6];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_createRubric_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_createRubric_t qt_meta_stringdata_createRubric = {
    {
QT_MOC_LITERAL(0, 0, 12), // "createRubric"
QT_MOC_LITERAL(1, 13, 7), // "setData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "activityId"
QT_MOC_LITERAL(4, 33, 7), // "testnum"
QT_MOC_LITERAL(5, 41, 34) // "on_pushButton_createRubric_cl..."

    },
    "createRubric\0setData\0\0activityId\0"
    "testnum\0on_pushButton_createRubric_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_createRubric[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void createRubric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        createRubric *_t = static_cast<createRubric *>(_o);
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_pushButton_createRubric_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject createRubric::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_createRubric.data,
      qt_meta_data_createRubric,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *createRubric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createRubric::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_createRubric.stringdata))
        return static_cast<void*>(const_cast< createRubric*>(this));
    return QDialog::qt_metacast(_clname);
}

int createRubric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
