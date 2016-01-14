/****************************************************************************
** Meta object code from reading C++ file 'markingdash.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../markingdash.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'markingdash.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_markingDash_t {
    QByteArrayData data[13];
    char stringdata[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_markingDash_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_markingDash_t qt_meta_stringdata_markingDash = {
    {
QT_MOC_LITERAL(0, 0, 11), // "markingDash"
QT_MOC_LITERAL(1, 12, 8), // "sendData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "data"
QT_MOC_LITERAL(4, 27, 38), // "on_pushButton_goSubmissionPat..."
QT_MOC_LITERAL(5, 66, 30), // "on_pushButton_Solution_clicked"
QT_MOC_LITERAL(6, 97, 30), // "on_pushButton_SaveFile_clicked"
QT_MOC_LITERAL(7, 128, 35), // "on_tableWidget_students_itemP..."
QT_MOC_LITERAL(8, 164, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(9, 182, 4), // "item"
QT_MOC_LITERAL(10, 187, 39), // "on_tableWidget_studentGrade_i..."
QT_MOC_LITERAL(11, 227, 33), // "on_pushButton_updateGrade_cli..."
QT_MOC_LITERAL(12, 261, 27) // "on_Rubric_table_itemPressed"

    },
    "markingDash\0sendData\0\0data\0"
    "on_pushButton_goSubmissionPath_clicked\0"
    "on_pushButton_Solution_clicked\0"
    "on_pushButton_SaveFile_clicked\0"
    "on_tableWidget_students_itemPressed\0"
    "QTableWidgetItem*\0item\0"
    "on_tableWidget_studentGrade_itemPressed\0"
    "on_pushButton_updateGrade_clicked\0"
    "on_Rubric_table_itemPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_markingDash[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void markingDash::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        markingDash *_t = static_cast<markingDash *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_goSubmissionPath_clicked(); break;
        case 2: _t->on_pushButton_Solution_clicked(); break;
        case 3: _t->on_pushButton_SaveFile_clicked(); break;
        case 4: _t->on_tableWidget_students_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_tableWidget_studentGrade_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_updateGrade_clicked(); break;
        case 7: _t->on_Rubric_table_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (markingDash::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&markingDash::sendData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject markingDash::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_markingDash.data,
      qt_meta_data_markingDash,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *markingDash::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *markingDash::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_markingDash.stringdata))
        return static_cast<void*>(const_cast< markingDash*>(this));
    return QDialog::qt_metacast(_clname);
}

int markingDash::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void markingDash::sendData(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
