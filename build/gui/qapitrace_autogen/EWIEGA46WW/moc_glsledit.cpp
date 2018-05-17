/****************************************************************************
** Meta object code from reading C++ file 'glsledit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/glsledit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glsledit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GLSLEdit_t {
    QByteArrayData data[25];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLSLEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLSLEdit_t qt_meta_stringdata_GLSLEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLSLEdit"
QT_MOC_LITERAL(1, 9, 13), // "updateSidebar"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "mark"
QT_MOC_LITERAL(4, 29, 3), // "str"
QT_MOC_LITERAL(5, 33, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(6, 53, 4), // "sens"
QT_MOC_LITERAL(7, 58, 26), // "setBracketsMatchingEnabled"
QT_MOC_LITERAL(8, 85, 6), // "enable"
QT_MOC_LITERAL(9, 92, 21), // "setCodeFoldingEnabled"
QT_MOC_LITERAL(10, 114, 21), // "setLineNumbersVisible"
QT_MOC_LITERAL(11, 136, 7), // "visible"
QT_MOC_LITERAL(12, 144, 18), // "setTextWrapEnabled"
QT_MOC_LITERAL(13, 163, 4), // "fold"
QT_MOC_LITERAL(14, 168, 4), // "line"
QT_MOC_LITERAL(15, 173, 6), // "unfold"
QT_MOC_LITERAL(16, 180, 10), // "toggleFold"
QT_MOC_LITERAL(17, 191, 6), // "indent"
QT_MOC_LITERAL(18, 198, 12), // "updateCursor"
QT_MOC_LITERAL(19, 211, 4), // "rect"
QT_MOC_LITERAL(20, 216, 1), // "d"
QT_MOC_LITERAL(21, 218, 23), // "bracketsMatchingEnabled"
QT_MOC_LITERAL(22, 242, 18), // "codeFoldingEnabled"
QT_MOC_LITERAL(23, 261, 18), // "lineNumbersVisible"
QT_MOC_LITERAL(24, 280, 15) // "textWrapEnabled"

    },
    "GLSLEdit\0updateSidebar\0\0mark\0str\0"
    "Qt::CaseSensitivity\0sens\0"
    "setBracketsMatchingEnabled\0enable\0"
    "setCodeFoldingEnabled\0setLineNumbersVisible\0"
    "visible\0setTextWrapEnabled\0fold\0line\0"
    "unfold\0toggleFold\0indent\0updateCursor\0"
    "rect\0d\0bracketsMatchingEnabled\0"
    "codeFoldingEnabled\0lineNumbersVisible\0"
    "textWrapEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLSLEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    2,   80,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x2a /* Public | MethodCloned */,
       7,    1,   88,    2, 0x0a /* Public */,
       9,    1,   91,    2, 0x0a /* Public */,
      10,    1,   94,    2, 0x0a /* Public */,
      12,    1,   97,    2, 0x0a /* Public */,
      13,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      16,    1,  106,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x08 /* Private */,
       1,    2,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect, QMetaType::Int,   19,   20,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::Bool, 0x00095103,
      24, QMetaType::Bool, 0x00095103,

       0        // eod
};

void GLSLEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLSLEdit *_t = static_cast<GLSLEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSidebar(); break;
        case 1: _t->mark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 2: _t->mark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setBracketsMatchingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setCodeFoldingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setLineNumbersVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setTextWrapEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->unfold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleFold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->indent(); break;
        case 11: _t->updateCursor(); break;
        case 12: _t->updateSidebar((*reinterpret_cast< const QRect(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GLSLEdit *_t = static_cast<GLSLEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBracketsMatchingEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isCodeFoldingEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isLineNumbersVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isTextWrapEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GLSLEdit *_t = static_cast<GLSLEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBracketsMatchingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCodeFoldingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setLineNumbersVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTextWrapEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GLSLEdit::staticMetaObject = {
    { &QPlainTextEdit::staticMetaObject, qt_meta_stringdata_GLSLEdit.data,
      qt_meta_data_GLSLEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GLSLEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLSLEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GLSLEdit.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int GLSLEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
