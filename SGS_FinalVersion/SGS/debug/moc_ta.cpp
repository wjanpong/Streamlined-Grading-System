/****************************************************************************
** Meta object code from reading C++ file 'ta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TA_t {
    QByteArrayData data[9];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TA_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TA_t qt_meta_stringdata_TA = {
    {
QT_MOC_LITERAL(0, 0, 2), // "TA"
QT_MOC_LITERAL(1, 3, 8), // "sendData"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 4), // "data"
QT_MOC_LITERAL(4, 18, 9), // "sendData2"
QT_MOC_LITERAL(5, 28, 28), // "on_pushButton_logout_clicked"
QT_MOC_LITERAL(6, 57, 26), // "on_pushButton_mark_clicked"
QT_MOC_LITERAL(7, 84, 11), // "receiveData"
QT_MOC_LITERAL(8, 96, 32) // "on_pushButton_ChangePass_clicked"

    },
    "TA\0sendData\0\0data\0sendData2\0"
    "on_pushButton_logout_clicked\0"
    "on_pushButton_mark_clicked\0receiveData\0"
    "on_pushButton_ChangePass_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TA[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   50,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x08 /* Private */,
       7,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void TA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TA *_t = static_cast<TA *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendData2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_logout_clicked(); break;
        case 3: _t->on_pushButton_mark_clicked(); break;
        case 4: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_ChangePass_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TA::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TA::sendData)) {
                *result = 0;
            }
        }
        {
            typedef void (TA::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TA::sendData2)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject TA::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_TA.data,
      qt_meta_data_TA,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TA::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TA.stringdata))
        return static_cast<void*>(const_cast< TA*>(this));
    return QDialog::qt_metacast(_clname);
}

int TA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TA::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TA::sendData2(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
