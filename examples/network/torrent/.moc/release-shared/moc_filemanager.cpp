/****************************************************************************
** Meta object code from reading C++ file 'filemanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../filemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   13,   12,   12, 0x05,
      72,   12,   12,   12, 0x05,
      88,   80,   12,   12, 0x05,
     114,   12,   12,   12, 0x05,
     153,  133,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     177,   12,   12,   12, 0x0a,
     217,  206,  201,   12, 0x08,
     240,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FileManager[] = {
    "FileManager\0\0id,pieceIndex,offset,data\0"
    "dataRead(int,int,int,QByteArray)\0"
    "error()\0percent\0verificationProgress(int)\0"
    "verificationDone()\0pieceIndex,verified\0"
    "pieceVerified(int,bool)\0startDataVerification()\0"
    "bool\0pieceIndex\0verifySinglePiece(int)\0"
    "wakeUp()\0"
};

void FileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileManager *_t = static_cast<FileManager *>(_o);
        switch (_id) {
        case 0: _t->dataRead((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 1: _t->error(); break;
        case 2: _t->verificationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->verificationDone(); break;
        case 4: _t->pieceVerified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->startDataVerification(); break;
        case 6: { bool _r = _t->verifySinglePiece((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->wakeUp(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileManager::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FileManager,
      qt_meta_data_FileManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileManager))
        return static_cast<void*>(const_cast< FileManager*>(this));
    return QThread::qt_metacast(_clname);
}

int FileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FileManager::dataRead(int _t1, int _t2, int _t3, const QByteArray & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileManager::error()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FileManager::verificationProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileManager::verificationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void FileManager::pieceVerified(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
