/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Jun 12 11:16:32 2013
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
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      78,   11,   11,   11, 0x08,
     114,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,
     192,   11,   11,   11, 0x08,
     239,  233,   11,   11, 0x08,
     279,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     337,   11,   11,   11, 0x08,
     353,   11,   11,   11, 0x08,
     376,   11,   11,   11, 0x08,
     394,   11,   11,   11, 0x08,
     409,   11,   11,   11, 0x08,
     438,   11,   11,   11, 0x08,
     453,   11,   11,   11, 0x08,
     470,   11,   11,   11, 0x08,
     490,   11,   11,   11, 0x08,
     509,   11,   11,   11, 0x08,
     532,   11,   11,   11, 0x08,
     572,   11,   11,   11, 0x08,
     613,   11,   11,   11, 0x08,
     663,  233,   11,   11, 0x08,
     705,   11,   11,   11, 0x08,
     736,   11,   11,   11, 0x08,
     768,   11,   11,   11, 0x08,
     792,   11,   11,   11, 0x08,
     812,   11,   11,   11, 0x08,
     834,   11,   11,   11, 0x08,
     865,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButtonModifDesc_clicked()\0"
    "on_pushButtonModifInfo_clicked()\0"
    "on_pushButtonAjoutProduit_clicked()\0"
    "on_pushButtonSupprimerProduit_clicked()\0"
    "on_checkBoxSupprimerProduit_clicked()\0"
    "on_lineEditRecherche_textEdited(QString)\0"
    "index\0on_listViewProduit_clicked(QModelIndex)\0"
    "on_actionQuitter_triggered()\0"
    "actualiserAffichageProduit()\0"
    "affichagePrix()\0affichageDescription()\0"
    "affichageResume()\0affichageNom()\0"
    "decocherSuppressionProduit()\0"
    "affichageRef()\0nouveauProduit()\0"
    "actualiserProduit()\0afficheCategorie()\0"
    "selectionAutoProduit()\0"
    "on_checkBoxSupprimerCategorie_clicked()\0"
    "on_pushButtonNouvelleCategorie_clicked()\0"
    "on_lineEditRechercheCategorie_textEdited(QString)\0"
    "on_listViewCategorie_clicked(QModelIndex)\0"
    "actualiserAffichageCategorie()\0"
    "affichageDescriptionCategorie()\0"
    "affichageNomCategorie()\0nouvelleCategorie()\0"
    "actualiserCategorie()\0"
    "decocherSuppressionCategorie()\0"
    "on_pushButtonSupprimerCategorie_clicked()\0"
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
        case 0: on_pushButtonModifDesc_clicked(); break;
        case 1: on_pushButtonModifInfo_clicked(); break;
        case 2: on_pushButtonAjoutProduit_clicked(); break;
        case 3: on_pushButtonSupprimerProduit_clicked(); break;
        case 4: on_checkBoxSupprimerProduit_clicked(); break;
        case 5: on_lineEditRecherche_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: on_listViewProduit_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 7: on_actionQuitter_triggered(); break;
        case 8: actualiserAffichageProduit(); break;
        case 9: affichagePrix(); break;
        case 10: affichageDescription(); break;
        case 11: affichageResume(); break;
        case 12: affichageNom(); break;
        case 13: decocherSuppressionProduit(); break;
        case 14: affichageRef(); break;
        case 15: nouveauProduit(); break;
        case 16: actualiserProduit(); break;
        case 17: afficheCategorie(); break;
        case 18: selectionAutoProduit(); break;
        case 19: on_checkBoxSupprimerCategorie_clicked(); break;
        case 20: on_pushButtonNouvelleCategorie_clicked(); break;
        case 21: on_lineEditRechercheCategorie_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: on_listViewCategorie_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 23: actualiserAffichageCategorie(); break;
        case 24: affichageDescriptionCategorie(); break;
        case 25: affichageNomCategorie(); break;
        case 26: nouvelleCategorie(); break;
        case 27: actualiserCategorie(); break;
        case 28: decocherSuppressionCategorie(); break;
        case 29: on_pushButtonSupprimerCategorie_clicked(); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
