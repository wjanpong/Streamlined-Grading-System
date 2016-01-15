/****************************************************************************
** Meta object code from reading C++ file 'systemadminview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../systemadminview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemadminview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_systemadminview_t {
    QByteArrayData data[13];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_systemadminview_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_systemadminview_t qt_meta_stringdata_systemadminview = {
    {
QT_MOC_LITERAL(0, 0, 15), // "systemadminview"
QT_MOC_LITERAL(1, 16, 8), // "sendData"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "data"
QT_MOC_LITERAL(4, 31, 24), // "on_addNewAccount_clicked"
QT_MOC_LITERAL(5, 56, 21), // "on_Load_table_clicked"
QT_MOC_LITERAL(6, 78, 20), // "on_Data_Pass_clicked"
QT_MOC_LITERAL(7, 99, 25), // "on_Modify_Comfirm_clicked"
QT_MOC_LITERAL(8, 125, 28), // "on_pushButton_logout_clicked"
QT_MOC_LITERAL(9, 154, 17), // "on_Delete_clicked"
QT_MOC_LITERAL(10, 172, 11), // "receiveData"
QT_MOC_LITERAL(11, 184, 31), // "on_pushButton_resetPass_clicked"
QT_MOC_LITERAL(12, 216, 32) // "on_pushButton_ChangePass_clicked"

    },
    "systemadminview\0sendData\0\0data\0"
    "on_addNewAccount_clicked\0on_Load_table_clicked\0"
    "on_Data_Pass_clicked\0on_Modify_Comfirm_clicked\0"
    "on_pushButton_logout_clicked\0"
    "on_Delete_clicked\0receiveData\0"
    "on_pushButton_resetPass_clicked\0"
    "on_pushButton_ChangePass_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_systemadminview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void systemadminview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        systemadminview *_t = static_cast<systemadminview *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_addNewAccount_clicked(); break;
        case 2: _t->on_Load_table_clicked(); break;
        case 3: _t->on_Data_Pass_clicked(); break;
        case 4: _t->on_Modify_Comfirm_clicked(); break;
        case 5: _t->on_pushButton_logout_clicked(); break;
        case 6: _t->on_Delete_clicked(); break;
        case 7: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_resetPass_clicked(); break;
        case 9: _t->on_pushButton_ChangePass_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (systemadminview::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&systemadminview::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject systemadminview::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_systemadminview.data,
      qt_meta_data_systemadminview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *systemadminview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *systemadminview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_systemadminview.stringdata))
        return static_cast<void*>(const_cast< systemadminview*>(this));
    return QDialog::qt_metacast(_clname);
}

int systemadminview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void systemadminview::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
