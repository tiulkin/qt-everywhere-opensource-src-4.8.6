/****************************************************************************
** Meta object code from reading C++ file 'sourcewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../sourcewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sourcewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SourceWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   14,   13,   13, 0x0a,
      43,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SourceWidget[] = {
    "SourceWidget\0\0mimetype\0createData(QString)\0"
    "startDrag()\0"
};

void SourceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SourceWidget *_t = static_cast<SourceWidget *>(_o);
        switch (_id) {
        case 0: _t->createData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->startDrag(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SourceWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SourceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SourceWidget,
      qt_meta_data_SourceWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SourceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SourceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SourceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SourceWidget))
        return static_cast<void*>(const_cast< SourceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SourceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
