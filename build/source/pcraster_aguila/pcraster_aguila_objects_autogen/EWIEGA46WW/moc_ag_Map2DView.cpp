/****************************************************************************
** Meta object code from reading C++ file 'ag_Map2DView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_Map2DView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_Map2DView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__Map2DView_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__Map2DView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__Map2DView_t qt_meta_stringdata_ag__Map2DView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ag::Map2DView"
QT_MOC_LITERAL(1, 14, 5), // "dirty"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "area"
QT_MOC_LITERAL(4, 26, 14), // "startQueryMode"
QT_MOC_LITERAL(5, 41, 12), // "startPanMode"
QT_MOC_LITERAL(6, 54, 17), // "startZoomAreaMode"
QT_MOC_LITERAL(7, 72, 15), // "startSelectMode"
QT_MOC_LITERAL(8, 88, 12) // "resetMapView"

    },
    "ag::Map2DView\0dirty\0\0area\0startQueryMode\0"
    "startPanMode\0startZoomAreaMode\0"
    "startSelectMode\0resetMapView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__Map2DView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ag::Map2DView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Map2DView *_t = static_cast<Map2DView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->startQueryMode(); break;
        case 2: _t->startPanMode(); break;
        case 3: _t->startZoomAreaMode(); break;
        case 4: _t->startSelectMode(); break;
        case 5: _t->resetMapView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Map2DView::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Map2DView::dirty)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ag::Map2DView::staticMetaObject = {
    { &ag::BufferedVisualisation::staticMetaObject, qt_meta_stringdata_ag__Map2DView.data,
      qt_meta_data_ag__Map2DView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::Map2DView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::Map2DView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__Map2DView.stringdata0))
        return static_cast<void*>(this);
    return ag::BufferedVisualisation::qt_metacast(_clname);
}

int ag::Map2DView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ag::BufferedVisualisation::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ag::Map2DView::dirty(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
