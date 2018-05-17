/****************************************************************************
** Meta object code from reading C++ file 'vertexdatainterpreter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/vertexdatainterpreter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vertexdatainterpreter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VertexDataInterpreter_t {
    QByteArrayData data[15];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VertexDataInterpreter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VertexDataInterpreter_t qt_meta_stringdata_VertexDataInterpreter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "VertexDataInterpreter"
QT_MOC_LITERAL(1, 22, 13), // "interpretData"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 7), // "setData"
QT_MOC_LITERAL(4, 45, 4), // "data"
QT_MOC_LITERAL(5, 50, 17), // "setTypeFromString"
QT_MOC_LITERAL(6, 68, 3), // "str"
QT_MOC_LITERAL(7, 72, 9), // "setStride"
QT_MOC_LITERAL(8, 82, 6), // "stride"
QT_MOC_LITERAL(9, 89, 13), // "setComponents"
QT_MOC_LITERAL(10, 103, 3), // "num"
QT_MOC_LITERAL(11, 107, 7), // "setType"
QT_MOC_LITERAL(12, 115, 4), // "type"
QT_MOC_LITERAL(13, 120, 17), // "setStartingOffset"
QT_MOC_LITERAL(14, 138, 6) // "offset"

    },
    "VertexDataInterpreter\0interpretData\0"
    "\0setData\0data\0setTypeFromString\0str\0"
    "setStride\0stride\0setComponents\0num\0"
    "setType\0type\0setStartingOffset\0offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VertexDataInterpreter[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,
      11,    1,   62,    2, 0x0a /* Public */,
      13,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void VertexDataInterpreter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VertexDataInterpreter *_t = static_cast<VertexDataInterpreter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interpretData(); break;
        case 1: _t->setData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->setTypeFromString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setStride((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setComponents((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setStartingOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VertexDataInterpreter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VertexDataInterpreter.data,
      qt_meta_data_VertexDataInterpreter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VertexDataInterpreter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VertexDataInterpreter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VertexDataInterpreter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VertexDataInterpreter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
