#configuration
CONFIG +=  shared def_files_disabled exceptions no_mocdepend release stl qt_no_framework
QT_ARCH = x86_64
QT_EDITION = OpenSource
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config qt3support accessibility shared reduce_exports ipv6 clock-gettime clock-monotonic mremap getaddrinfo ipv6ifname getifaddrs inotify png system-freetype system-zlib nis iconv openssl xshape xsync xrender mitshm fontconfig xkb concurrent xmlpatterns multimedia audio-backend svg script scripttools declarative release

#versioning
QT_VERSION = 4.8.6
QT_MAJOR_VERSION = 4
QT_MINOR_VERSION = 8
QT_PATCH_VERSION = 6

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 
QT_NAMESPACE_MAC_CRC = 

QMAKE_RPATHDIR += "/usr/local/Trolltech/Qt-4.8.6/lib"
QT_GCC_MAJOR_VERSION = 4
QT_GCC_MINOR_VERSION = 8
QT_GCC_PATCH_VERSION = 2
