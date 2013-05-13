/****************************************************************************
** Meta object code from reading C++ file 'demowidget.h'
**
** Created: Mon May 13 21:19:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "demowidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_demowidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      64,   11,   11,   11, 0x0a,
      84,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_demowidget[] = {
    "demowidget\0\0measurementspointer\0"
    "sendmeasurementssignal(double*)\0"
    "resetmeasurements()\0sendmeasurementsslot()\0"
};

void demowidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        demowidget *_t = static_cast<demowidget *>(_o);
        switch (_id) {
        case 0: _t->sendmeasurementssignal((*reinterpret_cast< double*(*)>(_a[1]))); break;
        case 1: _t->resetmeasurements(); break;
        case 2: _t->sendmeasurementsslot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData demowidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject demowidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_demowidget,
      qt_meta_data_demowidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &demowidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *demowidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *demowidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_demowidget))
        return static_cast<void*>(const_cast< demowidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int demowidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void demowidget::sendmeasurementssignal(double * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
