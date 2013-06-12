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
    // référence
    affichageRef();
    // décocher la suppression
    decocherSuppressionProduit();
    // catégorie
    afficheCategorie();
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
/// ////////////////////////////////////////

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

void MainWindow::affichageRef()
{
    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    // affichage de la reference correspondant à l'id du produit
    QSqlQuery query2("select reference from sae_product where id_product='"+idProd+"'");
    query2.next();
    QString prodRef = query2.value(0).toString();
    ui->lineEditRef->setText(prodRef);

}

void MainWindow::afficheCategorie()
{
    modelLibCategories=new QSqlQueryModel(this);
    QString recherche=ui->lineEditRechercheCategorie->text();
    QString search="select name from sae_category_lang where name !='root' and name !='Accueil' order by name asc";
    modelLibCategories->setQuery(search);
    ui->comboBoxCategorie->setModel(modelLibCategories);

    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    // récupération de l'id de la catégorie du produit
    QSqlQuery query2("select id_category_default from sae_product where id_product="+idProd+"");
    query2.next();
    QString idCat = query2.value(0).toString();

    // récupération du libélé de la catégorie
    QSqlQuery query3("select name from sae_category_lang where id_category="+idCat+"");
    query3.next();
    QString catLib = query3.value(0).toString();

    // Recuperation de l'index de la catégorie du produit
    int nbCat=modelLibCategories->rowCount();
    for(int coup=0;coup<nbCat;coup++)
    {
    QString texte=ui->comboBoxCategorie->itemText(coup);
    // si la catégorie du produit correspond avec l'index testé par la boucle
     if(texte==catLib)
        {
            //placer la combobox sur la catégorie qui correspond
            ui->comboBoxCategorie->setCurrentIndex(coup);
        }
    }// fin for
}

void MainWindow::selectionAutoProduit()
{
    /*
    // récupération du libélé du produit
    QString prodLib = ui->lineEditNom->text();

    // Recuperation de l'index du produit
    int nbProd=modelLibProduits->rowCount();
    for(int coup=0;coup<nbProd;coup++)
    {
        QString texte=ui->listViewProduit->
    // si le produit correspond avec l'index testé par la boucle
     if(texte==prodLib)
        {
            //placer la combobox sur le produit qui correspond
            ui->listViewProduit->setModelColumn(coup);
        }
    }// fin for
    */
}

// fin fonctions d'affichage des informtions
/// //////////////////////////////////////////

// ajout
/// ////////

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

    QSqlQuery query2;
      query2.prepare("INSERT INTO sae_product (id_product, reference, active) "
                      "VALUES (?, ?, ?)");
      query2.addBindValue(numeroOk);
      QString refProd=ui->lineEditRef->text();
      query2.addBindValue(refProd);
      query2.addBindValue(1);
      query2.exec();

    QSqlQuery query3;
      query3.prepare("INSERT INTO sae_product_shop (id_product, id_shop, id_category_default, id_tax_rules_group, on_sale, online_only, active, show_price, available_for_order, indexed) "
                        "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
      query3.addBindValue(numeroOk);
      query3.addBindValue(1);
      query3.addBindValue(0);// ajoute le produit dans la catégorie (0) -aucune- (si la catégorie -aucune- existe)
                                /// LA CATEGORIE -aucune- DOIT ÊTRE CREER AU PREALABLE
      query3.addBindValue(0);
      query3.addBindValue(0);
      query3.addBindValue(0);
      query3.addBindValue(1);
      query3.addBindValue(1);
      query3.addBindValue(0);
      query3.addBindValue(1);
      query3.exec();

    // actualiser
    nouveauProduit();

    }
    else
    {
        qDebug()<<"vide";
    }
    ui->lineEditNouveauProduit->setText("");
}

void MainWindow::nouveauProduit()
{
    // recherche précise
    modelLibProduits=new QSqlQueryModel(this);
    QString recherche=ui->lineEditNouveauProduit->text();
    QString search="select name from sae_product_lang where name = '"+recherche+"' order by name asc";
    modelLibProduits->setQuery(search);
    ui->listViewProduit->setModel(modelLibProduits);
}

// fin ajout
/// ///////////

// update
/// //////////

// modifier information
void MainWindow::on_pushButtonModifInfo_clicked()
{
    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    // nouveau nom
    QString nom=ui->lineEditNom->text();

    QString upName= "update sae_product_lang set name='"+nom+"' where id_product="+idProd+"";
    QSqlQuery query2(upName);
    query2.next();

    // mise à jour de l'affichage
    actualiserProduit();
    // positionnement de l'index sur le produit modifier
    selectionAutoProduit();
    // réafficher les informations
    actualiserAffichageProduit();

}
// modifier description
void MainWindow::on_pushButtonModifDesc_clicked()
{
   // ...
}

// fun update
/// ///////////

// suppression
/// ///////////////

// supprimer le produit
void MainWindow::on_pushButtonSupprimerProduit_clicked()
{
    decocherSuppressionProduit();

    // récupération de l'id du produit
    QString labProd=ui->listViewProduit->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_product from sae_product_lang where name='"+labProd+"'");
    query.next();
    QString idProd = query.value(0).toString();

    //requetes suppression
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

    // actualisé recherche
    actualiserProduit();
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

// suppression du produit, actualisé la recherche
void MainWindow::actualiserProduit()
{
   // affiche tous les produits
   modelLibProduits=new QSqlQueryModel(this);
   QString search="select name from sae_product_lang where name like '%%' order by name asc";
   modelLibProduits->setQuery(search);
   ui->listViewProduit->setModel(modelLibProduits);

   actualiserAffichageProduit();
}

// fin suppression
/// //////////////////

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
    QString search="select name from sae_category_lang where name like '%"+recherche+"%' and name !='root' and name !='Accueil' and name !='-aucune-' order by name asc";
    modelLibCategories->setQuery(search);
    ui->listViewCategorie->setModel(modelLibCategories);
}


