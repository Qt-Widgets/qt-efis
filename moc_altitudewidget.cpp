/****************************************************************************
** Meta object code from reading C++ file 'altitudewidget.h'
**
** Created: Mon May 13 19:52:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "altitudewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'altitudewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_altitudewidget[] = {

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
      16,   15,   15,   15, 0x09,
      51,   31,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_altitudewidget[] = {
    "altitudewidget\0\0updatewindow()\0"
    "measurementspointer\0"
    "receivemeasurementsslot(double*)\0"
};

void altitudewidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        altitudewidget *_t = static_cast<altitudewidget *>(_o);
        switch (_id) {
        case 0: _t->updatewindow(); break;
        case 1: _t->receivemeasurementsslot((*reinterpret_cast< double*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData altitudewidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject altitudewidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_altitudewidget,
      qt_meta_data_altitudewidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &altitudewidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *altitudewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *altitudewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_altitudewidget))
        return static_cast<void*>(const_cast< altitudewidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int altitudewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
