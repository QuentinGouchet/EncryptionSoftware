/****************************************************************************
** Meta object code from reading C++ file 'cipher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cipher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cipher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cipher_t {
    QByteArrayData data[7];
    char stringdata[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cipher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cipher_t qt_meta_stringdata_Cipher = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Cipher"
QT_MOC_LITERAL(1, 7, 10), // "computeRSA"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "computeElGamal"
QT_MOC_LITERAL(4, 34, 12), // "computeRabin"
QT_MOC_LITERAL(5, 47, 14), // "computeRSAOAEP"
QT_MOC_LITERAL(6, 62, 10) // "computeAES"

    },
    "Cipher\0computeRSA\0\0computeElGamal\0"
    "computeRabin\0computeRSAOAEP\0computeAES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cipher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cipher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cipher *_t = static_cast<Cipher *>(_o);
        switch (_id) {
        case 0: _t->computeRSA(); break;
        case 1: _t->computeElGamal(); break;
        case 2: _t->computeRabin(); break;
        case 3: _t->computeRSAOAEP(); break;
        case 4: _t->computeAES(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Cipher::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Cipher.data,
      qt_meta_data_Cipher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cipher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cipher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cipher.stringdata))
        return static_cast<void*>(const_cast< Cipher*>(this));
    return QDialog::qt_metacast(_clname);
}

int Cipher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE