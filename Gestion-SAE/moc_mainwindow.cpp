/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Jun 7 15:41:33 2013
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
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      48,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,
     126,   11,   11,   11, 0x08,
     173,  167,   11,   11, 0x08,
     213,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     271,   11,   11,   11, 0x08,
     287,   11,   11,   11, 0x08,
     310,   11,   11,   11, 0x08,
     328,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     372,   11,   11,   11, 0x08,
     422,  167,   11,   11, 0x08,
     464,   11,   11,   11, 0x08,
     495,   11,   11,   11, 0x08,
     527,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonAjoutProduit_clicked()\0"
    "on_pushButtonSupprimerProduit_clicked()\0"
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
        case 0: on_pushButtonAjoutProduit_clicked(); break;
        case 1: on_pushButtonSupprimerProduit_clicked(); break;
        case 2: on_checkBoxSupprimerProduit_clicked(); break;
        case 3: on_lineEditRecherche_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: on_listViewProduit_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: on_actionQuitter_triggered(); break;
        case 6: actualiserAffichageProduit(); break;
        case 7: affichagePrix(); break;
        case 8: affichageDescription(); break;
        case 9: affichageResume(); break;
        case 10: affichageNom(); break;
        case 11: decocherSuppressionProduit(); break;
        case 12: on_lineEditRechercheCategorie_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: on_listViewCategorie_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 14: actualiserAffichageCategorie(); break;
        case 15: affichageDescriptionCategorie(); break;
        case 16: affichageNomCategorie(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
