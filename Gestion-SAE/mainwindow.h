#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSqlDatabase"
#include "QSqlTableModel"
#include "QSqlQueryModel"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase baseCommerciale;



protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QSqlQueryModel * modelLibProduits;
    QSqlQueryModel * modelLibCategories;

private slots:

    void on_pushButtonAjoutProduit_clicked();
    void on_pushButtonSupprimerProduit_clicked();
    void on_checkBoxSupprimerProduit_clicked();
    void on_lineEditRecherche_textEdited(QString );
    void on_listViewProduit_clicked(QModelIndex index);
    void on_actionQuitter_triggered();
    void actualiserAffichageProduit();
    void affichagePrix();
    void affichageDescription();
    void affichageResume();
    void affichageNom();
    void decocherSuppressionProduit();

    void on_lineEditRechercheCategorie_textEdited(QString );
    void on_listViewCategorie_clicked(QModelIndex index);
    void actualiserAffichageCategorie();
    void affichageDescriptionCategorie();
    void affichageNomCategorie();

};

#endif // MAINWINDOW_H
