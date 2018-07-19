/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[73];
    char stringdata0[989];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 13), // "handleRestart"
QT_MOC_LITERAL(6, 58, 4), // "args"
QT_MOC_LITERAL(7, 63, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(8, 89, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(9, 117, 5), // "index"
QT_MOC_LITERAL(10, 123, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(11, 157, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(12, 187, 5), // "value"
QT_MOC_LITERAL(13, 193, 18), // "updateTrafficStats"
QT_MOC_LITERAL(14, 212, 12), // "totalBytesIn"
QT_MOC_LITERAL(15, 225, 13), // "totalBytesOut"
QT_MOC_LITERAL(16, 239, 11), // "resizeEvent"
QT_MOC_LITERAL(17, 251, 13), // "QResizeEvent*"
QT_MOC_LITERAL(18, 265, 5), // "event"
QT_MOC_LITERAL(19, 271, 9), // "showEvent"
QT_MOC_LITERAL(20, 281, 11), // "QShowEvent*"
QT_MOC_LITERAL(21, 293, 9), // "hideEvent"
QT_MOC_LITERAL(22, 303, 11), // "QHideEvent*"
QT_MOC_LITERAL(23, 315, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(24, 341, 5), // "point"
QT_MOC_LITERAL(25, 347, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(26, 371, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(27, 400, 17), // "clearSelectedNode"
QT_MOC_LITERAL(28, 418, 5), // "clear"
QT_MOC_LITERAL(29, 424, 12), // "clearHistory"
QT_MOC_LITERAL(30, 437, 10), // "fontBigger"
QT_MOC_LITERAL(31, 448, 11), // "fontSmaller"
QT_MOC_LITERAL(32, 460, 11), // "setFontSize"
QT_MOC_LITERAL(33, 472, 7), // "newSize"
QT_MOC_LITERAL(34, 480, 13), // "walletSalvage"
QT_MOC_LITERAL(35, 494, 12), // "walletRescan"
QT_MOC_LITERAL(36, 507, 14), // "walletZaptxes1"
QT_MOC_LITERAL(37, 522, 14), // "walletZaptxes2"
QT_MOC_LITERAL(38, 537, 13), // "walletUpgrade"
QT_MOC_LITERAL(39, 551, 13), // "walletReindex"
QT_MOC_LITERAL(40, 565, 7), // "message"
QT_MOC_LITERAL(41, 573, 8), // "category"
QT_MOC_LITERAL(42, 582, 4), // "html"
QT_MOC_LITERAL(43, 587, 17), // "setNumConnections"
QT_MOC_LITERAL(44, 605, 5), // "count"
QT_MOC_LITERAL(45, 611, 16), // "setNetworkActive"
QT_MOC_LITERAL(46, 628, 13), // "networkActive"
QT_MOC_LITERAL(47, 642, 18), // "setMasternodeCount"
QT_MOC_LITERAL(48, 661, 14), // "strMasternodes"
QT_MOC_LITERAL(49, 676, 12), // "setNumBlocks"
QT_MOC_LITERAL(50, 689, 9), // "blockDate"
QT_MOC_LITERAL(51, 699, 21), // "nVerificationProgress"
QT_MOC_LITERAL(52, 721, 7), // "headers"
QT_MOC_LITERAL(53, 729, 14), // "setMempoolSize"
QT_MOC_LITERAL(54, 744, 11), // "numberOfTxs"
QT_MOC_LITERAL(55, 756, 6), // "size_t"
QT_MOC_LITERAL(56, 763, 8), // "dynUsage"
QT_MOC_LITERAL(57, 772, 13), // "browseHistory"
QT_MOC_LITERAL(58, 786, 6), // "offset"
QT_MOC_LITERAL(59, 793, 11), // "scrollToEnd"
QT_MOC_LITERAL(60, 805, 12), // "peerSelected"
QT_MOC_LITERAL(61, 818, 14), // "QItemSelection"
QT_MOC_LITERAL(62, 833, 8), // "selected"
QT_MOC_LITERAL(63, 842, 10), // "deselected"
QT_MOC_LITERAL(64, 853, 23), // "peerLayoutAboutToChange"
QT_MOC_LITERAL(65, 877, 17), // "peerLayoutChanged"
QT_MOC_LITERAL(66, 895, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(67, 918, 15), // "banSelectedNode"
QT_MOC_LITERAL(68, 934, 7), // "bantime"
QT_MOC_LITERAL(69, 942, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(70, 960, 11), // "setTabFocus"
QT_MOC_LITERAL(71, 972, 8), // "TabTypes"
QT_MOC_LITERAL(72, 981, 7) // "tabType"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0handleRestart\0args\0"
    "on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0resizeEvent\0QResizeEvent*\0"
    "event\0showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0showPeersTableContextMenu\0"
    "point\0showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0clear\0clearHistory\0"
    "fontBigger\0fontSmaller\0setFontSize\0"
    "newSize\0walletSalvage\0walletRescan\0"
    "walletZaptxes1\0walletZaptxes2\0"
    "walletUpgrade\0walletReindex\0message\0"
    "category\0html\0setNumConnections\0count\0"
    "setNetworkActive\0networkActive\0"
    "setMasternodeCount\0strMasternodes\0"
    "setNumBlocks\0blockDate\0nVerificationProgress\0"
    "headers\0setMempoolSize\0numberOfTxs\0"
    "size_t\0dynUsage\0browseHistory\0offset\0"
    "scrollToEnd\0peerSelected\0QItemSelection\0"
    "selected\0deselected\0peerLayoutAboutToChange\0"
    "peerLayoutChanged\0disconnectSelectedNode\0"
    "banSelectedNode\0bantime\0unbanSelectedNode\0"
    "setTabFocus\0TabTypes\0tabType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x06 /* Public */,
       3,    1,  225,    2, 0x06 /* Public */,
       5,    1,  228,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  231,    2, 0x08 /* Private */,
       8,    1,  232,    2, 0x08 /* Private */,
      10,    0,  235,    2, 0x08 /* Private */,
      11,    1,  236,    2, 0x08 /* Private */,
      13,    2,  239,    2, 0x08 /* Private */,
      16,    1,  244,    2, 0x08 /* Private */,
      19,    1,  247,    2, 0x08 /* Private */,
      21,    1,  250,    2, 0x08 /* Private */,
      23,    1,  253,    2, 0x08 /* Private */,
      25,    1,  256,    2, 0x08 /* Private */,
      26,    0,  259,    2, 0x08 /* Private */,
      27,    0,  260,    2, 0x08 /* Private */,
      28,    1,  261,    2, 0x0a /* Public */,
      28,    0,  264,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  265,    2, 0x0a /* Public */,
      31,    0,  266,    2, 0x0a /* Public */,
      32,    1,  267,    2, 0x0a /* Public */,
      34,    0,  270,    2, 0x0a /* Public */,
      35,    0,  271,    2, 0x0a /* Public */,
      36,    0,  272,    2, 0x0a /* Public */,
      37,    0,  273,    2, 0x0a /* Public */,
      38,    0,  274,    2, 0x0a /* Public */,
      39,    0,  275,    2, 0x0a /* Public */,
      40,    3,  276,    2, 0x0a /* Public */,
      40,    2,  283,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  288,    2, 0x0a /* Public */,
      45,    1,  291,    2, 0x0a /* Public */,
      47,    1,  294,    2, 0x0a /* Public */,
      49,    4,  297,    2, 0x0a /* Public */,
      53,    2,  306,    2, 0x0a /* Public */,
      57,    1,  311,    2, 0x0a /* Public */,
      59,    0,  314,    2, 0x0a /* Public */,
      60,    2,  315,    2, 0x0a /* Public */,
      64,    0,  320,    2, 0x0a /* Public */,
      65,    0,  321,    2, 0x0a /* Public */,
      66,    0,  322,    2, 0x0a /* Public */,
      67,    1,  323,    2, 0x0a /* Public */,
      69,    0,  326,    2, 0x0a /* Public */,
      70,    1,  327,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   18,
    QMetaType::Void, 0x80000000 | 22,   18,
    QMetaType::Void, QMetaType::QPoint,   24,
    QMetaType::Void, QMetaType::QPoint,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   41,   40,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   41,   40,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, QMetaType::Bool,   44,   50,   51,   52,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 55,   54,   56,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 61, 0x80000000 | 61,   62,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 71,   72,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_returnPressed(); break;
        case 4: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_openDebugLogfileButton_clicked(); break;
        case 6: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 9: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 10: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 11: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->showOrHideBanTableIfRequired(); break;
        case 14: _t->clearSelectedNode(); break;
        case 15: _t->clear((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->clear(); break;
        case 17: _t->fontBigger(); break;
        case 18: _t->fontSmaller(); break;
        case 19: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->walletSalvage(); break;
        case 21: _t->walletRescan(); break;
        case 22: _t->walletZaptxes1(); break;
        case 23: _t->walletZaptxes2(); break;
        case 24: _t->walletUpgrade(); break;
        case 25: _t->walletReindex(); break;
        case 26: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setMasternodeCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 32: _t->setMempoolSize((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 33: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->scrollToEnd(); break;
        case 35: _t->peerSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 36: _t->peerLayoutAboutToChange(); break;
        case 37: _t->peerLayoutChanged(); break;
        case 38: _t->disconnectSelectedNode(); break;
        case 39: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->unbanSelectedNode(); break;
        case 41: _t->setTabFocus((*reinterpret_cast< TabTypes(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
            }
        }
        {
            typedef void (RPCConsole::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::handleRestart)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RPCConsole::handleRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
