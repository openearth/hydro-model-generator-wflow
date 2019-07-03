/****************************************************************************
** Meta object code from reading C++ file 'ag_PlotVisualisation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_PlotVisualisation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_PlotVisualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__PlotVisualisation_t {
    QByteArrayData data[9];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__PlotVisualisation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__PlotVisualisation_t qt_meta_stringdata_ag__PlotVisualisation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ag::PlotVisualisation"
QT_MOC_LITERAL(1, 22, 8), // "selected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "point"
QT_MOC_LITERAL(4, 38, 4), // "rect"
QT_MOC_LITERAL(5, 43, 16), // "QVector<QPointF>"
QT_MOC_LITERAL(6, 60, 5), // "array"
QT_MOC_LITERAL(7, 66, 8), // "appended"
QT_MOC_LITERAL(8, 75, 5) // "moved"

    },
    "ag::PlotVisualisation\0selected\0\0point\0"
    "rect\0QVector<QPointF>\0array\0appended\0"
    "moved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__PlotVisualisation[] = {

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
       1,    1,   39,    2, 0x09 /* Protected */,
       1,    1,   42,    2, 0x09 /* Protected */,
       1,    1,   45,    2, 0x09 /* Protected */,
       7,    1,   48,    2, 0x09 /* Protected */,
       8,    1,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QRectF,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,

       0        // eod
};

void ag::PlotVisualisation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotVisualisation *_t = static_cast<PlotVisualisation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->selected((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1]))); break;
        case 3: _t->appended((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->moved((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        }
    }
}

const QMetaObject ag::PlotVisualisation::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_ag__PlotVisualisation.data,
      qt_meta_data_ag__PlotVisualisation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::PlotVisualisation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::PlotVisualisation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__PlotVisualisation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ag::IVisualisation"))
        return static_cast< ag::IVisualisation*>(this);
    return QwtPlot::qt_metacast(_clname);
}

int ag::PlotVisualisation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