// FONCTIONS D'AFFICHAGE DES INFORMATIONS
/// ////////////////////////////////////////

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
/// //////////////////////////////////////////

// ajout
/// ////////

// NOUVELLE CATEGORIE
void MainWindow::on_pushButtonNouvelleCategorie_clicked()
{
    if(ui->lineEditNouvelleCategorie->text()!="")
    {
    QString newLib=ui->lineEditNouvelleCategorie->text();
    QSqlQuery maRequete("select max(id_category)+1 from sae_category_lang");
    maRequete.next();
    int numeroOk=maRequete.value(0).toInt();

    QSqlQuery query;
      query.prepare("INSERT INTO sae_category_lang (id_category, id_lang, name, link_rewrite) "
                    "VALUES (?, ?, ?, ?)");
      query.addBindValue(numeroOk);
      query.addBindValue(1);
      query.addBindValue(newLib);
      QString lien="linkCat"+QString::number(numeroOk);
      query.addBindValue(lien);
      query.exec();

    QSqlQuery query2;
      query2.prepare("INSERT INTO sae_category (id_category, id_parent, id_shop_default, level_depth, active) "
                      "VALUES (?, ?, ?, ?, ?)");
      query2.addBindValue(numeroOk);
      query2.addBindValue(2);
      query2.addBindValue(1);
      query2.addBindValue(2);
      query2.addBindValue(1);
      query2.exec();

      // group ? (on insert la catégorie dans les 3 groupes commes les autres produits)
     QSqlQuery query3;
        query3.prepare("INSERT INTO sae_category_group (id_category, id_group) "
                        "VALUES (?, ?)");
        query3.addBindValue(numeroOk);
        query3.addBindValue(1);
        query3.exec();

     QSqlQuery query4;
        query4.prepare("INSERT INTO sae_category_group (id_category, id_group) "
                        "VALUES (?, ?)");
        query4.addBindValue(numeroOk);
        query4.addBindValue(2);
        query4.exec();

     QSqlQuery query5;
        query5.prepare("INSERT INTO sae_category_group (id_category, id_group) "
                        "VALUES (?, ?)");
        query5.addBindValue(numeroOk);
        query5.addBindValue(3);
        query5.exec();


    // actualiser
    nouvelleCategorie();

    }
    else
    {
        qDebug()<<"vide";
    }
    ui->lineEditNouveauProduit->setText("");
}

void MainWindow::nouvelleCategorie()
{
    // recherche précise
    modelLibCategories=new QSqlQueryModel(this);
    QString recherche=ui->lineEditNouvelleCategorie->text();
    QString search="select name from sae_category_lang where name = '"+recherche+"' order by name asc";
    modelLibCategories->setQuery(search);
    ui->listViewCategorie->setModel(modelLibCategories);
}

// fin ajout
/// ///////////


// suppression
/// ///////////////

// supprimer la catégorie
void MainWindow::on_pushButtonSupprimerCategorie_clicked()
{
    decocherSuppressionCategorie();

    // récupération de l'id de la categorie
    QString labCat=ui->listViewCategorie->currentIndex().data(Qt::DisplayRole).toString();
    QSqlQuery query("select id_category from sae_category_lang where name='"+labCat+"'");
    query.next();
    QString idCat = query.value(0).toString();

    //requetes suppression
    QSqlQuery query2;
    QString req2="delete from sae_category_lang where id_category ="+idCat+"";
    query2.prepare(req2);
    query2.exec();
    QSqlQuery query3;
    QString req3="delete from sae_category where id_category ="+idCat+"";
    query3.prepare(req3);
    query3.exec();
    QSqlQuery query4;
    QString req4="delete from sae_category_attribute where id_category ="+idCat+"";
    query4.prepare(req4);
    query4.exec();
    QSqlQuery query5;
    QString req5="delete from sae_category_shop where id_category ="+idCat+"";
    query5.prepare(req5);
    query5.exec();
    QSqlQuery query6;
    QString req6="delete from sae_category_supplier where id_category ="+idCat+"";
    query6.prepare(req6);
    query6.exec();
    QSqlQuery query7;
    QString req7="delete from sae_category_group where id_category ="+idCat+"";
    query7.prepare(req7);
    query7.exec();

    // actualisé recherche
    actualiserCategorie();
}

// déchocher
void MainWindow::decocherSuppressionCategorie()
{
    ui->pushButtonSupprimerCategorie->setDisabled(true);
    ui->checkBoxSupprimerCategorie->setChecked(false);
}

// confirmation de suppression
void MainWindow::on_checkBoxSupprimerCategorie_clicked()
{
    if (ui->checkBoxSupprimerCategorie->isChecked())
    {
        ui->pushButtonSupprimerCategorie->setDisabled(false);
    }
    else
    {
        ui->pushButtonSupprimerCategorie->setDisabled(true);
    }
}

// suppression de la catégorie, actualisé la recherche
void MainWindow::actualiserCategorie()
{
   // affiche toutes les catégories
   modelLibCategories=new QSqlQueryModel(this);
   QString search="select name from sae_category_lang where name like '%%' and name!='root' and name !='Accueil' order by name asc";
   modelLibCategories->setQuery(search);
   ui->listViewCategorie->setModel(modelLibCategories);

   actualiserAffichageCategorie();
}

// fin suppression
/// //////////////////




/// fin catégorie //////////









