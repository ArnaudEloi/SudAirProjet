/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Jun 7 12:16:58 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      52,   11,   11,   11, 0x08,
      90,   11,   11,   11, 0x08,
     137,  131,   11,   11, 0x08,
     177,   11,   11,   11, 0x08,
     206,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,
     251,   11,   11,   11, 0x08,
     274,   11,   11,   11, 0x08,
     292,   11,   11,   11, 0x08,
     307,   11,   11,   11, 0x08,
     336,   11,   11,   11, 0x08,
     386,  131,   11,   11, 0x08,
     428,   11,   11,   11, 0x08,
     459,   11,   11,   11, 0x08,
     491,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonSupprimerProduit_clicked()\0"
    "on_checkBoxSupprimerProduit_clicked()\0"
    "on_lineEditRecherche_textEdited(QString)\0"
    "index\0on_listViewProduit_clicked(QModelIndex)\0"
    "on_actionQuitter_triggered()\0"
    "actualiserAffichageProduit()\0"
    "affichagePrix()\0affichageDescription()\0"
    "affichageResume()\0affichageNom()\0"
    "decocherSuppressionProduit()\0"
    "on_lineEditRechercheCategorie_textEdited(QString)\0"
    "on_listViewCategorie_clicked(QModelIndex)\0"
    "actualiserAffichageCategorie()\0"
    "affichageDescriptionCategorie()\0"
    "affichageNomCategorie()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButtonSupprimerProduit_clicked(); break;
        case 1: on_checkBoxSupprimerProduit_clicked(); break;
        case 2: on_lineEditRecherche_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: on_listViewProduit_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: on_actionQuitter_triggered(); break;
        case 5: actualiserAffichageProduit(); break;
        case 6: affichagePrix(); break;
        case 7: affichageDescription(); break;
        case 8: affichageResume(); break;
        case 9: affichageNom(); break;
        case 10: decocherSuppressionProduit(); break;
        case 11: on_lineEditRechercheCategorie_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: on_listViewCategorie_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 13: actualiserAffichageCategorie(); break;
        case 14: affichageDescriptionCategorie(); break;
        case 15: affichageNomCategorie(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
