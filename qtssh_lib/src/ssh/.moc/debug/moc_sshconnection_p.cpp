/****************************************************************************
** Meta object code from reading C++ file 'sshconnection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtSsh/src/ssh/sshconnection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshconnection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate_t qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QSsh::Internal::SshConnection..."
QT_MOC_LITERAL(1, 37, 9), // "connected"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "disconnected"
QT_MOC_LITERAL(4, 61, 13), // "dataAvailable"
QT_MOC_LITERAL(5, 75, 7), // "message"
QT_MOC_LITERAL(6, 83, 5), // "error"
QT_MOC_LITERAL(7, 89, 14) // "QSsh::SshError"

    },
    "QSsh::Internal::SshConnectionPrivate\0"
    "connected\0\0disconnected\0dataAvailable\0"
    "message\0error\0QSsh::SshError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SshConnectionPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void QSsh::Internal::SshConnectionPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshConnectionPrivate *_t = static_cast<SshConnectionPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->dataAvailable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< QSsh::SshError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshConnectionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshConnectionPrivate::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshConnectionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshConnectionPrivate::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshConnectionPrivate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshConnectionPrivate::dataAvailable)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SshConnectionPrivate::*_t)(QSsh::SshError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshConnectionPrivate::error)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SshConnectionPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate.data,
      qt_meta_data_QSsh__Internal__SshConnectionPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::Internal::SshConnectionPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SshConnectionPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SshConnectionPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSsh::Internal::SshConnectionPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QSsh::Internal::SshConnectionPrivate::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSsh::Internal::SshConnectionPrivate::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSsh::Internal::SshConnectionPrivate::dataAvailable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSsh::Internal::SshConnectionPrivate::error(QSsh::SshError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
