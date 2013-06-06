#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QSqlDatabase"
#include "QSqlTableModel"

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

private slots:
    void on_lineEditRecherche_textEdited(QString );
    void on_listViewProduit_clicked(QModelIndex index);
    void on_actionQuitter_triggered();
    void actualiserAffichageProduit();
    void affichagePrix();
    void affichageDescription();
    void affichageNom();


};

#endif // MAINWINDOW_H
