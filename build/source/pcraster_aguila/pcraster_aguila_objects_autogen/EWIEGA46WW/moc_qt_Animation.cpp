/****************************************************************************
** Meta object code from reading C++ file 'qt_Animation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/qt_Animation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_Animation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qt__Animation_t {
    QByteArrayData data[12];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt__Animation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt__Animation_t qt_meta_stringdata_qt__Animation = {
    {
QT_MOC_LITERAL(0, 0, 13), // "qt::Animation"
QT_MOC_LITERAL(1, 14, 7), // "process"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "size_t"
QT_MOC_LITERAL(4, 30, 1), // "i"
QT_MOC_LITERAL(5, 32, 7), // "stopped"
QT_MOC_LITERAL(6, 40, 7), // "started"
QT_MOC_LITERAL(7, 48, 6), // "paused"
QT_MOC_LITERAL(8, 55, 8), // "timedOut"
QT_MOC_LITERAL(9, 64, 5), // "start"
QT_MOC_LITERAL(10, 70, 4), // "stop"
QT_MOC_LITERAL(11, 75, 5) // "pause"

    },
    "qt::Animation\0process\0\0size_t\0i\0stopped\0"
    "started\0paused\0timedOut\0start\0stop\0"
    "pause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt__Animation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qt::Animation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Animation *_t = static_cast<Animation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->process((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 1: _t->stopped(); break;
        case 2: _t->started(); break;
        case 3: _t->paused(); break;
        case 4: _t->timedOut(); break;
        case 5: _t->start(); break;
        case 6: _t->stop(); break;
        case 7: _t->pause(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Animation::*_t)(size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Animation::process)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Animation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Animation::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Animation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Animation::started)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Animation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Animation::paused)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject qt::Animation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qt__Animation.data,
      qt_meta_data_qt__Animation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qt::Animation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt::Animation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt__Animation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qt::Animation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qt::Animation::process(size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qt::Animation::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qt::Animation::started()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qt::Animation::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
