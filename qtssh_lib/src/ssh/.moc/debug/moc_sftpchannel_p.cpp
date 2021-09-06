/****************************************************************************
** Meta object code from reading C++ file 'sftpchannel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtSsh/src/ssh/sftpchannel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sftpchannel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate_t qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QSsh::Internal::SftpChannelPr..."
QT_MOC_LITERAL(1, 35, 11), // "initialized"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "channelError"
QT_MOC_LITERAL(4, 61, 6), // "reason"
QT_MOC_LITERAL(5, 68, 6), // "closed"
QT_MOC_LITERAL(6, 75, 8), // "finished"
QT_MOC_LITERAL(7, 84, 15), // "QSsh::SftpJobId"
QT_MOC_LITERAL(8, 100, 3), // "job"
QT_MOC_LITERAL(9, 104, 5), // "error"
QT_MOC_LITERAL(10, 110, 13), // "dataAvailable"
QT_MOC_LITERAL(11, 124, 4), // "data"
QT_MOC_LITERAL(12, 129, 17), // "fileInfoAvailable"
QT_MOC_LITERAL(13, 147, 25), // "QList<QSsh::SftpFileInfo>"
QT_MOC_LITERAL(14, 173, 12) // "fileInfoList"

    },
    "QSsh::Internal::SftpChannelPrivate\0"
    "initialized\0\0channelError\0reason\0"
    "closed\0finished\0QSsh::SftpJobId\0job\0"
    "error\0dataAvailable\0data\0fileInfoAvailable\0"
    "QList<QSsh::SftpFileInfo>\0fileInfoList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSsh__Internal__SftpChannelPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    2,   54,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x26 /* Public | MethodCloned */,
      10,    2,   62,    2, 0x06 /* Public */,
      12,    2,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   11,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 13,    8,   14,

       0        // eod
};

void QSsh::Internal::SftpChannelPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SftpChannelPrivate *_t = static_cast<SftpChannelPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->channelError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closed(); break;
        case 3: _t->finished((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->finished((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1]))); break;
        case 5: _t->dataAvailable((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->fileInfoAvailable((*reinterpret_cast< QSsh::SftpJobId(*)>(_a[1])),(*reinterpret_cast< const QList<QSsh::SftpFileInfo>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SftpChannelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::initialized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SftpChannelPrivate::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::channelError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SftpChannelPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::closed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SftpChannelPrivate::*_t)(QSsh::SftpJobId , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SftpChannelPrivate::*_t)(QSsh::SftpJobId , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::dataAvailable)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SftpChannelPrivate::*_t)(QSsh::SftpJobId , const QList<QSsh::SftpFileInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SftpChannelPrivate::fileInfoAvailable)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QSsh::Internal::SftpChannelPrivate::staticMetaObject = {
    { &AbstractSshChannel::staticMetaObject, qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate.data,
      qt_meta_data_QSsh__Internal__SftpChannelPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QSsh::Internal::SftpChannelPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSsh::Internal::SftpChannelPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSsh__Internal__SftpChannelPrivate.stringdata0))
        return static_cast<void*>(this);
    return AbstractSshChannel::qt_metacast(_clname);
}

int QSsh::Internal::SftpChannelPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractSshChannel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QSsh::Internal::SftpChannelPrivate::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QSsh::Internal::SftpChannelPrivate::channelError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSsh::Internal::SftpChannelPrivate::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QSsh::Internal::SftpChannelPrivate::finished(QSsh::SftpJobId _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void QSsh::Internal::SftpChannelPrivate::dataAvailable(QSsh::SftpJobId _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSsh::Internal::SftpChannelPrivate::fileInfoAvailable(QSsh::SftpJobId _t1, const QList<QSsh::SftpFileInfo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
