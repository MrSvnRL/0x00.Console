/****************************************************************************
** Meta object code from reading C++ file 'shugoconsolewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../shugoconsolewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shugoconsolewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShugoConsoleWidget_t {
    QByteArrayData data[13];
    char stringdata[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ShugoConsoleWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ShugoConsoleWidget_t qt_meta_stringdata_ShugoConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 11),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 13),
QT_MOC_LITERAL(4, 46, 18),
QT_MOC_LITERAL(5, 65, 24),
QT_MOC_LITERAL(6, 90, 19),
QT_MOC_LITERAL(7, 110, 33),
QT_MOC_LITERAL(8, 144, 15),
QT_MOC_LITERAL(9, 160, 13),
QT_MOC_LITERAL(10, 174, 9),
QT_MOC_LITERAL(11, 184, 10),
QT_MOC_LITERAL(12, 195, 12)
    },
    "ShugoConsoleWidget\0onScanTimer\0\0"
    "onStateUpdate\0AionProcessWorker*\0"
    "AionProcessWorker::State\0onTrayIconActivated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "setRunOnStartup\0resetDefaults\0varEnable\0"
    "varDisable\0saveSettings\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShugoConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a,
       3,    2,   55,    2, 0x0a,
       6,    1,   60,    2, 0x0a,
       8,    1,   63,    2, 0x0a,
       9,    1,   66,    2, 0x0a,
      10,    2,   69,    2, 0x0a,
      11,    1,   74,    2, 0x0a,
      12,    0,   77,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void ShugoConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShugoConsoleWidget *_t = static_cast<ShugoConsoleWidget *>(_o);
        switch (_id) {
        case 0: _t->onScanTimer(); break;
        case 1: _t->onStateUpdate((*reinterpret_cast< AionProcessWorker*(*)>(_a[1])),(*reinterpret_cast< AionProcessWorker::State(*)>(_a[2]))); break;
        case 2: _t->onTrayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 3: _t->setRunOnStartup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->resetDefaults((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->varEnable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 6: _t->varDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->saveSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AionProcessWorker* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AionProcessWorker::State >(); break;
            }
            break;
        }
    }
}

const QMetaObject ShugoConsoleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShugoConsoleWidget.data,
      qt_meta_data_ShugoConsoleWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *ShugoConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShugoConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShugoConsoleWidget.stringdata))
        return static_cast<void*>(const_cast< ShugoConsoleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShugoConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
