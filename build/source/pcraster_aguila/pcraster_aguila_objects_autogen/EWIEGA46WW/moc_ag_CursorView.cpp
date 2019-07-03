/****************************************************************************
** Meta object code from reading C++ file 'ag_CursorView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../source/pcraster_aguila/ag_CursorView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ag_CursorView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ag__CursorView_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ag__CursorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ag__CursorView_t qt_meta_stringdata_ag__CursorView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ag::CursorView"
QT_MOC_LITERAL(1, 15, 16), // "updateCoordinate"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "const dal::Dimension*"
QT_MOC_LITERAL(4, 55, 9), // "dimension"
QT_MOC_LITERAL(5, 65, 6), // "size_t"
QT_MOC_LITERAL(6, 72, 5) // "index"

    },
    "ag::CursorView\0updateCoordinate\0\0"
    "const dal::Dimension*\0dimension\0size_t\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ag__CursorView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void ag::CursorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CursorView *_t = static_cast<CursorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCoordinate((*reinterpret_cast< const dal::Dimension*(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ag::CursorView::staticMetaObject = {
    { &Visualisation<>::staticMetaObject, qt_meta_stringdata_ag__CursorView.data,
      qt_meta_data_ag__CursorView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ag::CursorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ag::CursorView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ag__CursorView.stringdata0))
        return static_cast<void*>(this);
    return Visualisation<>::qt_metacast(_clname);
}

int ag::CursorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Visualisation<>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
