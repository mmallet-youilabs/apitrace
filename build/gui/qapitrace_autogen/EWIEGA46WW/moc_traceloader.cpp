/****************************************************************************
** Meta object code from reading C++ file 'traceloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/traceloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traceloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceLoader_t {
    QByteArrayData data[38];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceLoader_t qt_meta_stringdata_TraceLoader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TraceLoader"
QT_MOC_LITERAL(1, 12, 12), // "parseProblem"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "message"
QT_MOC_LITERAL(4, 34, 14), // "startedParsing"
QT_MOC_LITERAL(5, 49, 6), // "parsed"
QT_MOC_LITERAL(6, 56, 7), // "percent"
QT_MOC_LITERAL(7, 64, 10), // "guessedApi"
QT_MOC_LITERAL(8, 75, 3), // "api"
QT_MOC_LITERAL(9, 79, 15), // "finishedParsing"
QT_MOC_LITERAL(10, 95, 12), // "framesLoaded"
QT_MOC_LITERAL(11, 108, 21), // "QList<ApiTraceFrame*>"
QT_MOC_LITERAL(12, 130, 6), // "frames"
QT_MOC_LITERAL(13, 137, 19), // "frameContentsLoaded"
QT_MOC_LITERAL(14, 157, 14), // "ApiTraceFrame*"
QT_MOC_LITERAL(15, 172, 5), // "frame"
QT_MOC_LITERAL(16, 178, 22), // "QVector<ApiTraceCall*>"
QT_MOC_LITERAL(17, 201, 13), // "topLevelItems"
QT_MOC_LITERAL(18, 215, 5), // "calls"
QT_MOC_LITERAL(19, 221, 14), // "binaryDataSize"
QT_MOC_LITERAL(20, 236, 12), // "searchResult"
QT_MOC_LITERAL(21, 249, 23), // "ApiTrace::SearchRequest"
QT_MOC_LITERAL(22, 273, 7), // "request"
QT_MOC_LITERAL(23, 281, 22), // "ApiTrace::SearchResult"
QT_MOC_LITERAL(24, 304, 6), // "result"
QT_MOC_LITERAL(25, 311, 13), // "ApiTraceCall*"
QT_MOC_LITERAL(26, 325, 4), // "call"
QT_MOC_LITERAL(27, 330, 15), // "foundFrameStart"
QT_MOC_LITERAL(28, 346, 13), // "foundFrameEnd"
QT_MOC_LITERAL(29, 360, 14), // "foundCallIndex"
QT_MOC_LITERAL(30, 375, 9), // "loadTrace"
QT_MOC_LITERAL(31, 385, 8), // "filename"
QT_MOC_LITERAL(32, 394, 9), // "loadFrame"
QT_MOC_LITERAL(33, 404, 14), // "findFrameStart"
QT_MOC_LITERAL(34, 419, 12), // "findFrameEnd"
QT_MOC_LITERAL(35, 432, 13), // "findCallIndex"
QT_MOC_LITERAL(36, 446, 5), // "index"
QT_MOC_LITERAL(37, 452, 6) // "search"

    },
    "TraceLoader\0parseProblem\0\0message\0"
    "startedParsing\0parsed\0percent\0guessedApi\0"
    "api\0finishedParsing\0framesLoaded\0"
    "QList<ApiTraceFrame*>\0frames\0"
    "frameContentsLoaded\0ApiTraceFrame*\0"
    "frame\0QVector<ApiTraceCall*>\0topLevelItems\0"
    "calls\0binaryDataSize\0searchResult\0"
    "ApiTrace::SearchRequest\0request\0"
    "ApiTrace::SearchResult\0result\0"
    "ApiTraceCall*\0call\0foundFrameStart\0"
    "foundFrameEnd\0foundCallIndex\0loadTrace\0"
    "filename\0loadFrame\0findFrameStart\0"
    "findFrameEnd\0findCallIndex\0index\0"
    "search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    0,  102,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       7,    1,  106,    2, 0x06 /* Public */,
       9,    0,  109,    2, 0x06 /* Public */,
      10,    1,  110,    2, 0x06 /* Public */,
      13,    4,  113,    2, 0x06 /* Public */,
      20,    3,  122,    2, 0x06 /* Public */,
      27,    1,  129,    2, 0x06 /* Public */,
      28,    1,  132,    2, 0x06 /* Public */,
      29,    1,  135,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    1,  138,    2, 0x0a /* Public */,
      32,    1,  141,    2, 0x0a /* Public */,
      33,    1,  144,    2, 0x0a /* Public */,
      34,    1,  147,    2, 0x0a /* Public */,
      35,    1,  150,    2, 0x0a /* Public */,
      37,    1,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 16, QMetaType::ULongLong,   15,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23, 0x80000000 | 25,   22,   24,   26,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 25,   26,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   36,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void TraceLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TraceLoader *_t = static_cast<TraceLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->parseProblem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->startedParsing(); break;
        case 2: _t->parsed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->guessedApi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finishedParsing(); break;
        case 5: _t->framesLoaded((*reinterpret_cast< const QList<ApiTraceFrame*>(*)>(_a[1]))); break;
        case 6: _t->frameContentsLoaded((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< const QVector<ApiTraceCall*>(*)>(_a[2])),(*reinterpret_cast< const QVector<ApiTraceCall*>(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 7: _t->searchResult((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1])),(*reinterpret_cast< ApiTrace::SearchResult(*)>(_a[2])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[3]))); break;
        case 8: _t->foundFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 9: _t->foundFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 10: _t->foundCallIndex((*reinterpret_cast< ApiTraceCall*(*)>(_a[1]))); break;
        case 11: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->loadFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 13: _t->findFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 14: _t->findFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 15: _t->findCallIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->search((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ApiTraceFrame*> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<ApiTraceCall*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TraceLoader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::parseProblem)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::startedParsing)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::parsed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::guessedApi)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::finishedParsing)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(const QList<ApiTraceFrame*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::framesLoaded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(ApiTraceFrame * , const QVector<ApiTraceCall*> & , const QVector<ApiTraceCall*> & , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::frameContentsLoaded)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(const ApiTrace::SearchRequest & , ApiTrace::SearchResult , ApiTraceCall * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::searchResult)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::foundFrameStart)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::foundFrameEnd)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (TraceLoader::*_t)(ApiTraceCall * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceLoader::foundCallIndex)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TraceLoader.data,
      qt_meta_data_TraceLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TraceLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TraceLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void TraceLoader::parseProblem(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TraceLoader::startedParsing()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TraceLoader::parsed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TraceLoader::guessedApi(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TraceLoader::finishedParsing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TraceLoader::framesLoaded(const QList<ApiTraceFrame*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TraceLoader::frameContentsLoaded(ApiTraceFrame * _t1, const QVector<ApiTraceCall*> & _t2, const QVector<ApiTraceCall*> & _t3, quint64 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TraceLoader::searchResult(const ApiTrace::SearchRequest & _t1, ApiTrace::SearchResult _t2, ApiTraceCall * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TraceLoader::foundFrameStart(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TraceLoader::foundFrameEnd(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TraceLoader::foundCallIndex(ApiTraceCall * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
