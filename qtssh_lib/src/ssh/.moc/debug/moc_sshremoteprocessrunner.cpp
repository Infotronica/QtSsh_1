/****************************************************************************
** Meta object code from reading C++ file 'sshremoteprocessrunner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtSsh/src/ssh/sshremoteprocessrunner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshremoteprocessrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__SshRemoteProcessRunner_t qt_meta_stringdata_QSsh__SshRemoteProcessRunner = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QSsh::SshRemoteProcessRunner"
QT_MOC_LITERAL(1, 29, 15), // "connectionError"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "processStarted"
QT_MOC_LITERAL(4, 61, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(5, 85, 22), // "readyReadStandardError"
QT_MOC_LITERAL(6, 108, 13), // "processClosed"
QT_MOC_LITERAL(7, 122, 10) // "exitStatus"

    },
    "QSsh::SshRemoteProcessRunner\0"
    "connectionError\0\0processStarted\0"
    "readyReadStandardOutput\0readyReadStandardError\0"
    "processClosed\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__SshRemoteProcessRunner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void QSsh::SshRemoteProcessRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SshRemoteProcessRunner *_t = static_cast<SshRemoteProcessRunner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionError(); break;
        case 1: _t->processStarted(); break;
        case 2: _t->readyReadStandardOutput(); break;
        case 3: _t->readyReadStandardError(); break;
        case 4: _t->processClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshRemoteProcessRunner::connectionError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshRemoteProcessRunner::processStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshRemoteProcessRunner::readyReadStandardOutput)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshRemoteProcessRunner::readyReadStandardError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SshRemoteProcessRunner::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SshRemoteProcessRunner::processClosed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QSsh::SshRemoteProcessRunner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSsh__SshRemoteProcessRunner.data,
      qt_meta_data_QSsh__SshRemoteProcessRunner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::SshRemoteProcessRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::SshRemoteProcessRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__SshRemoteProcessRunner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSsh::SshRemoteProcessRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QSsh::SshRemoteProcessRunner::connectionError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSsh::SshRemoteProcessRunner::processStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QSsh::SshRemoteProcessRunner::readyReadStandardOutput()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QSsh::SshRemoteProcessRunner::readyReadStandardError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QSsh::SshRemoteProcessRunner::processClosed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
