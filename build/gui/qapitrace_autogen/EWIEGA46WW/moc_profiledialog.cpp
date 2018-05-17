/****************************************************************************
** Meta object code from reading C++ file 'profiledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/profiledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profiledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProfileDialog_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProfileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProfileDialog_t qt_meta_stringdata_ProfileDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProfileDialog"
QT_MOC_LITERAL(1, 14, 10), // "jumpToCall"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "call"
QT_MOC_LITERAL(4, 31, 18), // "tableDoubleClicked"
QT_MOC_LITERAL(5, 50, 5), // "index"
QT_MOC_LITERAL(6, 56, 21), // "graphSelectionChanged"
QT_MOC_LITERAL(7, 78, 14), // "SelectionState"
QT_MOC_LITERAL(8, 93, 5) // "state"

    },
    "ProfileDialog\0jumpToCall\0\0call\0"
    "tableDoubleClicked\0index\0graphSelectionChanged\0"
    "SelectionState\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProfileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ProfileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProfileDialog *_t = static_cast<ProfileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jumpToCall((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->tableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->graphSelectionChanged((*reinterpret_cast< SelectionState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProfileDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProfileDialog::jumpToCall)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProfileDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ProfileDialog.data,
      qt_meta_data_ProfileDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProfileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProfileDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_ProfileDialog"))
        return static_cast< Ui_ProfileDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProfileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ProfileDialog::jumpToCall(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
