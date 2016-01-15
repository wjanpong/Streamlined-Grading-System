/****************************************************************************
** Meta object code from reading C++ file 'rolesel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rolesel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rolesel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_roleSel_t {
    QByteArrayData data[10];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_roleSel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_roleSel_t qt_meta_stringdata_roleSel = {
    {
QT_MOC_LITERAL(0, 0, 7), // "roleSel"
QT_MOC_LITERAL(1, 8, 8), // "sendData"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "data"
QT_MOC_LITERAL(4, 23, 11), // "receiveData"
QT_MOC_LITERAL(5, 35, 28), // "on_pushButton_Logout_clicked"
QT_MOC_LITERAL(6, 64, 31), // "on_pushButton_loadRoles_clicked"
QT_MOC_LITERAL(7, 96, 32), // "on_tableWidget_roles_itemClicked"
QT_MOC_LITERAL(8, 129, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 147, 4) // "item"

    },
    "roleSel\0sendData\0\0data\0receiveData\0"
    "on_pushButton_Logout_clicked\0"
    "on_pushButton_loadRoles_clicked\0"
    "on_tableWidget_roles_itemClicked\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_roleSel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void roleSel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        roleSel *_t = static_cast<roleSel *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_Logout_clicked(); break;
        case 3: _t->on_pushButton_loadRoles_clicked(); break;
        case 4: _t->on_tableWidget_roles_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (roleSel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&roleSel::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject roleSel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_roleSel.data,
      qt_meta_data_roleSel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *roleSel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *roleSel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_roleSel.stringdata))
        return static_cast<void*>(const_cast< roleSel*>(this));
    return QDialog::qt_metacast(_clname);
}

int roleSel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void roleSel::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
