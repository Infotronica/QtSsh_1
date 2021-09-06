/****************************************************************************
** Meta object code from reading C++ file 'sshtcpiptunnel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtSsh/src/ssh/sshtcpiptunnel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshtcpiptunnel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate_t qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QSsh::Internal::SshTcpIpTunne..."
QT_MOC_LITERAL(1, 38, 9), // "readyRead"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "error"
QT_MOC_LITERAL(4, 55, 6), // "reason"
QT_MOC_LITERAL(5, 62, 6) // "closed"

    },
    "QSsh::Internal::SshTcpIpTunnelPrivate\0"
    "readyRead\0\0error\0reason\0closed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SshTcpIpTunnelPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void QSsh::Internal::SshTcpIpTunnelPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshTcpIpTunnelPrivate *_t = static_cast<SshTcpIpTunnelPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshTcpIpTunnelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpTunnelPrivate::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshTcpIpTunnelPrivate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpTunnelPrivate::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshTcpIpTunnelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshTcpIpTunnelPrivate::closed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SshTcpIpTunnelPrivate::staticMetaObject = {
    { &AbstractSshChannel::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate.data,
      qt_meta_data_QSsh__Internal__SshTcpIpTunnelPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::Internal::SshTcpIpTunnelPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SshTcpIpTunnelPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SshTcpIpTunnelPrivate.stringdata0))
        return static_cast<void*>(this);
    return AbstractSshChannel::qt_metacast(_clname);
}

int QSsh::Internal::SshTcpIpTunnelPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSshChannel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QSsh::Internal::SshTcpIpTunnelPrivate::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSsh::Internal::SshTcpIpTunnelPrivate::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSsh::Internal::SshTcpIpTunnelPrivate::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
