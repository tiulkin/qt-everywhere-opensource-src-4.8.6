/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 4.8.6
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // /root/qt-everywhere-opensource-src-4.8.6/examples/tools/treemodelcompleter/resources/treemodel.txt
  0x0,0x0,0x0,0x47,
  0x0,
  0x0,0x1,0x2e,0x78,0x9c,0xb,0x48,0x2c,0x4a,0xcd,0x2b,0x31,0xe4,0x52,0x0,0x2,
  0xe7,0x8c,0xcc,0x9c,0x14,0x8,0x13,0x4,0xdc,0x8b,0x12,0xf3,0x52,0x70,0x8a,0x19,
  0x61,0x11,0x33,0x86,0x8b,0xc1,0xc5,0xd1,0xd,0xc1,0xa9,0xd7,0x90,0xb0,0x5e,0x6c,
  0xe,0x80,0xda,0xcb,0x15,0x0,0xf6,0x87,0x11,0x31,0xfe,0xc0,0xd4,0x4d,0xac,0x8f,
  0xb9,0x0,0x51,0x32,0x4c,0x6b,
  
};

static const unsigned char qt_resource_name[] = {
  // resources
  0x0,0x9,
  0xa,0x6c,0x78,0x43,
  0x0,0x72,
  0x0,0x65,0x0,0x73,0x0,0x6f,0x0,0x75,0x0,0x72,0x0,0x63,0x0,0x65,0x0,0x73,
    // treemodel.txt
  0x0,0xd,
  0xd,0xa8,0xd2,0xb4,
  0x0,0x74,
  0x0,0x72,0x0,0x65,0x0,0x65,0x0,0x6d,0x0,0x6f,0x0,0x64,0x0,0x65,0x0,0x6c,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/resources
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
  // :/resources/treemodel.txt
  0x0,0x0,0x0,0x18,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_treemodelcompleter)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_treemodelcompleter))

int QT_MANGLE_NAMESPACE(qCleanupResources_treemodelcompleter)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_treemodelcompleter))

