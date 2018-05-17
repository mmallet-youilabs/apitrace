/****************************************************************************
** Meta object code from reading C++ file 'retracer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/retracer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'retracer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Retracer_t {
    QByteArrayData data[19];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Retracer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Retracer_t qt_meta_stringdata_Retracer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Retracer"
QT_MOC_LITERAL(1, 9, 8), // "finished"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "output"
QT_MOC_LITERAL(4, 26, 10), // "foundState"
QT_MOC_LITERAL(5, 37, 14), // "ApiTraceState*"
QT_MOC_LITERAL(6, 52, 5), // "state"
QT_MOC_LITERAL(7, 58, 12), // "foundProfile"
QT_MOC_LITERAL(8, 71, 15), // "trace::Profile*"
QT_MOC_LITERAL(9, 87, 7), // "profile"
QT_MOC_LITERAL(10, 95, 15), // "foundThumbnails"
QT_MOC_LITERAL(11, 111, 13), // "QList<QImage>"
QT_MOC_LITERAL(12, 125, 10), // "thumbnails"
QT_MOC_LITERAL(13, 136, 9), // "ImageHash"
QT_MOC_LITERAL(14, 146, 5), // "error"
QT_MOC_LITERAL(15, 152, 3), // "msg"
QT_MOC_LITERAL(16, 156, 13), // "retraceErrors"
QT_MOC_LITERAL(17, 170, 20), // "QList<ApiTraceError>"
QT_MOC_LITERAL(18, 191, 6) // "errors"

    },
    "Retracer\0finished\0\0output\0foundState\0"
    "ApiTraceState*\0state\0foundProfile\0"
    "trace::Profile*\0profile\0foundThumbnails\0"
    "QList<QImage>\0thumbnails\0ImageHash\0"
    "error\0msg\0retraceErrors\0QList<ApiTraceError>\0"
    "errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Retracer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,
      10,    1,   61,    2, 0x06 /* Public */,
      14,    1,   64,    2, 0x06 /* Public */,
      16,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 13,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void Retracer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Retracer *_t = static_cast<Retracer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->foundState((*reinterpret_cast< ApiTraceState*(*)>(_a[1]))); break;
        case 2: _t->foundProfile((*reinterpret_cast< trace::Profile*(*)>(_a[1]))); break;
        case 3: _t->foundThumbnails((*reinterpret_cast< const QList<QImage>(*)>(_a[1]))); break;
        case 4: _t->foundThumbnails((*reinterpret_cast< const ImageHash(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->retraceErrors((*reinterpret_cast< const QList<ApiTraceError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QImage> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Retracer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(ApiTraceState * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::foundState)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(trace::Profile * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::foundProfile)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(const QList<QImage> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::foundThumbnails)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(const ImageHash & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::foundThumbnails)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Retracer::*_t)(const QList<ApiTraceError> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Retracer::retraceErrors)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Retracer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_Retracer.data,
      qt_meta_data_Retracer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Retracer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Retracer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Retracer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Retracer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Retracer::finished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Retracer::foundState(ApiTraceState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Retracer::foundProfile(trace::Profile * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Retracer::foundThumbnails(const QList<QImage> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Retracer::foundThumbnails(const ImageHash & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Retracer::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Retracer::retraceErrors(const QList<ApiTraceError> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
