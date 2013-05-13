/****************************************************************************
** Meta object code from reading C++ file 'attitudewidget.h'
**
** Created: Mon May 13 19:52:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "attitudewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attitudewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_attitudewidget[] = {

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

static const char qt_meta_stringdata_attitudewidget[] = {
    "attitudewidget\0\0updatewindow()\0"
    "measurementspointer\0"
    "receivemeasurementsslot(double*)\0"
};

void attitudewidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        attitudewidget *_t = static_cast<attitudewidget *>(_o);
        switch (_id) {
        case 0: _t->updatewindow(); break;
        case 1: _t->receivemeasurementsslot((*reinterpret_cast< double*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData attitudewidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject attitudewidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_attitudewidget,
      qt_meta_data_attitudewidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &attitudewidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *attitudewidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *attitudewidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_attitudewidget))
        return static_cast<void*>(const_cast< attitudewidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int attitudewidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
