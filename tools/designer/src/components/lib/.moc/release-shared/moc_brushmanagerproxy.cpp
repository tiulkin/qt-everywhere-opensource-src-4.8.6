/****************************************************************************
** Meta object code from reading C++ file 'brushmanagerproxy.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../formeditor/brushmanagerproxy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brushmanagerproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qdesigner_internal__BrushManagerProxy[] = {

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
      41,   39,   38,   38, 0x08,
      73,   68,   38,   38, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_qdesigner_internal__BrushManagerProxy[] = {
    "qdesigner_internal::BrushManagerProxy\0"
    "\0,\0brushAdded(QString,QBrush)\0name\0"
    "brushRemoved(QString)\0"
};

void qdesigner_internal::BrushManagerProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BrushManagerProxy *_t = static_cast<BrushManagerProxy *>(_o);
        switch (_id) {
        case 0: _t->d_func()->brushAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 1: _t->d_func()->brushRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qdesigner_internal::BrushManagerProxy::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qdesigner_internal::BrushManagerProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__BrushManagerProxy,
      qt_meta_data_qdesigner_internal__BrushManagerProxy, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qdesigner_internal::BrushManagerProxy::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qdesigner_internal::BrushManagerProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qdesigner_internal::BrushManagerProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__BrushManagerProxy))
        return static_cast<void*>(const_cast< BrushManagerProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::BrushManagerProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
