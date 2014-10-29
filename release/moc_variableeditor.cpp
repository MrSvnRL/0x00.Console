/****************************************************************************
** Meta object code from reading C++ file 'variableeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../variableeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'variableeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VariableEditorBase_t {
    QByteArrayData data[8];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VariableEditorBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VariableEditorBase_t qt_meta_stringdata_VariableEditorBase = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 15),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 9),
QT_MOC_LITERAL(4, 46, 4),
QT_MOC_LITERAL(5, 51, 5),
QT_MOC_LITERAL(6, 57, 10),
QT_MOC_LITERAL(7, 68, 19)
    },
    "VariableEditorBase\0settingsUpdated\0\0"
    "varEnable\0name\0value\0varDisable\0"
    "onCheckStateChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VariableEditorBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    2,   35,    2, 0x06,
       6,    1,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void VariableEditorBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VariableEditorBase *_t = static_cast<VariableEditorBase *>(_o);
        switch (_id) {
        case 0: _t->settingsUpdated(); break;
        case 1: _t->varEnable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 2: _t->varDisable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onCheckStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VariableEditorBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VariableEditorBase::settingsUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (VariableEditorBase::*_t)(QString , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VariableEditorBase::varEnable)) {
                *result = 1;
            }
        }
        {
            typedef void (VariableEditorBase::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VariableEditorBase::varDisable)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject VariableEditorBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VariableEditorBase.data,
      qt_meta_data_VariableEditorBase,  qt_static_metacall, 0, 0}
};


const QMetaObject *VariableEditorBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VariableEditorBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VariableEditorBase.stringdata))
        return static_cast<void*>(const_cast< VariableEditorBase*>(this));
    return QObject::qt_metacast(_clname);
}

int VariableEditorBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void VariableEditorBase::settingsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VariableEditorBase::varEnable(QString _t1, QVariant _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VariableEditorBase::varDisable(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_DoubleSpinVariableEditor_t {
    QByteArrayData data[3];
    char stringdata[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DoubleSpinVariableEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DoubleSpinVariableEditor_t qt_meta_stringdata_DoubleSpinVariableEditor = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 27),
QT_MOC_LITERAL(2, 53, 0)
    },
    "DoubleSpinVariableEditor\0"
    "onDoubleSpinBoxValueChanged\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoubleSpinVariableEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void DoubleSpinVariableEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoubleSpinVariableEditor *_t = static_cast<DoubleSpinVariableEditor *>(_o);
        switch (_id) {
        case 0: _t->onDoubleSpinBoxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DoubleSpinVariableEditor::staticMetaObject = {
    { &VariableEditorBase::staticMetaObject, qt_meta_stringdata_DoubleSpinVariableEditor.data,
      qt_meta_data_DoubleSpinVariableEditor,  qt_static_metacall, 0, 0}
};


const QMetaObject *DoubleSpinVariableEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoubleSpinVariableEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DoubleSpinVariableEditor.stringdata))
        return static_cast<void*>(const_cast< DoubleSpinVariableEditor*>(this));
    return VariableEditorBase::qt_metacast(_clname);
}

int DoubleSpinVariableEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VariableEditorBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_BoolComboVariableEditor_t {
    QByteArrayData data[3];
    char stringdata[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BoolComboVariableEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BoolComboVariableEditor_t qt_meta_stringdata_BoolComboVariableEditor = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 29),
QT_MOC_LITERAL(2, 54, 0)
    },
    "BoolComboVariableEditor\0"
    "onComboBoxCurrentIndexChanged\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolComboVariableEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BoolComboVariableEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoolComboVariableEditor *_t = static_cast<BoolComboVariableEditor *>(_o);
        switch (_id) {
        case 0: _t->onComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject BoolComboVariableEditor::staticMetaObject = {
    { &VariableEditorBase::staticMetaObject, qt_meta_stringdata_BoolComboVariableEditor.data,
      qt_meta_data_BoolComboVariableEditor,  qt_static_metacall, 0, 0}
};


const QMetaObject *BoolComboVariableEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolComboVariableEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BoolComboVariableEditor.stringdata))
        return static_cast<void*>(const_cast< BoolComboVariableEditor*>(this));
    return VariableEditorBase::qt_metacast(_clname);
}

int BoolComboVariableEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VariableEditorBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ValueComboVariableEditor_t {
    QByteArrayData data[3];
    char stringdata[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ValueComboVariableEditor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ValueComboVariableEditor_t qt_meta_stringdata_ValueComboVariableEditor = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 29),
QT_MOC_LITERAL(2, 55, 0)
    },
    "ValueComboVariableEditor\0"
    "onComboBoxCurrentIndexChanged\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ValueComboVariableEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ValueComboVariableEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ValueComboVariableEditor *_t = static_cast<ValueComboVariableEditor *>(_o);
        switch (_id) {
        case 0: _t->onComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ValueComboVariableEditor::staticMetaObject = {
    { &VariableEditorBase::staticMetaObject, qt_meta_stringdata_ValueComboVariableEditor.data,
      qt_meta_data_ValueComboVariableEditor,  qt_static_metacall, 0, 0}
};


const QMetaObject *ValueComboVariableEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ValueComboVariableEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ValueComboVariableEditor.stringdata))
        return static_cast<void*>(const_cast< ValueComboVariableEditor*>(this));
    return VariableEditorBase::qt_metacast(_clname);
}

int ValueComboVariableEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VariableEditorBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
