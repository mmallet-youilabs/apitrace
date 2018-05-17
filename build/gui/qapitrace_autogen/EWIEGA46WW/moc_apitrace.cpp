/****************************************************************************
** Meta object code from reading C++ file 'apitrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/apitrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apitrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApiTrace_t {
    QByteArrayData data[71];
    char stringdata0[891];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApiTrace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApiTrace_t qt_meta_stringdata_ApiTrace = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ApiTrace"
QT_MOC_LITERAL(1, 9, 9), // "loadTrace"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "name"
QT_MOC_LITERAL(4, 25, 12), // "requestFrame"
QT_MOC_LITERAL(5, 38, 14), // "ApiTraceFrame*"
QT_MOC_LITERAL(6, 53, 5), // "frame"
QT_MOC_LITERAL(7, 59, 19), // "problemLoadingTrace"
QT_MOC_LITERAL(8, 79, 7), // "message"
QT_MOC_LITERAL(9, 87, 19), // "startedLoadingTrace"
QT_MOC_LITERAL(10, 107, 6), // "loaded"
QT_MOC_LITERAL(11, 114, 7), // "percent"
QT_MOC_LITERAL(12, 122, 20), // "finishedLoadingTrace"
QT_MOC_LITERAL(13, 143, 11), // "invalidated"
QT_MOC_LITERAL(14, 155, 17), // "framesInvalidated"
QT_MOC_LITERAL(15, 173, 7), // "changed"
QT_MOC_LITERAL(16, 181, 14), // "ApiTraceEvent*"
QT_MOC_LITERAL(17, 196, 5), // "event"
QT_MOC_LITERAL(18, 202, 13), // "startedSaving"
QT_MOC_LITERAL(19, 216, 5), // "saved"
QT_MOC_LITERAL(20, 222, 10), // "findResult"
QT_MOC_LITERAL(21, 233, 23), // "ApiTrace::SearchRequest"
QT_MOC_LITERAL(22, 257, 7), // "request"
QT_MOC_LITERAL(23, 265, 22), // "ApiTrace::SearchResult"
QT_MOC_LITERAL(24, 288, 6), // "result"
QT_MOC_LITERAL(25, 295, 13), // "ApiTraceCall*"
QT_MOC_LITERAL(26, 309, 4), // "call"
QT_MOC_LITERAL(27, 314, 17), // "beginAddingFrames"
QT_MOC_LITERAL(28, 332, 8), // "oldCount"
QT_MOC_LITERAL(29, 341, 8), // "numAdded"
QT_MOC_LITERAL(30, 350, 15), // "endAddingFrames"
QT_MOC_LITERAL(31, 366, 17), // "beginLoadingFrame"
QT_MOC_LITERAL(32, 384, 15), // "endLoadingFrame"
QT_MOC_LITERAL(33, 400, 15), // "foundFrameStart"
QT_MOC_LITERAL(34, 416, 13), // "foundFrameEnd"
QT_MOC_LITERAL(35, 430, 14), // "foundCallIndex"
QT_MOC_LITERAL(36, 445, 12), // "loaderSearch"
QT_MOC_LITERAL(37, 458, 20), // "loaderFindFrameStart"
QT_MOC_LITERAL(38, 479, 18), // "loaderFindFrameEnd"
QT_MOC_LITERAL(39, 498, 19), // "loaderFindCallIndex"
QT_MOC_LITERAL(40, 518, 5), // "index"
QT_MOC_LITERAL(41, 524, 11), // "setFileName"
QT_MOC_LITERAL(42, 536, 4), // "save"
QT_MOC_LITERAL(43, 541, 15), // "finishedParsing"
QT_MOC_LITERAL(44, 557, 9), // "loadFrame"
QT_MOC_LITERAL(45, 567, 8), // "findNext"
QT_MOC_LITERAL(46, 576, 3), // "str"
QT_MOC_LITERAL(47, 580, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(48, 600, 11), // "sensitivity"
QT_MOC_LITERAL(49, 612, 8), // "findPrev"
QT_MOC_LITERAL(50, 621, 14), // "findFrameStart"
QT_MOC_LITERAL(51, 636, 12), // "findFrameEnd"
QT_MOC_LITERAL(52, 649, 13), // "findCallIndex"
QT_MOC_LITERAL(53, 663, 12), // "setCallError"
QT_MOC_LITERAL(54, 676, 13), // "ApiTraceError"
QT_MOC_LITERAL(55, 690, 5), // "error"
QT_MOC_LITERAL(56, 696, 14), // "bindThumbnails"
QT_MOC_LITERAL(57, 711, 9), // "ImageHash"
QT_MOC_LITERAL(58, 721, 10), // "thumbnails"
QT_MOC_LITERAL(59, 732, 9), // "addFrames"
QT_MOC_LITERAL(60, 742, 21), // "QList<ApiTraceFrame*>"
QT_MOC_LITERAL(61, 764, 6), // "frames"
QT_MOC_LITERAL(62, 771, 9), // "slotSaved"
QT_MOC_LITERAL(63, 781, 10), // "guessedApi"
QT_MOC_LITERAL(64, 792, 3), // "api"
QT_MOC_LITERAL(65, 796, 17), // "loaderFrameLoaded"
QT_MOC_LITERAL(66, 814, 22), // "QVector<ApiTraceCall*>"
QT_MOC_LITERAL(67, 837, 13), // "topLevelItems"
QT_MOC_LITERAL(68, 851, 5), // "calls"
QT_MOC_LITERAL(69, 857, 14), // "binaryDataSize"
QT_MOC_LITERAL(70, 872, 18) // "loaderSearchResult"

    },
    "ApiTrace\0loadTrace\0\0name\0requestFrame\0"
    "ApiTraceFrame*\0frame\0problemLoadingTrace\0"
    "message\0startedLoadingTrace\0loaded\0"
    "percent\0finishedLoadingTrace\0invalidated\0"
    "framesInvalidated\0changed\0ApiTraceEvent*\0"
    "event\0startedSaving\0saved\0findResult\0"
    "ApiTrace::SearchRequest\0request\0"
    "ApiTrace::SearchResult\0result\0"
    "ApiTraceCall*\0call\0beginAddingFrames\0"
    "oldCount\0numAdded\0endAddingFrames\0"
    "beginLoadingFrame\0endLoadingFrame\0"
    "foundFrameStart\0foundFrameEnd\0"
    "foundCallIndex\0loaderSearch\0"
    "loaderFindFrameStart\0loaderFindFrameEnd\0"
    "loaderFindCallIndex\0index\0setFileName\0"
    "save\0finishedParsing\0loadFrame\0findNext\0"
    "str\0Qt::CaseSensitivity\0sensitivity\0"
    "findPrev\0findFrameStart\0findFrameEnd\0"
    "findCallIndex\0setCallError\0ApiTraceError\0"
    "error\0bindThumbnails\0ImageHash\0"
    "thumbnails\0addFrames\0QList<ApiTraceFrame*>\0"
    "frames\0slotSaved\0guessedApi\0api\0"
    "loaderFrameLoaded\0QVector<ApiTraceCall*>\0"
    "topLevelItems\0calls\0binaryDataSize\0"
    "loaderSearchResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApiTrace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       7,    1,  215,    2, 0x06 /* Public */,
       9,    0,  218,    2, 0x06 /* Public */,
      10,    1,  219,    2, 0x06 /* Public */,
      12,    0,  222,    2, 0x06 /* Public */,
      13,    0,  223,    2, 0x06 /* Public */,
      14,    0,  224,    2, 0x06 /* Public */,
      15,    1,  225,    2, 0x06 /* Public */,
      18,    0,  228,    2, 0x06 /* Public */,
      19,    0,  229,    2, 0x06 /* Public */,
      20,    3,  230,    2, 0x06 /* Public */,
      27,    2,  237,    2, 0x06 /* Public */,
      30,    0,  242,    2, 0x06 /* Public */,
      31,    2,  243,    2, 0x06 /* Public */,
      32,    1,  248,    2, 0x06 /* Public */,
      33,    1,  251,    2, 0x06 /* Public */,
      34,    1,  254,    2, 0x06 /* Public */,
      35,    1,  257,    2, 0x06 /* Public */,
      36,    1,  260,    2, 0x06 /* Public */,
      37,    1,  263,    2, 0x06 /* Public */,
      38,    1,  266,    2, 0x06 /* Public */,
      39,    1,  269,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    1,  272,    2, 0x0a /* Public */,
      42,    0,  275,    2, 0x0a /* Public */,
      43,    0,  276,    2, 0x0a /* Public */,
      44,    1,  277,    2, 0x0a /* Public */,
      45,    4,  280,    2, 0x0a /* Public */,
      49,    4,  289,    2, 0x0a /* Public */,
      50,    1,  298,    2, 0x0a /* Public */,
      51,    1,  301,    2, 0x0a /* Public */,
      52,    1,  304,    2, 0x0a /* Public */,
      53,    1,  307,    2, 0x0a /* Public */,
      56,    1,  310,    2, 0x0a /* Public */,
      59,    1,  313,    2, 0x08 /* Private */,
      62,    0,  316,    2, 0x08 /* Private */,
      63,    1,  317,    2, 0x08 /* Private */,
      65,    4,  320,    2, 0x08 /* Private */,
      70,    3,  329,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23, 0x80000000 | 25,   22,   24,   26,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   28,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   29,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,   40,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 25, QMetaType::QString, 0x80000000 | 47,    6,   26,   46,   48,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 25, QMetaType::QString, 0x80000000 | 47,    6,   26,   46,   48,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 66, 0x80000000 | 66, QMetaType::ULongLong,    6,   67,   68,   69,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 23, 0x80000000 | 25,   22,   24,   26,

       0        // eod
};

void ApiTrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ApiTrace *_t = static_cast<ApiTrace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 2: _t->problemLoadingTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->startedLoadingTrace(); break;
        case 4: _t->loaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->finishedLoadingTrace(); break;
        case 6: _t->invalidated(); break;
        case 7: _t->framesInvalidated(); break;
        case 8: _t->changed((*reinterpret_cast< ApiTraceEvent*(*)>(_a[1]))); break;
        case 9: _t->startedSaving(); break;
        case 10: _t->saved(); break;
        case 11: _t->findResult((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1])),(*reinterpret_cast< ApiTrace::SearchResult(*)>(_a[2])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[3]))); break;
        case 12: _t->beginAddingFrames((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->endAddingFrames(); break;
        case 14: _t->beginLoadingFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->endLoadingFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 16: _t->foundFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 17: _t->foundFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 18: _t->foundCallIndex((*reinterpret_cast< ApiTraceCall*(*)>(_a[1]))); break;
        case 19: _t->loaderSearch((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1]))); break;
        case 20: _t->loaderFindFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 21: _t->loaderFindFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 22: _t->loaderFindCallIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->save(); break;
        case 25: _t->finishedParsing(); break;
        case 26: _t->loadFrame((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 27: _t->findNext((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[4]))); break;
        case 28: _t->findPrev((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[4]))); break;
        case 29: _t->findFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 30: _t->findFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 31: _t->findCallIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setCallError((*reinterpret_cast< const ApiTraceError(*)>(_a[1]))); break;
        case 33: _t->bindThumbnails((*reinterpret_cast< const ImageHash(*)>(_a[1]))); break;
        case 34: _t->addFrames((*reinterpret_cast< const QList<ApiTraceFrame*>(*)>(_a[1]))); break;
        case 35: _t->slotSaved(); break;
        case 36: _t->guessedApi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->loaderFrameLoaded((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1])),(*reinterpret_cast< const QVector<ApiTraceCall*>(*)>(_a[2])),(*reinterpret_cast< const QVector<ApiTraceCall*>(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 38: _t->loaderSearchResult((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1])),(*reinterpret_cast< ApiTrace::SearchResult(*)>(_a[2])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceEvent* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ApiTraceFrame*> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<ApiTraceCall*> >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ApiTrace::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loadTrace)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::requestFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::problemLoadingTrace)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::startedLoadingTrace)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loaded)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::finishedLoadingTrace)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::invalidated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::framesInvalidated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::changed)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::startedSaving)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::saved)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(const ApiTrace::SearchRequest & , ApiTrace::SearchResult , ApiTraceCall * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::findResult)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::beginAddingFrames)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::endAddingFrames)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::beginLoadingFrame)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::endLoadingFrame)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::foundFrameStart)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::foundFrameEnd)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceCall * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::foundCallIndex)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(const ApiTrace::SearchRequest & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loaderSearch)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loaderFindFrameStart)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(ApiTraceFrame * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loaderFindFrameEnd)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (ApiTrace::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ApiTrace::loaderFindCallIndex)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApiTrace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ApiTrace.data,
      qt_meta_data_ApiTrace,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ApiTrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApiTrace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApiTrace.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ApiTrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void ApiTrace::loadTrace(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ApiTrace::requestFrame(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ApiTrace::problemLoadingTrace(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ApiTrace::startedLoadingTrace()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ApiTrace::loaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ApiTrace::finishedLoadingTrace()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ApiTrace::invalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ApiTrace::framesInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ApiTrace::changed(ApiTraceEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ApiTrace::startedSaving()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ApiTrace::saved()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ApiTrace::findResult(const ApiTrace::SearchRequest & _t1, ApiTrace::SearchResult _t2, ApiTraceCall * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ApiTrace::beginAddingFrames(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ApiTrace::endAddingFrames()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void ApiTrace::beginLoadingFrame(ApiTraceFrame * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ApiTrace::endLoadingFrame(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ApiTrace::foundFrameStart(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ApiTrace::foundFrameEnd(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ApiTrace::foundCallIndex(ApiTraceCall * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ApiTrace::loaderSearch(const ApiTrace::SearchRequest & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ApiTrace::loaderFindFrameStart(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void ApiTrace::loaderFindFrameEnd(ApiTraceFrame * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void ApiTrace::loaderFindCallIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
