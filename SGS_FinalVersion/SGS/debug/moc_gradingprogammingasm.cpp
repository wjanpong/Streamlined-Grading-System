/****************************************************************************
** Meta object code from reading C++ file 'gradingprogammingasm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gradingprogammingasm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradingprogammingasm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GradingProgammingASM_t {
    QByteArrayData data[10];
    char stringdata[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradingProgammingASM_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradingProgammingASM_t qt_meta_stringdata_GradingProgammingASM = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GradingProgammingASM"
QT_MOC_LITERAL(1, 21, 35), // "on_tableWidget_students_itemP..."
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(4, 76, 4), // "item"
QT_MOC_LITERAL(5, 81, 27), // "on_Rubric_table_itemPressed"
QT_MOC_LITERAL(6, 109, 33), // "on_pushButton_updateGrade_pre..."
QT_MOC_LITERAL(7, 143, 38), // "on_pushButton_goSubmissionPat..."
QT_MOC_LITERAL(8, 182, 39), // "on_tableWidget_studentGrade_i..."
QT_MOC_LITERAL(9, 222, 30) // "on_pushButton_Solution_pressed"

    },
    "GradingProgammingASM\0"
    "on_tableWidget_students_itemPressed\0"
    "\0QTableWidgetItem*\0item\0"
    "on_Rubric_table_itemPressed\0"
    "on_pushButton_updateGrade_pressed\0"
    "on_pushButton_goSubmissionPath_pressed\0"
    "on_tableWidget_studentGrade_itemPressed\0"
    "on_pushButton_Solution_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradingProgammingASM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void GradingProgammingASM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradingProgammingASM *_t = static_cast<GradingProgammingASM *>(_o);
        switch (_id) {
        case 0: _t->on_tableWidget_students_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_Rubric_table_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_updateGrade_pressed(); break;
        case 3: _t->on_pushButton_goSubmissionPath_pressed(); break;
        case 4: _t->on_tableWidget_studentGrade_itemPressed((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_Solution_pressed(); break;
        default: ;
        }
    }
}

const QMetaObject GradingProgammingASM::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GradingProgammingASM.data,
      qt_meta_data_GradingProgammingASM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GradingProgammingASM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradingProgammingASM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GradingProgammingASM.stringdata))
        return static_cast<void*>(const_cast< GradingProgammingASM*>(this));
    return QDialog::qt_metacast(_clname);
}

int GradingProgammingASM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
