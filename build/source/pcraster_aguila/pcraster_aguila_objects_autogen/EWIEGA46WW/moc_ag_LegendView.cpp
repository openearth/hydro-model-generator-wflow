/****************************************************************************
** Meta object code from reading C++ file 'ag_LegendView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_LegendView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_LegendView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__LegendView_t {
    QByteArrayData data[10];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__LegendView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__LegendView_t qt_meta_stringdata_ag__LegendView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ag::LegendView"
QT_MOC_LITERAL(1, 15, 32), // "handleRequestedCustomContextMenu"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "pos"
QT_MOC_LITERAL(4, 53, 21), // "editGeneralProperties"
QT_MOC_LITERAL(5, 75, 18), // "editDrawProperties"
QT_MOC_LITERAL(6, 94, 13), // "saveGraphData"
QT_MOC_LITERAL(7, 108, 7), // "showMap"
QT_MOC_LITERAL(8, 116, 14), // "showTimeSeries"
QT_MOC_LITERAL(9, 131, 29) // "showCumulativeProbabilityPlot"

    },
    "ag::LegendView\0handleRequestedCustomContextMenu\0"
    "\0pos\0editGeneralProperties\0"
    "editDrawProperties\0saveGraphData\0"
    "showMap\0showTimeSeries\0"
    "showCumulativeProbabilityPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__LegendView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ag::LegendView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LegendView *_t = static_cast<LegendView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleRequestedCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->editGeneralProperties(); break;
        case 2: _t->editDrawProperties(); break;
        case 3: _t->saveGraphData(); break;
        case 4: _t->showMap(); break;
        case 5: _t->showTimeSeries(); break;
        case 6: _t->showCumulativeProbabilityPlot(); break;
        default: ;
        }
    }
}

const QMetaObject ag::LegendView::staticMetaObject = {
    { &TableVisualisation::staticMetaObject, qt_meta_stringdata_ag__LegendView.data,
      qt_meta_data_ag__LegendView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::LegendView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::LegendView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__LegendView.stringdata0))
        return static_cast<void*>(this);
    return TableVisualisation::qt_metacast(_clname);
}

int ag::LegendView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableVisualisation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
