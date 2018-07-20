/****************************************************************************
** Meta object code from reading C++ file 'settingspage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/settingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SettingsPage_t {
    QByteArrayData data[20];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPage_t qt_meta_stringdata_SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsPage"
QT_MOC_LITERAL(1, 13, 13), // "proxyIpChecks"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "QValidatedLineEdit*"
QT_MOC_LITERAL(4, 48, 10), // "pUiProxyIp"
QT_MOC_LITERAL(5, 59, 10), // "nProxyPort"
QT_MOC_LITERAL(6, 70, 28), // "on_hideTrayIcon_stateChanged"
QT_MOC_LITERAL(7, 99, 6), // "fState"
QT_MOC_LITERAL(8, 106, 18), // "showRestartWarning"
QT_MOC_LITERAL(9, 125, 11), // "fPersistent"
QT_MOC_LITERAL(10, 137, 16), // "clearStatusLabel"
QT_MOC_LITERAL(11, 154, 26), // "updateProxyValidationState"
QT_MOC_LITERAL(12, 181, 22), // "updateDefaultProxyNets"
QT_MOC_LITERAL(13, 204, 7), // "hideNav"
QT_MOC_LITERAL(14, 212, 7), // "showNav"
QT_MOC_LITERAL(15, 220, 19), // "handleCancelClicked"
QT_MOC_LITERAL(16, 240, 17), // "handleSaveClicked"
QT_MOC_LITERAL(17, 258, 14), // "showConfEditor"
QT_MOC_LITERAL(18, 273, 16), // "showMNConfEditor"
QT_MOC_LITERAL(19, 290, 11) // "showBackups"

    },
    "SettingsPage\0proxyIpChecks\0\0"
    "QValidatedLineEdit*\0pUiProxyIp\0"
    "nProxyPort\0on_hideTrayIcon_stateChanged\0"
    "fState\0showRestartWarning\0fPersistent\0"
    "clearStatusLabel\0updateProxyValidationState\0"
    "updateDefaultProxyNets\0hideNav\0showNav\0"
    "handleCancelClicked\0handleSaveClicked\0"
    "showConfEditor\0showMNConfEditor\0"
    "showBackups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPage *_t = static_cast<SettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_hideTrayIcon_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->showRestartWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showRestartWarning(); break;
        case 4: _t->clearStatusLabel(); break;
        case 5: _t->updateProxyValidationState(); break;
        case 6: _t->updateDefaultProxyNets(); break;
        case 7: _t->hideNav(); break;
        case 8: _t->showNav(); break;
        case 9: _t->handleCancelClicked(); break;
        case 10: _t->handleSaveClicked(); break;
        case 11: _t->showConfEditor(); break;
        case 12: _t->showMNConfEditor(); break;
        case 13: _t->showBackups(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsPage::*_t)(QValidatedLineEdit * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsPage::proxyIpChecks)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsPage.data,
      qt_meta_data_SettingsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPage.stringdata0))
        return static_cast<void*>(const_cast< SettingsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SettingsPage::proxyIpChecks(QValidatedLineEdit * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
