/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jun 6 17:33:39 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidgetFonctionnalites;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEditRecherche;
    QListView *listViewProduit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditDesc;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButtonModifDesc;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditNom;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *lineEditPrix;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QPushButton *pushButtonModifDesc_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEditNouveauProduit;
    QPushButton *pushButtonAjoutProduit;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *tab_6;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(752, 641);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidgetFonctionnalites = new QTabWidget(centralWidget);
        tabWidgetFonctionnalites->setObjectName(QString::fromUtf8("tabWidgetFonctionnalites"));
        tabWidgetFonctionnalites->setMinimumSize(QSize(0, 0));
        tabWidgetFonctionnalites->setMaximumSize(QSize(16777215, 16777215));
        tabWidgetFonctionnalites->setElideMode(Qt::ElideNone);
        tabWidgetFonctionnalites->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEditRecherche = new QLineEdit(groupBox);
        lineEditRecherche->setObjectName(QString::fromUtf8("lineEditRecherche"));

        horizontalLayout_8->addWidget(lineEditRecherche);


        gridLayout_3->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        listViewProduit = new QListView(groupBox);
        listViewProduit->setObjectName(QString::fromUtf8("listViewProduit"));

        gridLayout_3->addWidget(listViewProduit, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEditDesc = new QTextEdit(groupBox_2);
        textEditDesc->setObjectName(QString::fromUtf8("textEditDesc"));

        gridLayout_2->addWidget(textEditDesc, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        pushButtonModifDesc = new QPushButton(groupBox_2);
        pushButtonModifDesc->setObjectName(QString::fromUtf8("pushButtonModifDesc"));
        pushButtonModifDesc->setMinimumSize(QSize(24, 24));
        pushButtonModifDesc->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/modif+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifDesc->setIcon(icon);
        pushButtonModifDesc->setIconSize(QSize(24, 24));
        pushButtonModifDesc->setFlat(true);

        horizontalLayout_2->addWidget(pushButtonModifDesc);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 1, 2, 1);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEditNom = new QLineEdit(groupBox_4);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setMaximumSize(QSize(16777215, 16777215));
        lineEditNom->setFrame(false);

        horizontalLayout_7->addWidget(lineEditNom);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5);

        lineEditPrix = new QLineEdit(groupBox_4);
        lineEditPrix->setObjectName(QString::fromUtf8("lineEditPrix"));
        lineEditPrix->setMinimumSize(QSize(75, 0));
        lineEditPrix->setMaximumSize(QSize(75, 16777215));
        lineEditPrix->setFrame(false);

        horizontalLayout_7->addWidget(lineEditPrix);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);


        gridLayout_4->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox = new QComboBox(groupBox_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(200, 0));
        comboBox->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(200, 0));
        comboBox_2->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(groupBox_4);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(200, 0));
        comboBox_3->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(comboBox_3);


        horizontalLayout_4->addLayout(verticalLayout);


        gridLayout_4->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        pushButtonModifDesc_2 = new QPushButton(groupBox_4);
        pushButtonModifDesc_2->setObjectName(QString::fromUtf8("pushButtonModifDesc_2"));
        pushButtonModifDesc_2->setMinimumSize(QSize(24, 24));
        pushButtonModifDesc_2->setMaximumSize(QSize(24, 24));
        pushButtonModifDesc_2->setIcon(icon);
        pushButtonModifDesc_2->setIconSize(QSize(24, 24));
        pushButtonModifDesc_2->setFlat(true);

        horizontalLayout_3->addWidget(pushButtonModifDesc_2);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditNouveauProduit = new QLineEdit(groupBox_3);
        lineEditNouveauProduit->setObjectName(QString::fromUtf8("lineEditNouveauProduit"));

        gridLayout->addWidget(lineEditNouveauProduit, 0, 0, 1, 1);

        pushButtonAjoutProduit = new QPushButton(groupBox_3);
        pushButtonAjoutProduit->setObjectName(QString::fromUtf8("pushButtonAjoutProduit"));
        pushButtonAjoutProduit->setMinimumSize(QSize(24, 24));
        pushButtonAjoutProduit->setMaximumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/add+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAjoutProduit->setIcon(icon1);
        pushButtonAjoutProduit->setFlat(true);

        gridLayout->addWidget(pushButtonAjoutProduit, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 2, 0, 1, 1);

        tabWidgetFonctionnalites->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidgetFonctionnalites->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidgetFonctionnalites->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidgetFonctionnalites->addTab(tab_6, QString());

        horizontalLayout->addWidget(tabWidgetFonctionnalites);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 752, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        tabWidgetFonctionnalites->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion Site web SAE", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Produits :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "recherche :", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Description :", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Valider les modifications :", 0, QApplication::UnicodeUTF8));
        pushButtonModifDesc->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Informations :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Prix :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\342\202\254 ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Cat\303\251gorie :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Fournisseur :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Fabricant :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Valider les modifications :", 0, QApplication::UnicodeUTF8));
        pushButtonModifDesc_2->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Nouveau produit :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutProduit->setText(QString());
        tabWidgetFonctionnalites->setTabText(tabWidgetFonctionnalites->indexOf(tab_3), QApplication::translate("MainWindow", "Produits", 0, QApplication::UnicodeUTF8));
        tabWidgetFonctionnalites->setTabText(tabWidgetFonctionnalites->indexOf(tab_4), QApplication::translate("MainWindow", "Cat\303\251gories", 0, QApplication::UnicodeUTF8));
        tabWidgetFonctionnalites->setTabText(tabWidgetFonctionnalites->indexOf(tab_5), QApplication::translate("MainWindow", "Fournisseurs", 0, QApplication::UnicodeUTF8));
        tabWidgetFonctionnalites->setTabText(tabWidgetFonctionnalites->indexOf(tab_6), QApplication::translate("MainWindow", "Fabricants", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
