/****************************************************************************
** Meta object code from reading C++ file 'apitracemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/apitracemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apitracemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApiTraceModel_t {
    QByteArrayData data[18];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApiTraceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApiTraceModel_t qt_meta_stringdata_ApiTraceModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ApiTraceModel"
QT_MOC_LITERAL(1, 14, 16), // "invalidateFrames"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "beginAddingFrames"
QT_MOC_LITERAL(4, 50, 8), // "oldCount"
QT_MOC_LITERAL(5, 59, 8), // "numAdded"
QT_MOC_LITERAL(6, 68, 15), // "endAddingFrames"
QT_MOC_LITERAL(7, 84, 7), // "changed"
QT_MOC_LITERAL(8, 92, 14), // "ApiTraceEvent*"
QT_MOC_LITERAL(9, 107, 5), // "event"
QT_MOC_LITERAL(10, 113, 11), // "callChanged"
QT_MOC_LITERAL(11, 125, 13), // "ApiTraceCall*"
QT_MOC_LITERAL(12, 139, 4), // "call"
QT_MOC_LITERAL(13, 144, 12), // "frameChanged"
QT_MOC_LITERAL(14, 157, 14), // "ApiTraceFrame*"
QT_MOC_LITERAL(15, 172, 5), // "frame"
QT_MOC_LITERAL(16, 178, 17), // "beginLoadingFrame"
QT_MOC_LITERAL(17, 196, 15) // "endLoadingFrame"

    },
    "ApiTraceModel\0invalidateFrames\0\0"
    "beginAddingFrames\0oldCount\0numAdded\0"
    "endAddingFrames\0changed\0ApiTraceEvent*\0"
    "event\0callChanged\0ApiTraceCall*\0call\0"
    "frameChanged\0ApiTraceFrame*\0frame\0"
    "beginLoadingFrame\0endLoadingFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApiTraceModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    2,   55,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
      10,    1,   64,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,
      16,    2,   70,    2, 0x08 /* Private */,
      17,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,    5,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void ApiTraceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApiTraceModel *_t = static_cast<ApiTraceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invalidateFrames(); break;
        case 1: _t->beginAddingFrames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->endAddingFrames(); break;
        case 3: _t->changed((*reinterpret_cast< ApiTraceEvent*(*)>(_a[1]))); break;
        case 4: _t->callChanged((*reinterpret_cast< ApiTraceCall*(*)>(_a[1]))); break;
        case 5: _t->frameChanged((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 6: _t->beginLoadingFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->endLoadingFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApiTraceModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_ApiTraceModel.data,
      qt_meta_data_ApiTraceModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApiTraceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApiTraceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApiTraceModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int ApiTraceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
