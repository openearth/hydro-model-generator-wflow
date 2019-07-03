/****************************************************************************
** Meta object code from reading C++ file 'ag_AnimationControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_AnimationControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_AnimationControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__AnimationControl_t {
    QByteArrayData data[14];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__AnimationControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__AnimationControl_t qt_meta_stringdata_ag__AnimationControl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ag::AnimationControl"
QT_MOC_LITERAL(1, 21, 5), // "start"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "pause"
QT_MOC_LITERAL(4, 34, 7), // "toBegin"
QT_MOC_LITERAL(5, 42, 5), // "toEnd"
QT_MOC_LITERAL(6, 48, 9), // "backwards"
QT_MOC_LITERAL(7, 58, 9), // "forewards"
QT_MOC_LITERAL(8, 68, 4), // "loop"
QT_MOC_LITERAL(9, 73, 7), // "setting"
QT_MOC_LITERAL(10, 81, 15), // "intervalChanged"
QT_MOC_LITERAL(11, 97, 8), // "interval"
QT_MOC_LITERAL(12, 106, 15), // "updateInterface"
QT_MOC_LITERAL(13, 122, 15) // "timeStepChanged"

    },
    "ag::AnimationControl\0start\0\0pause\0"
    "toBegin\0toEnd\0backwards\0forewards\0"
    "loop\0setting\0intervalChanged\0interval\0"
    "updateInterface\0timeStepChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__AnimationControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ag::AnimationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnimationControl *_t = static_cast<AnimationControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->pause(); break;
        case 2: _t->toBegin(); break;
        case 3: _t->toEnd(); break;
        case 4: _t->backwards(); break;
        case 5: _t->forewards(); break;
        case 6: _t->loop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->intervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateInterface(); break;
        case 9: _t->timeStepChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ag::AnimationControl::staticMetaObject = {
    { &ag::VisualisationDialog<DataObject*,AnimationControl>::staticMetaObject, qt_meta_stringdata_ag__AnimationControl.data,
      qt_meta_data_ag__AnimationControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::AnimationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::AnimationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__AnimationControl.stringdata0))
        return static_cast<void*>(this);
    return ag::VisualisationDialog<DataObject*,AnimationControl>::qt_metacast(_clname);
}

int ag::AnimationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ag::VisualisationDialog<DataObject*,AnimationControl>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
