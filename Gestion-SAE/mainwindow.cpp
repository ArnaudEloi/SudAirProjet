#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTextCodec"
#include "QSqlDatabase"
#include "QSqlTableModel"
#include "QSqlQuery"
#include "QDebug"
#include "QSqlRecord"
#include "QSqlQueryModel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // prise en compte de l'utf8 pour les chaines en dur pour le code
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    // connexion à la base
    baseCommerciale= QSqlDatabase::addDatabase("QMYSQL");
    baseCommerciale.setHostName("localhost");
    baseCommerciale.setUserName("root");
    baseCommerciale.setPassword("passwd");
    baseCommerciale.setDatabaseName("sae");
    baseCommerciale.setPort(3307);
    if(baseCommerciale.open())
    {
        ui->statusBar->setStatusTip("Connexion à la base réussie");
        /// premiers affichage des données
        // recherche de tous les produits
        on_lineEditRecherche_textEdited("");
        // recherche de toutes les catégories
        on_lineEditRechercheCategorie_textEdited("");
    }
    else
    {
        ui->statusBar->setStatusTip("Echec de la connexion à la base !");
    }




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

// QUITTER
void MainWindow::on_actionQuitter_triggered()
{
    this->close();
}

/// PRODUIT ////////////

// ACTUALISER AFFICHAGE PRODUIT
void MainWindow::actualiserAffichageProduit()
// affiche les informations sur le produit choisi
{
    // nom
    affichageNom();
    // prix
    affichagePrix();
    // description
    affichageDescription();
    // résumé
    affichageResume();
    // décocher la suppression
    decocherSuppressionProduit();
}
// CHOIX DU PRODUIT
void MainWindow::on_listViewProduit_clicked(QModelIndex index)
{
    actualiserAffichageProduit();
}

// RECHERCHE DE PRODUIT
void MainWindow::on_lineEditRecherche_textEdited(QString )
{
    modelLibProduits=new QSqlQueryModel(this);
    QString recherche=ui->lineEditRecherche->text();
    QString search="select name from sae_product_lang where name like '%"+recherche+"%' order by name asc";
    modelLibProduits->setQuery(search);
    ui->listViewProduit->setModel(modelLibProduits);
}


// FONCTIONS D'AFFICHAGE DES INFORMATIONS
///////////////////////////////////////////

void MainWindow::affichagePrix()
{
    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    // affichage du prix correspondant à l'id du produit
    QSqlQuery query2("select price from sae_product where id_product='"+idProd+"'");
    query2.next();
    QString prix = query2.value(0).toString();
    ui->lineEditPrix->setText(prix);

}

void MainWindow::affichageDescription()
{
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();

    QSqlQuery query("select description from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString resultat = query.value(0).toString();

    ui->textEditDesc->setText(resultat);
}

void MainWindow::affichageNom()
{
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    ui->lineEditNom->setText(labProd);
}

void MainWindow::affichageResume()
{
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();

    QSqlQuery query("select description_short from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString resultat = query.value(0).toString();

    ui->textEditResum->setText(resultat);
}

// fin fonctions d'affichage des informtions
/////////////////////////////////////////////

// ajout
///////////

// NOUVEAU PRODUIT
void MainWindow::on_pushButtonAjoutProduit_clicked()
{
    if(ui->lineEditNouveauProduit->text()!="")
    {
    QString newLib=ui->lineEditNouveauProduit->text();
    QSqlQuery maRequete("select max(id_product)+1 from sae_product_lang");
    maRequete.next();
    int numeroOk=maRequete.value(0).toInt();

    QSqlQuery query;
      query.prepare("INSERT INTO sae_product_lang (id_product, name, id_lang, link_rewrite) "
                    "VALUES (?, ?, ?, ?)");
      query.addBindValue(numeroOk);
      query.addBindValue(newLib);
      query.addBindValue(1);
      QString lien="link"+QString::number(numeroOk);
      query.addBindValue(lien);

      query.exec();

    // actualiser
    actualiserAffichageProduit();
    }
    else
    {
        qDebug()<<"vide";
    }
    ui->lineEditNouveauProduit->setText("");
}

// fin ajout
//////////////


// suppression
//////////////////

// supprimer le produit
void MainWindow::on_pushButtonSupprimerProduit_clicked()
{
    decocherSuppressionProduit();

    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    //requete suppression
    QSqlQuery query2;
    QString req2="delete from sae_product_lang where id_product ="+idProd+"";
    query2.prepare(req2);
    query2.exec();
    QSqlQuery query3;
    QString req3="delete from sae_product where id_product ="+idProd+"";
    query3.prepare(req3);
    query3.exec();
    QSqlQuery query4;
    QString req4="delete from sae_product_attribute where id_product ="+idProd+"";
    query4.prepare(req4);
    query4.exec();
    QSqlQuery query5;
    QString req5="delete from sae_product_shop where id_product ="+idProd+"";
    query5.prepare(req5);
    query5.exec();
    QSqlQuery query6;
    QString req6="delete from sae_product_supplier where id_product ="+idProd+"";
    query6.prepare(req6);
    query6.exec();

    //actaliser
    actualiserAffichageProduit();
}

// déchocher
void MainWindow::decocherSuppressionProduit()
{
    ui->pushButtonSupprimerProduit->setDisabled(true);
    ui->checkBoxSupprimerProduit->setChecked(false);
}

// confirmation de suppression
void MainWindow::on_checkBoxSupprimerProduit_clicked()
{
    if (ui->checkBoxSupprimerProduit->isChecked())
    {
        ui->pushButtonSupprimerProduit->setDisabled(false);
    }
    else
    {
        ui->pushButtonSupprimerProduit->setDisabled(true);
    }
}

// fin suppression
/////////////////////

/// fin produit //////////


/// CATEGORIE //////////

// ACTUALISER AFFICHAGE CATEGORIE
void MainWindow::actualiserAffichageCategorie()
// affiche les informations sur la catégorie choisi
{
    // nom
    affichageNomCategorie();
    // description
    affichageDescriptionCategorie();
}

// CHOIX DE LA CATEGORIE
void MainWindow::on_listViewCategorie_clicked(QModelIndex index)
{
    actualiserAffichageCategorie();
}

// RECHERCHE DE CATEGORIE
void MainWindow::on_lineEditRechercheCategorie_textEdited(QString )
{
    modelLibCategories=new QSqlQueryModel(this);
    QString recherche=ui->lineEditRechercheCategorie->text();
    QString search="select name from sae_category_lang where name like '%"+recherche+"%' and name !='root' and name !='Accueil' order by name asc";
    modelLibCategories->setQuery(search);
    ui->listViewCategorie->setModel(modelLibCategories);
}


// FONCTIONS D'AFFICHAGE DES INFORMATIONS
///////////////////////////////////////////

void MainWindow::affichageDescriptionCategorie()
{
    QString labProd=ui->listViewCategorie->currentIndex().data(Qt::DisplayRole).toString();

    QSqlQuery query("select description from sae_category_lang where name='"+labProd+"'");
    query.next();
    QString resultat = query.value(0).toString();

    ui->textEditDescCategorie->setText(resultat);
}

void MainWindow::affichageNomCategorie()
{
    QString labProd=ui->listViewCategorie->currentIndex().data(Qt::DisplayRole).toString();
    ui->lineEditNomCategorie->setText(labProd);
}

// fin fonctions d'affichage des informtions
/////////////////////////////////////////////
/// fin catégorie //////////








