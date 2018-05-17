/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[87];
    char stringdata0[1133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "loadTrace"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "fileName"
QT_MOC_LITERAL(4, 31, 7), // "callNum"
QT_MOC_LITERAL(5, 39, 15), // "setRemoteTarget"
QT_MOC_LITERAL(6, 55, 4), // "host"
QT_MOC_LITERAL(7, 60, 16), // "callItemSelected"
QT_MOC_LITERAL(8, 77, 5), // "index"
QT_MOC_LITERAL(9, 83, 17), // "callItemActivated"
QT_MOC_LITERAL(10, 101, 11), // "createTrace"
QT_MOC_LITERAL(11, 113, 9), // "openTrace"
QT_MOC_LITERAL(12, 123, 9), // "saveTrace"
QT_MOC_LITERAL(13, 133, 11), // "replayStart"
QT_MOC_LITERAL(14, 145, 13), // "replayProfile"
QT_MOC_LITERAL(15, 159, 10), // "replayStop"
QT_MOC_LITERAL(16, 170, 14), // "replayFinished"
QT_MOC_LITERAL(17, 185, 7), // "message"
QT_MOC_LITERAL(18, 193, 16), // "replayStateFound"
QT_MOC_LITERAL(19, 210, 14), // "ApiTraceState*"
QT_MOC_LITERAL(20, 225, 5), // "state"
QT_MOC_LITERAL(21, 231, 18), // "replayProfileFound"
QT_MOC_LITERAL(22, 250, 15), // "trace::Profile*"
QT_MOC_LITERAL(23, 266, 21), // "replayThumbnailsFound"
QT_MOC_LITERAL(24, 288, 9), // "ImageHash"
QT_MOC_LITERAL(25, 298, 10), // "thumbnails"
QT_MOC_LITERAL(26, 309, 11), // "replayError"
QT_MOC_LITERAL(27, 321, 3), // "msg"
QT_MOC_LITERAL(28, 325, 9), // "loadError"
QT_MOC_LITERAL(29, 335, 19), // "startedLoadingTrace"
QT_MOC_LITERAL(30, 355, 11), // "loadProgess"
QT_MOC_LITERAL(31, 367, 7), // "percent"
QT_MOC_LITERAL(32, 375, 20), // "finishedLoadingTrace"
QT_MOC_LITERAL(33, 396, 11), // "lookupState"
QT_MOC_LITERAL(34, 408, 14), // "showThumbnails"
QT_MOC_LITERAL(35, 423, 4), // "trim"
QT_MOC_LITERAL(36, 428, 12), // "showSettings"
QT_MOC_LITERAL(37, 441, 9), // "leakTrace"
QT_MOC_LITERAL(38, 451, 17), // "leakTraceFinished"
QT_MOC_LITERAL(39, 469, 16), // "showSurfacesMenu"
QT_MOC_LITERAL(40, 486, 3), // "pos"
QT_MOC_LITERAL(41, 490, 19), // "showSelectedSurface"
QT_MOC_LITERAL(42, 510, 19), // "saveSelectedSurface"
QT_MOC_LITERAL(43, 530, 16), // "exportBufferData"
QT_MOC_LITERAL(44, 547, 8), // "slotGoTo"
QT_MOC_LITERAL(45, 556, 10), // "slotJumpTo"
QT_MOC_LITERAL(46, 567, 12), // "createdTrace"
QT_MOC_LITERAL(47, 580, 4), // "path"
QT_MOC_LITERAL(48, 585, 10), // "traceError"
QT_MOC_LITERAL(49, 596, 11), // "createdTrim"
QT_MOC_LITERAL(50, 608, 9), // "trimError"
QT_MOC_LITERAL(51, 618, 10), // "slotSearch"
QT_MOC_LITERAL(52, 629, 14), // "slotSearchNext"
QT_MOC_LITERAL(53, 644, 3), // "str"
QT_MOC_LITERAL(54, 648, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(55, 668, 11), // "sensitivity"
QT_MOC_LITERAL(56, 680, 14), // "slotSearchPrev"
QT_MOC_LITERAL(57, 695, 9), // "fillState"
QT_MOC_LITERAL(58, 705, 11), // "nonDefaults"
QT_MOC_LITERAL(59, 717, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(60, 744, 8), // "editCall"
QT_MOC_LITERAL(61, 753, 17), // "slotStartedSaving"
QT_MOC_LITERAL(62, 771, 9), // "slotSaved"
QT_MOC_LITERAL(63, 781, 16), // "slotGoFrameStart"
QT_MOC_LITERAL(64, 798, 14), // "slotGoFrameEnd"
QT_MOC_LITERAL(65, 813, 16), // "slotTraceChanged"
QT_MOC_LITERAL(66, 830, 14), // "ApiTraceEvent*"
QT_MOC_LITERAL(67, 845, 5), // "event"
QT_MOC_LITERAL(68, 851, 17), // "slotRetraceErrors"
QT_MOC_LITERAL(69, 869, 20), // "QList<ApiTraceError>"
QT_MOC_LITERAL(70, 890, 6), // "errors"
QT_MOC_LITERAL(71, 897, 17), // "slotErrorSelected"
QT_MOC_LITERAL(72, 915, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(73, 932, 7), // "current"
QT_MOC_LITERAL(74, 940, 16), // "slotSearchResult"
QT_MOC_LITERAL(75, 957, 23), // "ApiTrace::SearchRequest"
QT_MOC_LITERAL(76, 981, 7), // "request"
QT_MOC_LITERAL(77, 989, 22), // "ApiTrace::SearchResult"
QT_MOC_LITERAL(78, 1012, 6), // "result"
QT_MOC_LITERAL(79, 1019, 13), // "ApiTraceCall*"
QT_MOC_LITERAL(80, 1033, 4), // "call"
QT_MOC_LITERAL(81, 1038, 19), // "slotFoundFrameStart"
QT_MOC_LITERAL(82, 1058, 14), // "ApiTraceFrame*"
QT_MOC_LITERAL(83, 1073, 5), // "frame"
QT_MOC_LITERAL(84, 1079, 17), // "slotFoundFrameEnd"
QT_MOC_LITERAL(85, 1097, 16), // "slotJumpToResult"
QT_MOC_LITERAL(86, 1114, 18) // "updateSurfacesView"

    },
    "MainWindow\0loadTrace\0\0fileName\0callNum\0"
    "setRemoteTarget\0host\0callItemSelected\0"
    "index\0callItemActivated\0createTrace\0"
    "openTrace\0saveTrace\0replayStart\0"
    "replayProfile\0replayStop\0replayFinished\0"
    "message\0replayStateFound\0ApiTraceState*\0"
    "state\0replayProfileFound\0trace::Profile*\0"
    "replayThumbnailsFound\0ImageHash\0"
    "thumbnails\0replayError\0msg\0loadError\0"
    "startedLoadingTrace\0loadProgess\0percent\0"
    "finishedLoadingTrace\0lookupState\0"
    "showThumbnails\0trim\0showSettings\0"
    "leakTrace\0leakTraceFinished\0"
    "showSurfacesMenu\0pos\0showSelectedSurface\0"
    "saveSelectedSurface\0exportBufferData\0"
    "slotGoTo\0slotJumpTo\0createdTrace\0path\0"
    "traceError\0createdTrim\0trimError\0"
    "slotSearch\0slotSearchNext\0str\0"
    "Qt::CaseSensitivity\0sensitivity\0"
    "slotSearchPrev\0fillState\0nonDefaults\0"
    "customContextMenuRequested\0editCall\0"
    "slotStartedSaving\0slotSaved\0"
    "slotGoFrameStart\0slotGoFrameEnd\0"
    "slotTraceChanged\0ApiTraceEvent*\0event\0"
    "slotRetraceErrors\0QList<ApiTraceError>\0"
    "errors\0slotErrorSelected\0QTreeWidgetItem*\0"
    "current\0slotSearchResult\0"
    "ApiTrace::SearchRequest\0request\0"
    "ApiTrace::SearchResult\0result\0"
    "ApiTraceCall*\0call\0slotFoundFrameStart\0"
    "ApiTraceFrame*\0frame\0slotFoundFrameEnd\0"
    "slotJumpToResult\0updateSurfacesView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  284,    2, 0x0a /* Public */,
       1,    1,  289,    2, 0x2a /* Public | MethodCloned */,
       5,    1,  292,    2, 0x0a /* Public */,
       7,    1,  295,    2, 0x08 /* Private */,
       9,    1,  298,    2, 0x08 /* Private */,
      10,    0,  301,    2, 0x08 /* Private */,
      11,    0,  302,    2, 0x08 /* Private */,
      12,    0,  303,    2, 0x08 /* Private */,
      13,    0,  304,    2, 0x08 /* Private */,
      14,    0,  305,    2, 0x08 /* Private */,
      15,    0,  306,    2, 0x08 /* Private */,
      16,    1,  307,    2, 0x08 /* Private */,
      18,    1,  310,    2, 0x08 /* Private */,
      21,    1,  313,    2, 0x08 /* Private */,
      23,    1,  316,    2, 0x08 /* Private */,
      26,    1,  319,    2, 0x08 /* Private */,
      28,    1,  322,    2, 0x08 /* Private */,
      29,    0,  325,    2, 0x08 /* Private */,
      30,    1,  326,    2, 0x08 /* Private */,
      32,    0,  329,    2, 0x08 /* Private */,
      33,    0,  330,    2, 0x08 /* Private */,
      34,    0,  331,    2, 0x08 /* Private */,
      35,    0,  332,    2, 0x08 /* Private */,
      36,    0,  333,    2, 0x08 /* Private */,
      37,    0,  334,    2, 0x08 /* Private */,
      38,    0,  335,    2, 0x08 /* Private */,
      39,    1,  336,    2, 0x08 /* Private */,
      41,    0,  339,    2, 0x08 /* Private */,
      42,    0,  340,    2, 0x08 /* Private */,
      43,    0,  341,    2, 0x08 /* Private */,
      44,    0,  342,    2, 0x08 /* Private */,
      45,    1,  343,    2, 0x08 /* Private */,
      46,    1,  346,    2, 0x08 /* Private */,
      48,    1,  349,    2, 0x08 /* Private */,
      49,    1,  352,    2, 0x08 /* Private */,
      50,    1,  355,    2, 0x08 /* Private */,
      51,    0,  358,    2, 0x08 /* Private */,
      52,    2,  359,    2, 0x08 /* Private */,
      56,    2,  364,    2, 0x08 /* Private */,
      57,    1,  369,    2, 0x08 /* Private */,
      59,    1,  372,    2, 0x08 /* Private */,
      60,    0,  375,    2, 0x08 /* Private */,
      61,    0,  376,    2, 0x08 /* Private */,
      62,    0,  377,    2, 0x08 /* Private */,
      63,    0,  378,    2, 0x08 /* Private */,
      64,    0,  379,    2, 0x08 /* Private */,
      65,    1,  380,    2, 0x08 /* Private */,
      68,    1,  383,    2, 0x08 /* Private */,
      71,    1,  386,    2, 0x08 /* Private */,
      74,    3,  389,    2, 0x08 /* Private */,
      81,    1,  396,    2, 0x08 /* Private */,
      84,    1,  399,    2, 0x08 /* Private */,
      85,    1,  402,    2, 0x08 /* Private */,
      86,    0,  405,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 54,   53,   55,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 54,   53,   55,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::QPoint,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void, 0x80000000 | 75, 0x80000000 | 77, 0x80000000 | 79,   76,   78,   80,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setRemoteTarget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->callItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->callItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->createTrace(); break;
        case 6: _t->openTrace(); break;
        case 7: _t->saveTrace(); break;
        case 8: _t->replayStart(); break;
        case 9: _t->replayProfile(); break;
        case 10: _t->replayStop(); break;
        case 11: _t->replayFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->replayStateFound((*reinterpret_cast< ApiTraceState*(*)>(_a[1]))); break;
        case 13: _t->replayProfileFound((*reinterpret_cast< trace::Profile*(*)>(_a[1]))); break;
        case 14: _t->replayThumbnailsFound((*reinterpret_cast< const ImageHash(*)>(_a[1]))); break;
        case 15: _t->replayError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->loadError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->startedLoadingTrace(); break;
        case 18: _t->loadProgess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->finishedLoadingTrace(); break;
        case 20: _t->lookupState(); break;
        case 21: _t->showThumbnails(); break;
        case 22: _t->trim(); break;
        case 23: _t->showSettings(); break;
        case 24: _t->leakTrace(); break;
        case 25: _t->leakTraceFinished(); break;
        case 26: _t->showSurfacesMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 27: _t->showSelectedSurface(); break;
        case 28: _t->saveSelectedSurface(); break;
        case 29: _t->exportBufferData(); break;
        case 30: _t->slotGoTo(); break;
        case 31: _t->slotJumpTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->createdTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->traceError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->createdTrim((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->trimError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->slotSearch(); break;
        case 37: _t->slotSearchNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 38: _t->slotSearchPrev((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 39: _t->fillState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 41: _t->editCall(); break;
        case 42: _t->slotStartedSaving(); break;
        case 43: _t->slotSaved(); break;
        case 44: _t->slotGoFrameStart(); break;
        case 45: _t->slotGoFrameEnd(); break;
        case 46: _t->slotTraceChanged((*reinterpret_cast< ApiTraceEvent*(*)>(_a[1]))); break;
        case 47: _t->slotRetraceErrors((*reinterpret_cast< const QList<ApiTraceError>(*)>(_a[1]))); break;
        case 48: _t->slotErrorSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 49: _t->slotSearchResult((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1])),(*reinterpret_cast< ApiTrace::SearchResult(*)>(_a[2])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[3]))); break;
        case 50: _t->slotFoundFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 51: _t->slotFoundFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 52: _t->slotJumpToResult((*reinterpret_cast< ApiTraceCall*(*)>(_a[1]))); break;
        case 53: _t->updateSurfacesView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceEvent* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
