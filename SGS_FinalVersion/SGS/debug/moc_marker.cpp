/****************************************************************************
** Meta object code from reading C++ file 'marker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../marker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'marker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_marker_t {
    QByteArrayData data[13];
    char stringdata[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_marker_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_marker_t qt_meta_stringdata_marker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "marker"
QT_MOC_LITERAL(1, 7, 8), // "sendData"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 8), // "employID"
QT_MOC_LITERAL(4, 26, 28), // "on_pushButton_logout_clicked"
QT_MOC_LITERAL(5, 55, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(6, 82, 11), // "receiveData"
QT_MOC_LITERAL(7, 94, 4), // "data"
QT_MOC_LITERAL(8, 99, 12), // "receiveData2"
QT_MOC_LITERAL(9, 112, 30), // "on_pushButton_Generate_clicked"
QT_MOC_LITERAL(10, 143, 36), // "on_tableWidget_activites_item..."
QT_MOC_LITERAL(11, 180, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(12, 198, 4) // "item"

    },
    "marker\0sendData\0\0employID\0"
    "on_pushButton_logout_clicked\0"
    "on_pushButton_back_clicked\0receiveData\0"
    "data\0receiveData2\0on_pushButton_Generate_clicked\0"
    "on_tableWidget_activites_itemPressed\0"
    "QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_marker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void marker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        marker *_t = static_cast<marker *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_logout_clicked(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receiveData2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_Generate_clicked(); break;
        case 6: _t->on_tableWidget_activites_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (marker::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&marker::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject marker::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_marker.data,
      qt_meta_data_marker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *marker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *marker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_marker.stringdata))
        return static_cast<void*>(const_cast< marker*>(this));
    return QDialog::qt_metacast(_clname);
}

int marker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void marker::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
