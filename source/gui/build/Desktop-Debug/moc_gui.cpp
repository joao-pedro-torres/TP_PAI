/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui_t {
    QByteArrayData data[16];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui_t qt_meta_stringdata_gui = {
    {
QT_MOC_LITERAL(0, 0, 3), // "gui"
QT_MOC_LITERAL(1, 4, 22), // "on_OpenImage_triggered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "on_CloseImage_triggered"
QT_MOC_LITERAL(4, 52, 22), // "on_ImportCSV_triggered"
QT_MOC_LITERAL(5, 75, 21), // "on_CloseCSV_triggered"
QT_MOC_LITERAL(6, 97, 26), // "on_ImportDataset_triggered"
QT_MOC_LITERAL(7, 124, 25), // "on_CloseDataset_triggered"
QT_MOC_LITERAL(8, 150, 22), // "on_StartButton_clicked"
QT_MOC_LITERAL(9, 173, 23), // "on_ZoomInButton_clicked"
QT_MOC_LITERAL(10, 197, 24), // "on_ZoomOutButton_clicked"
QT_MOC_LITERAL(11, 222, 35), // "on_ImageFolders_currentIndexC..."
QT_MOC_LITERAL(12, 258, 5), // "index"
QT_MOC_LITERAL(13, 264, 9), // "viewImage"
QT_MOC_LITERAL(14, 274, 15), // "on_Prev_clicked"
QT_MOC_LITERAL(15, 290, 15) // "on_Next_clicked"

    },
    "gui\0on_OpenImage_triggered\0\0"
    "on_CloseImage_triggered\0on_ImportCSV_triggered\0"
    "on_CloseCSV_triggered\0on_ImportDataset_triggered\0"
    "on_CloseDataset_triggered\0"
    "on_StartButton_clicked\0on_ZoomInButton_clicked\0"
    "on_ZoomOutButton_clicked\0"
    "on_ImageFolders_currentIndexChanged\0"
    "index\0viewImage\0on_Prev_clicked\0"
    "on_Next_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_OpenImage_triggered(); break;
        case 1: _t->on_CloseImage_triggered(); break;
        case 2: _t->on_ImportCSV_triggered(); break;
        case 3: _t->on_CloseCSV_triggered(); break;
        case 4: _t->on_ImportDataset_triggered(); break;
        case 5: _t->on_CloseDataset_triggered(); break;
        case 6: _t->on_StartButton_clicked(); break;
        case 7: _t->on_ZoomInButton_clicked(); break;
        case 8: _t->on_ZoomOutButton_clicked(); break;
        case 9: _t->on_ImageFolders_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->viewImage(); break;
        case 11: _t->on_Prev_clicked(); break;
        case 12: _t->on_Next_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_gui.data,
    qt_meta_data_gui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
