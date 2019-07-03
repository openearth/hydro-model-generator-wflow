/****************************************************************************
** Meta object code from reading C++ file 'ag_DataObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_DataObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_DataObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__DataObject_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__DataObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__DataObject_t qt_meta_stringdata_ag__DataObject = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ag::DataObject"
QT_MOC_LITERAL(1, 15, 11), // "setTimeStep"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "size_t"
QT_MOC_LITERAL(4, 35, 4), // "time"
QT_MOC_LITERAL(5, 40, 11), // "setQuantile"
QT_MOC_LITERAL(6, 52, 8), // "quantile"
QT_MOC_LITERAL(7, 61, 6), // "notify"
QT_MOC_LITERAL(8, 68, 16) // "backgroundColour"

    },
    "ag::DataObject\0setTimeStep\0\0size_t\0"
    "time\0setQuantile\0quantile\0notify\0"
    "backgroundColour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__DataObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void,

       0        // eod
};

void ag::DataObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataObject *_t = static_cast<DataObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTimeStep((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->setQuantile((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setQuantile((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->backgroundColour(); break;
        default: ;
        }
    }
}

const QMetaObject ag::DataObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ag__DataObject.data,
      qt_meta_data_ag__DataObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::DataObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::DataObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__DataObject.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ag::VisSubject"))
        return static_cast< ag::VisSubject*>(this);
    return QObject::qt_metacast(_clname);
}

int ag::DataObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
