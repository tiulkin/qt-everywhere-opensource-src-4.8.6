/****************************************************************************
** Meta object code from reading C++ file 'bytearrayprototype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bytearrayprototype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bytearrayprototype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ByteArrayPrototype[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   20,   19,   19, 0x0a,
      43,   37,   32,   19, 0x0a,
      77,   73,   62,   19, 0x0a,
      95,   87,   62,   19, 0x0a,
     112,  108,   62,   19, 0x2a,
     134,   87,  121,   19, 0x0a,
     150,   73,   62,   19, 0x0a,
     161,   19,   62,   19, 0x0a,
     174,   19,   62,   19, 0x0a,
     185,   19,   62,   19, 0x0a,
     195,   19,   62,   19, 0x0a,
     205,   19,   62,   19, 0x0a,
     215,  108,   19,   19, 0x0a,
     237,   19,  229,   19, 0x0a,
     254,   19,  121,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ByteArrayPrototype[] = {
    "ByteArrayPrototype\0\0n\0chop(int)\0bool\0"
    "other\0equals(QByteArray)\0QByteArray\0"
    "len\0left(int)\0pos,len\0mid(int,int)\0"
    "pos\0mid(int)\0QScriptValue\0remove(int,int)\0"
    "right(int)\0simplified()\0toBase64()\0"
    "toLower()\0toUpper()\0trimmed()\0"
    "truncate(int)\0QString\0toLatin1String()\0"
    "valueOf()\0"
};

void ByteArrayPrototype::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ByteArrayPrototype *_t = static_cast<ByteArrayPrototype *>(_o);
        switch (_id) {
        case 0: _t->chop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->equals((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QByteArray _r = _t->left((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 3: { QByteArray _r = _t->mid((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 4: { QByteArray _r = _t->mid((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 5: { QScriptValue _r = _t->remove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 6: { QByteArray _r = _t->right((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: { QByteArray _r = _t->simplified();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 8: { QByteArray _r = _t->toBase64();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: { QByteArray _r = _t->toLower();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->toUpper();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { QByteArray _r = _t->trimmed();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 12: _t->truncate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { QString _r = _t->toLatin1String();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QScriptValue _r = _t->valueOf();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ByteArrayPrototype::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ByteArrayPrototype::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ByteArrayPrototype,
      qt_meta_data_ByteArrayPrototype, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ByteArrayPrototype::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ByteArrayPrototype::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ByteArrayPrototype::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ByteArrayPrototype))
        return static_cast<void*>(const_cast< ByteArrayPrototype*>(this));
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(const_cast< ByteArrayPrototype*>(this));
    return QObject::qt_metacast(_clname);
}

int ByteArrayPrototype::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
