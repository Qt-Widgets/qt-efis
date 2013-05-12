/****************************************************************************
** Meta object code from reading C++ file 'headingwidget.h'
**
** Created: Sun May 12 11:09:00 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "headingwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'headingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_headingwidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x09,
      50,   30,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_headingwidget[] = {
    "headingwidget\0\0updatewindow()\0"
    "measurementspointer\0"
    "receivemeasurementsslot(double*)\0"
};

void headingwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        headingwidget *_t = static_cast<headingwidget *>(_o);
        switch (_id) {
        case 0: _t->updatewindow(); break;
        case 1: _t->receivemeasurementsslot((*reinterpret_cast< double*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData headingwidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject headingwidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_headingwidget,
      qt_meta_data_headingwidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &headingwidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *headingwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *headingwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_headingwidget))
        return static_cast<void*>(const_cast< headingwidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int headingwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
