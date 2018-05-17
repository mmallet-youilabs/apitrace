/****************************************************************************
** Meta object code from reading C++ file 'pixelwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gui/pixelwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pixelwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PixelWidget_t {
    QByteArrayData data[19];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PixelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PixelWidget_t qt_meta_stringdata_PixelWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PixelWidget"
QT_MOC_LITERAL(1, 12, 11), // "zoomChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "mousePosition"
QT_MOC_LITERAL(4, 39, 1), // "x"
QT_MOC_LITERAL(5, 41, 1), // "y"
QT_MOC_LITERAL(6, 43, 12), // "gridGeometry"
QT_MOC_LITERAL(7, 56, 4), // "rect"
QT_MOC_LITERAL(8, 61, 7), // "setZoom"
QT_MOC_LITERAL(9, 69, 4), // "zoom"
QT_MOC_LITERAL(10, 74, 11), // "setGridSize"
QT_MOC_LITERAL(11, 86, 8), // "gridSize"
QT_MOC_LITERAL(12, 95, 10), // "toggleGrid"
QT_MOC_LITERAL(13, 106, 15), // "copyToClipboard"
QT_MOC_LITERAL(14, 122, 10), // "saveToFile"
QT_MOC_LITERAL(15, 133, 16), // "increaseGridSize"
QT_MOC_LITERAL(16, 150, 16), // "decreaseGridSize"
QT_MOC_LITERAL(17, 167, 12), // "increaseZoom"
QT_MOC_LITERAL(18, 180, 12) // "decreaseZoom"

    },
    "PixelWidget\0zoomChanged\0\0mousePosition\0"
    "x\0y\0gridGeometry\0rect\0setZoom\0zoom\0"
    "setGridSize\0gridSize\0toggleGrid\0"
    "copyToClipboard\0saveToFile\0increaseGridSize\0"
    "decreaseGridSize\0increaseZoom\0"
    "decreaseZoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PixelWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    2,   77,    2, 0x06 /* Public */,
       6,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x0a /* Public */,
      17,    0,   96,    2, 0x0a /* Public */,
      18,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QRect,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PixelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PixelWidget *_t = static_cast<PixelWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mousePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->gridGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->setZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setGridSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleGrid(); break;
        case 6: _t->copyToClipboard(); break;
        case 7: _t->saveToFile(); break;
        case 8: _t->increaseGridSize(); break;
        case 9: _t->decreaseGridSize(); break;
        case 10: _t->increaseZoom(); break;
        case 11: _t->decreaseZoom(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PixelWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::zoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PixelWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::mousePosition)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PixelWidget::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::gridGeometry)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PixelWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PixelWidget.data,
      qt_meta_data_PixelWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PixelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PixelWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PixelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void PixelWidget::zoomChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PixelWidget::mousePosition(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PixelWidget::gridGeometry(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
