/****************************************************************************
** Meta object code from reading C++ file 'twoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../twoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TwoForm_t {
    QByteArrayData data[6];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TwoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TwoForm_t qt_meta_stringdata_TwoForm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "TwoForm"
QT_MOC_LITERAL(1, 8, 4), // "SAVE"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 9), // "onAddItem"
QT_MOC_LITERAL(4, 24, 9), // "onDelItem"
QT_MOC_LITERAL(5, 34, 12) // "appendVector"

    },
    "TwoForm\0SAVE\0\0onAddItem\0onDelItem\0"
    "appendVector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TwoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TwoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TwoForm *_t = static_cast<TwoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SAVE(); break;
        case 1: _t->onAddItem(); break;
        case 2: _t->onDelItem(); break;
        case 3: _t->appendVector(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TwoForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TwoForm::SAVE)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TwoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TwoForm.data,
      qt_meta_data_TwoForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TwoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TwoForm.stringdata0))
        return static_cast<void*>(const_cast< TwoForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int TwoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void TwoForm::SAVE()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
