/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jun 11 17:40:09 2013
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDial>
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
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidgetFonctionnalites;
    QWidget *tab_3;
    QGridLayout *gridLayout_12;
    QStackedWidget *stackedWidget_9;
    QWidget *stackedWidget_9Page1;
    QGridLayout *gridLayout_17;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditResum;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_9;
    QTextEdit *textEditDesc;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_18;
    QDial *dial;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButtonModifDesc;
    QStackedWidget *stackedWidget_10;
    QWidget *stackedWidget_10Page1;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEditRecherche;
    QListView *listViewProduit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEditNouveauProduit;
    QPushButton *pushButtonAjoutProduit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditNom;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QLineEdit *lineEditPrix;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_12;
    QLineEdit *lineEditRef;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBoxCategorie;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QPushButton *pushButtonModifInfo;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBoxSupprimerProduit;
    QPushButton *pushButtonSupprimerProduit;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tab_4;
    QGridLayout *gridLayout_15;
    QStackedWidget *stackedWidget_11;
    QWidget *stackedWidget_11Page1;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEditRechercheCategorie;
    QListView *listViewCategorie;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEditNomCategorie;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxSupprimerCategorie;
    QPushButton *pushButtonSupprimerCategorie;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditNouvelleCategorie;
    QPushButton *pushButtonNouvelleCategorie;
    QStackedWidget *stackedWidget_12;
    QWidget *stackedWidget_12Page1;
    QGridLayout *gridLayout_14;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_7;
    QTextEdit *textEditDescCategorie;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_10;
    QPushButton *pushButtonModifDescCategorie;
    QWidget *tab_5;
    QGridLayout *gridLayout_16;
    QWidget *tab_6;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(810, 724);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tabWidgetFonctionnalites = new QTabWidget(centralWidget);
        tabWidgetFonctionnalites->setObjectName(QString::fromUtf8("tabWidgetFonctionnalites"));
        tabWidgetFonctionnalites->setMinimumSize(QSize(0, 0));
        tabWidgetFonctionnalites->setMaximumSize(QSize(16777215, 16777215));
        tabWidgetFonctionnalites->setElideMode(Qt::ElideNone);
        tabWidgetFonctionnalites->setMovable(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_12 = new QGridLayout(tab_3);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        stackedWidget_9 = new QStackedWidget(tab_3);
        stackedWidget_9->setObjectName(QString::fromUtf8("stackedWidget_9"));
        stackedWidget_9Page1 = new QWidget();
        stackedWidget_9Page1->setObjectName(QString::fromUtf8("stackedWidget_9Page1"));
        gridLayout_17 = new QGridLayout(stackedWidget_9Page1);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        groupBox_8 = new QGroupBox(stackedWidget_9Page1);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMaximumSize(QSize(16777215, 150));
        gridLayout_2 = new QGridLayout(groupBox_8);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEditResum = new QTextEdit(groupBox_8);
        textEditResum->setObjectName(QString::fromUtf8("textEditResum"));

        gridLayout_2->addWidget(textEditResum, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_8, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(stackedWidget_9Page1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_9 = new QGridLayout(groupBox_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        textEditDesc = new QTextEdit(groupBox_2);
        textEditDesc->setObjectName(QString::fromUtf8("textEditDesc"));

        gridLayout_9->addWidget(textEditDesc, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox_10 = new QGroupBox(stackedWidget_9Page1);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_18 = new QGridLayout(groupBox_10);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        dial = new QDial(groupBox_10);
        dial->setObjectName(QString::fromUtf8("dial"));

        gridLayout_18->addWidget(dial, 0, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_10, 2, 0, 1, 1);

        groupBox_9 = new QGroupBox(stackedWidget_9Page1);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_8 = new QGridLayout(groupBox_9);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        label_14 = new QLabel(groupBox_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 100));
        label_14->setMaximumSize(QSize(200, 200));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_14);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);


        gridLayout_8->addLayout(horizontalLayout_15, 0, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_13 = new QLabel(groupBox_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_14->addWidget(label_13);

        toolButton = new QToolButton(groupBox_9);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_14->addWidget(toolButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);


        gridLayout_8->addLayout(horizontalLayout_14, 1, 0, 1, 1);


        gridLayout_17->addWidget(groupBox_9, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(stackedWidget_9Page1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        pushButtonModifDesc = new QPushButton(stackedWidget_9Page1);
        pushButtonModifDesc->setObjectName(QString::fromUtf8("pushButtonModifDesc"));
        pushButtonModifDesc->setMinimumSize(QSize(24, 24));
        pushButtonModifDesc->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/modif+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifDesc->setIcon(icon);
        pushButtonModifDesc->setIconSize(QSize(24, 24));
        pushButtonModifDesc->setFlat(true);

        horizontalLayout_2->addWidget(pushButtonModifDesc);


        gridLayout_17->addLayout(horizontalLayout_2, 3, 0, 1, 2);

        stackedWidget_9->addWidget(stackedWidget_9Page1);

        gridLayout_12->addWidget(stackedWidget_9, 0, 1, 1, 1);

        stackedWidget_10 = new QStackedWidget(tab_3);
        stackedWidget_10->setObjectName(QString::fromUtf8("stackedWidget_10"));
        stackedWidget_10->setMaximumSize(QSize(500, 16777215));
        stackedWidget_10Page1 = new QWidget();
        stackedWidget_10Page1->setObjectName(QString::fromUtf8("stackedWidget_10Page1"));
        gridLayout_11 = new QGridLayout(stackedWidget_10Page1);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        groupBox = new QGroupBox(stackedWidget_10Page1);
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


        gridLayout_11->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(stackedWidget_10Page1);
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


        gridLayout_11->addWidget(groupBox_3, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(stackedWidget_10Page1);
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

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_12->addWidget(label_12);

        lineEditRef = new QLineEdit(groupBox_4);
        lineEditRef->setObjectName(QString::fromUtf8("lineEditRef"));
        lineEditRef->setMaximumSize(QSize(16777215, 16777215));
        lineEditRef->setFrame(false);

        horizontalLayout_12->addWidget(lineEditRef);


        gridLayout_4->addLayout(horizontalLayout_12, 1, 0, 1, 1);

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
        comboBoxCategorie = new QComboBox(groupBox_4);
        comboBoxCategorie->setObjectName(QString::fromUtf8("comboBoxCategorie"));
        comboBoxCategorie->setMinimumSize(QSize(200, 0));
        comboBoxCategorie->setMaximumSize(QSize(10000000, 16777215));

        verticalLayout->addWidget(comboBoxCategorie);

        comboBox_2 = new QComboBox(groupBox_4);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(200, 0));
        comboBox_2->setMaximumSize(QSize(10000000, 16777215));

        verticalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(groupBox_4);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(200, 0));
        comboBox_3->setMaximumSize(QSize(10000000, 16777215));

        verticalLayout->addWidget(comboBox_3);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        pushButtonModifInfo = new QPushButton(groupBox_4);
        pushButtonModifInfo->setObjectName(QString::fromUtf8("pushButtonModifInfo"));
        pushButtonModifInfo->setMinimumSize(QSize(24, 24));
        pushButtonModifInfo->setMaximumSize(QSize(24, 24));
        pushButtonModifInfo->setIcon(icon);
        pushButtonModifInfo->setIconSize(QSize(24, 24));
        pushButtonModifInfo->setFlat(true);

        horizontalLayout_3->addWidget(pushButtonModifInfo);


        gridLayout_4->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        checkBoxSupprimerProduit = new QCheckBox(groupBox_4);
        checkBoxSupprimerProduit->setObjectName(QString::fromUtf8("checkBoxSupprimerProduit"));
        checkBoxSupprimerProduit->setEnabled(true);

        horizontalLayout_11->addWidget(checkBoxSupprimerProduit);

        pushButtonSupprimerProduit = new QPushButton(groupBox_4);
        pushButtonSupprimerProduit->setObjectName(QString::fromUtf8("pushButtonSupprimerProduit"));
        pushButtonSupprimerProduit->setEnabled(false);
        pushButtonSupprimerProduit->setMinimumSize(QSize(24, 24));
        pushButtonSupprimerProduit->setMaximumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/del+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimerProduit->setIcon(icon2);
        pushButtonSupprimerProduit->setFlat(true);

        horizontalLayout_11->addWidget(pushButtonSupprimerProduit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_11, 4, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_4, 1, 0, 1, 1);

        stackedWidget_10->addWidget(stackedWidget_10Page1);

        gridLayout_12->addWidget(stackedWidget_10, 0, 0, 1, 1);

        tabWidgetFonctionnalites->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_15 = new QGridLayout(tab_4);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        stackedWidget_11 = new QStackedWidget(tab_4);
        stackedWidget_11->setObjectName(QString::fromUtf8("stackedWidget_11"));
        stackedWidget_11->setMaximumSize(QSize(500, 16777215));
        stackedWidget_11Page1 = new QWidget();
        stackedWidget_11Page1->setObjectName(QString::fromUtf8("stackedWidget_11Page1"));
        gridLayout_13 = new QGridLayout(stackedWidget_11Page1);
        gridLayout_13->setSpacing(0);
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_5 = new QGroupBox(stackedWidget_11Page1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEditRechercheCategorie = new QLineEdit(groupBox_5);
        lineEditRechercheCategorie->setObjectName(QString::fromUtf8("lineEditRechercheCategorie"));

        horizontalLayout_9->addWidget(lineEditRechercheCategorie);


        gridLayout_6->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        listViewCategorie = new QListView(groupBox_5);
        listViewCategorie->setObjectName(QString::fromUtf8("listViewCategorie"));

        gridLayout_6->addWidget(listViewCategorie, 1, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        lineEditNomCategorie = new QLineEdit(groupBox_5);
        lineEditNomCategorie->setObjectName(QString::fromUtf8("lineEditNomCategorie"));
        lineEditNomCategorie->setMaximumSize(QSize(16777215, 16777215));
        lineEditNomCategorie->setFrame(false);

        horizontalLayout_10->addWidget(lineEditNomCategorie);


        gridLayout_6->addLayout(horizontalLayout_10, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxSupprimerCategorie = new QCheckBox(groupBox_5);
        checkBoxSupprimerCategorie->setObjectName(QString::fromUtf8("checkBoxSupprimerCategorie"));

        horizontalLayout->addWidget(checkBoxSupprimerCategorie);

        pushButtonSupprimerCategorie = new QPushButton(groupBox_5);
        pushButtonSupprimerCategorie->setObjectName(QString::fromUtf8("pushButtonSupprimerCategorie"));
        pushButtonSupprimerCategorie->setEnabled(false);
        pushButtonSupprimerCategorie->setMinimumSize(QSize(24, 24));
        pushButtonSupprimerCategorie->setMaximumSize(QSize(24, 24));
        pushButtonSupprimerCategorie->setIcon(icon2);
        pushButtonSupprimerCategorie->setFlat(true);

        horizontalLayout->addWidget(pushButtonSupprimerCategorie);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_6->addLayout(horizontalLayout, 3, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(stackedWidget_11Page1);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEditNouvelleCategorie = new QLineEdit(groupBox_6);
        lineEditNouvelleCategorie->setObjectName(QString::fromUtf8("lineEditNouvelleCategorie"));

        horizontalLayout_5->addWidget(lineEditNouvelleCategorie);

        pushButtonNouvelleCategorie = new QPushButton(groupBox_6);
        pushButtonNouvelleCategorie->setObjectName(QString::fromUtf8("pushButtonNouvelleCategorie"));
        pushButtonNouvelleCategorie->setMinimumSize(QSize(24, 24));
        pushButtonNouvelleCategorie->setMaximumSize(QSize(24, 24));
        pushButtonNouvelleCategorie->setIcon(icon1);
        pushButtonNouvelleCategorie->setFlat(true);

        horizontalLayout_5->addWidget(pushButtonNouvelleCategorie);


        gridLayout_5->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_6, 1, 0, 1, 1);

        stackedWidget_11->addWidget(stackedWidget_11Page1);

        gridLayout_15->addWidget(stackedWidget_11, 0, 0, 1, 1);

        stackedWidget_12 = new QStackedWidget(tab_4);
        stackedWidget_12->setObjectName(QString::fromUtf8("stackedWidget_12"));
        stackedWidget_12Page1 = new QWidget();
        stackedWidget_12Page1->setObjectName(QString::fromUtf8("stackedWidget_12Page1"));
        gridLayout_14 = new QGridLayout(stackedWidget_12Page1);
        gridLayout_14->setSpacing(0);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        groupBox_7 = new QGroupBox(stackedWidget_12Page1);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_7 = new QGridLayout(groupBox_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        textEditDescCategorie = new QTextEdit(groupBox_7);
        textEditDescCategorie->setObjectName(QString::fromUtf8("textEditDescCategorie"));

        gridLayout_7->addWidget(textEditDescCategorie, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);

        pushButtonModifDescCategorie = new QPushButton(groupBox_7);
        pushButtonModifDescCategorie->setObjectName(QString::fromUtf8("pushButtonModifDescCategorie"));
        pushButtonModifDescCategorie->setMinimumSize(QSize(24, 24));
        pushButtonModifDescCategorie->setMaximumSize(QSize(24, 24));
        pushButtonModifDescCategorie->setIcon(icon);
        pushButtonModifDescCategorie->setIconSize(QSize(24, 24));
        pushButtonModifDescCategorie->setFlat(true);

        horizontalLayout_6->addWidget(pushButtonModifDescCategorie);


        gridLayout_7->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        gridLayout_14->addWidget(groupBox_7, 0, 0, 1, 1);

        stackedWidget_12->addWidget(stackedWidget_12Page1);

        gridLayout_15->addWidget(stackedWidget_12, 0, 1, 2, 1);

        tabWidgetFonctionnalites->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_16 = new QGridLayout(tab_5);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        tabWidgetFonctionnalites->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidgetFonctionnalites->addTab(tab_6, QString());

        gridLayout_10->addWidget(tabWidgetFonctionnalites, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 810, 25));
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
        groupBox_8->setTitle(QApplication::translate("MainWindow", "R\303\251sum\303\251 :", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Description :", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Outils :", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "Image :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "aper\303\247u", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Chemin :", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Valider les modifications :", 0, QApplication::UnicodeUTF8));
        pushButtonModifDesc->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Produits :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "recherche :", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Nouveau produit :", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutProduit->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Informations :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Prix :", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\342\202\254 ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Ref :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Cat\303\251gorie :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Fournisseur :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Fabricant :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Valider les modifications :", 0, QApplication::UnicodeUTF8));
        pushButtonModifInfo->setText(QString());
        checkBoxSupprimerProduit->setText(QApplication::translate("MainWindow", "Supprimer ce produit :", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerProduit->setText(QString());
        tabWidgetFonctionnalites->setTabText(tabWidgetFonctionnalites->indexOf(tab_3), QApplication::translate("MainWindow", "Produits", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Gestion des cat\303\251gories :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "recherche :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "D\303\251signation :", 0, QApplication::UnicodeUTF8));
        checkBoxSupprimerCategorie->setText(QApplication::translate("MainWindow", "Supprimer cette cat\303\251gorie :", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerCategorie->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Nouvelle cat\303\251gorie :", 0, QApplication::UnicodeUTF8));
        pushButtonNouvelleCategorie->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Description :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Valider les modifications :", 0, QApplication::UnicodeUTF8));
        pushButtonModifDescCategorie->setText(QString());
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
