/****************************************************************************
** Meta object code from reading C++ file 'ag_Map2D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_Map2D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_Map2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__Map2D_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__Map2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__Map2D_t qt_meta_stringdata_ag__Map2D = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ag::Map2D"
QT_MOC_LITERAL(1, 10, 14), // "startQueryMode"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "startPanMode"
QT_MOC_LITERAL(4, 39, 17), // "startZoomAreaMode"
QT_MOC_LITERAL(5, 57, 15), // "startSelectMode"
QT_MOC_LITERAL(6, 73, 12) // "resetMapView"

    },
    "ag::Map2D\0startQueryMode\0\0startPanMode\0"
    "startZoomAreaMode\0startSelectMode\0"
    "resetMapView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__Map2D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ag::Map2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Map2D *_t = static_cast<Map2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startQueryMode(); break;
        case 1: _t->startPanMode(); break;
        case 2: _t->startZoomAreaMode(); break;
        case 3: _t->startSelectMode(); break;
        case 4: _t->resetMapView(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ag::Map2D::staticMetaObject = {
    { &Map::staticMetaObject, qt_meta_stringdata_ag__Map2D.data,
      qt_meta_data_ag__Map2D,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::Map2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::Map2D::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__Map2D.stringdata0))
        return static_cast<void*>(this);
    return Map::qt_metacast(_clname);
}

int ag::Map2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Map::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
