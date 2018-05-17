/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionReplay;
    QAction *actionStop;
    QAction *actionLookupState;
    QAction *actionShowThumbnails;
    QAction *actionTrim;
    QAction *actionOptions;
    QAction *actionNew;
    QAction *actionFind;
    QAction *actionGo;
    QAction *actionGoFrameStart;
    QAction *actionGoFrameEnd;
    QAction *actionShowErrorsDock;
    QAction *actionShowProfileDialog;
    QAction *actionProfile;
    QAction *actionLeakTrace;
    QWidget *centralwidget;
    QVBoxLayout *centralLayout;
    QTreeView *callView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menu_Trace;
    QMenu *menuView;
    QStatusBar *statusbar;
    QDockWidget *detailsDock;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *detailsWebView;
    QDockWidget *stateDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *stateTabWidget;
    QWidget *parametersTab;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *nonDefaultsCB;
    QTreeWidget *stateTreeWidget;
    QWidget *shadersTab;
    QWidget *surfacesTab;
    QGridLayout *gridLayout;
    QCheckBox *surfacesOpaqueCB;
    QCheckBox *surfacesAlphaCB;
    QCheckBox *surfacesResolveMSAA;
    QTreeWidget *surfacesTreeWidget;
    QWidget *uniformsTab;
    QVBoxLayout *verticalLayout_6;
    QTreeWidget *uniformsTreeWidget;
    QWidget *buffersTab;
    QVBoxLayout *verticalLayout_7;
    QTreeWidget *buffersTreeWidget;
    QWidget *ssbTab;
    QVBoxLayout *verticalLayout_8;
    QTreeWidget *ssbsTreeWidget;
    QDockWidget *vertexDataDock;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *vertexTypeCB;
    QLabel *label_2;
    QSpinBox *vertexStrideSB;
    QLabel *label_4;
    QSpinBox *vertexComponentsSB;
    QLabel *label_3;
    QSpinBox *startingOffsetSB;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *vertexInterpretButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bufferExportButton;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *vertexDataListWidget;
    QDockWidget *errorsDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_4;
    QTreeWidget *errorsTreeWidget;
    QDockWidget *backtraceDock;
    QWidget *dockWidgetContents_5;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *backtraceBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 756);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit_2 = new QAction(MainWindow);
        actionExit_2->setObjectName(QStringLiteral("actionExit_2"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/document-edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionQuit->setShortcutContext(Qt::ApplicationShortcut);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionReplay = new QAction(MainWindow);
        actionReplay->setObjectName(QStringLiteral("actionReplay"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/media-playback-start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplay->setIcon(icon3);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/media-playback-stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon4);
        actionLookupState = new QAction(MainWindow);
        actionLookupState->setObjectName(QStringLiteral("actionLookupState"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/media-record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLookupState->setIcon(icon5);
        actionShowThumbnails = new QAction(MainWindow);
        actionShowThumbnails->setObjectName(QStringLiteral("actionShowThumbnails"));
        actionTrim = new QAction(MainWindow);
        actionTrim->setObjectName(QStringLiteral("actionTrim"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon6);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon7);
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QStringLiteral("actionGo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/go-jump.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo->setIcon(icon8);
        actionGoFrameStart = new QAction(MainWindow);
        actionGoFrameStart->setObjectName(QStringLiteral("actionGoFrameStart"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/go-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGoFrameStart->setIcon(icon9);
        actionGoFrameEnd = new QAction(MainWindow);
        actionGoFrameEnd->setObjectName(QStringLiteral("actionGoFrameEnd"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/go-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGoFrameEnd->setIcon(icon10);
        actionShowErrorsDock = new QAction(MainWindow);
        actionShowErrorsDock->setObjectName(QStringLiteral("actionShowErrorsDock"));
        actionShowErrorsDock->setCheckable(true);
        actionShowErrorsDock->setEnabled(false);
        actionShowProfileDialog = new QAction(MainWindow);
        actionShowProfileDialog->setObjectName(QStringLiteral("actionShowProfileDialog"));
        actionShowProfileDialog->setEnabled(false);
        actionProfile = new QAction(MainWindow);
        actionProfile->setObjectName(QStringLiteral("actionProfile"));
        actionLeakTrace = new QAction(MainWindow);
        actionLeakTrace->setObjectName(QStringLiteral("actionLeakTrace"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralLayout = new QVBoxLayout(centralwidget);
        centralLayout->setObjectName(QStringLiteral("centralLayout"));
        callView = new QTreeView(centralwidget);
        callView->setObjectName(QStringLiteral("callView"));
        callView->setAlternatingRowColors(true);
        callView->setTextElideMode(Qt::ElideMiddle);
        callView->setUniformRowHeights(true);

        centralLayout->addWidget(callView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 787, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menu_Trace = new QMenu(menubar);
        menu_Trace->setObjectName(QStringLiteral("menu_Trace"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        detailsDock = new QDockWidget(MainWindow);
        detailsDock->setObjectName(QStringLiteral("detailsDock"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(detailsDock->sizePolicy().hasHeightForWidth());
        detailsDock->setSizePolicy(sizePolicy);
        detailsDock->setMinimumSize(QSize(85, 100));
        detailsDock->setFloating(false);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        detailsWebView = new QTextBrowser(dockWidgetContents);
        detailsWebView->setObjectName(QStringLiteral("detailsWebView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(detailsWebView->sizePolicy().hasHeightForWidth());
        detailsWebView->setSizePolicy(sizePolicy1);
        detailsWebView->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(detailsWebView);

        detailsDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), detailsDock);
        stateDock = new QDockWidget(MainWindow);
        stateDock->setObjectName(QStringLiteral("stateDock"));
        stateDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stateTabWidget = new QTabWidget(dockWidgetContents_2);
        stateTabWidget->setObjectName(QStringLiteral("stateTabWidget"));
        parametersTab = new QWidget();
        parametersTab->setObjectName(QStringLiteral("parametersTab"));
        verticalLayout_3 = new QVBoxLayout(parametersTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        nonDefaultsCB = new QCheckBox(parametersTab);
        nonDefaultsCB->setObjectName(QStringLiteral("nonDefaultsCB"));

        verticalLayout_3->addWidget(nonDefaultsCB);

        stateTreeWidget = new QTreeWidget(parametersTab);
        stateTreeWidget->setObjectName(QStringLiteral("stateTreeWidget"));
        stateTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stateTreeWidget->setAlternatingRowColors(true);
        stateTreeWidget->setSortingEnabled(true);
        stateTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_3->addWidget(stateTreeWidget);

        stateTabWidget->addTab(parametersTab, QString());
        shadersTab = new QWidget();
        shadersTab->setObjectName(QStringLiteral("shadersTab"));
        stateTabWidget->addTab(shadersTab, QString());
        surfacesTab = new QWidget();
        surfacesTab->setObjectName(QStringLiteral("surfacesTab"));
        gridLayout = new QGridLayout(surfacesTab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        surfacesOpaqueCB = new QCheckBox(surfacesTab);
        surfacesOpaqueCB->setObjectName(QStringLiteral("surfacesOpaqueCB"));

        gridLayout->addWidget(surfacesOpaqueCB, 1, 0, 1, 1);

        surfacesAlphaCB = new QCheckBox(surfacesTab);
        surfacesAlphaCB->setObjectName(QStringLiteral("surfacesAlphaCB"));

        gridLayout->addWidget(surfacesAlphaCB, 1, 1, 1, 1);

        surfacesResolveMSAA = new QCheckBox(surfacesTab);
        surfacesResolveMSAA->setObjectName(QStringLiteral("surfacesResolveMSAA"));
        surfacesResolveMSAA->setChecked(true);

        gridLayout->addWidget(surfacesResolveMSAA, 1, 2, 1, 1);

        surfacesTreeWidget = new QTreeWidget(surfacesTab);
        surfacesTreeWidget->setObjectName(QStringLiteral("surfacesTreeWidget"));

        gridLayout->addWidget(surfacesTreeWidget, 0, 0, 1, 3);

        stateTabWidget->addTab(surfacesTab, QString());
        uniformsTab = new QWidget();
        uniformsTab->setObjectName(QStringLiteral("uniformsTab"));
        verticalLayout_6 = new QVBoxLayout(uniformsTab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        uniformsTreeWidget = new QTreeWidget(uniformsTab);
        uniformsTreeWidget->setObjectName(QStringLiteral("uniformsTreeWidget"));
        uniformsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        uniformsTreeWidget->setAlternatingRowColors(true);
        uniformsTreeWidget->setSortingEnabled(true);
        uniformsTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_6->addWidget(uniformsTreeWidget);

        stateTabWidget->addTab(uniformsTab, QString());
        buffersTab = new QWidget();
        buffersTab->setObjectName(QStringLiteral("buffersTab"));
        verticalLayout_7 = new QVBoxLayout(buffersTab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        buffersTreeWidget = new QTreeWidget(buffersTab);
        buffersTreeWidget->setObjectName(QStringLiteral("buffersTreeWidget"));
        buffersTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        buffersTreeWidget->setAlternatingRowColors(true);
        buffersTreeWidget->setSortingEnabled(false);
        buffersTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_7->addWidget(buffersTreeWidget);

        stateTabWidget->addTab(buffersTab, QString());
        ssbTab = new QWidget();
        ssbTab->setObjectName(QStringLiteral("ssbTab"));
        verticalLayout_8 = new QVBoxLayout(ssbTab);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        ssbsTreeWidget = new QTreeWidget(ssbTab);
        ssbsTreeWidget->setObjectName(QStringLiteral("ssbsTreeWidget"));
        ssbsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ssbsTreeWidget->setAlternatingRowColors(true);
        ssbsTreeWidget->setAllColumnsShowFocus(true);

        verticalLayout_8->addWidget(ssbsTreeWidget);

        stateTabWidget->addTab(ssbTab, QString());

        verticalLayout->addWidget(stateTabWidget);

        stateDock->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), stateDock);
        vertexDataDock = new QDockWidget(MainWindow);
        vertexDataDock->setObjectName(QStringLiteral("vertexDataDock"));
        vertexDataDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label = new QLabel(dockWidgetContents_3);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        vertexTypeCB = new QComboBox(dockWidgetContents_3);
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->addItem(QString());
        vertexTypeCB->setObjectName(QStringLiteral("vertexTypeCB"));

        formLayout->setWidget(0, QFormLayout::FieldRole, vertexTypeCB);

        label_2 = new QLabel(dockWidgetContents_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        vertexStrideSB = new QSpinBox(dockWidgetContents_3);
        vertexStrideSB->setObjectName(QStringLiteral("vertexStrideSB"));
        vertexStrideSB->setMaximum(1000);
        vertexStrideSB->setValue(8);

        formLayout->setWidget(1, QFormLayout::FieldRole, vertexStrideSB);

        label_4 = new QLabel(dockWidgetContents_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        vertexComponentsSB = new QSpinBox(dockWidgetContents_3);
        vertexComponentsSB->setObjectName(QStringLiteral("vertexComponentsSB"));
        vertexComponentsSB->setMinimum(1);
        vertexComponentsSB->setMaximum(256);
        vertexComponentsSB->setValue(4);

        formLayout->setWidget(2, QFormLayout::FieldRole, vertexComponentsSB);

        label_3 = new QLabel(dockWidgetContents_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        startingOffsetSB = new QSpinBox(dockWidgetContents_3);
        startingOffsetSB->setObjectName(QStringLiteral("startingOffsetSB"));
        startingOffsetSB->setMaximum(1024);

        formLayout->setWidget(3, QFormLayout::FieldRole, startingOffsetSB);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        vertexInterpretButton = new QPushButton(dockWidgetContents_3);
        vertexInterpretButton->setObjectName(QStringLiteral("vertexInterpretButton"));

        horizontalLayout_3->addWidget(vertexInterpretButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        bufferExportButton = new QPushButton(dockWidgetContents_3);
        bufferExportButton->setObjectName(QStringLiteral("bufferExportButton"));

        horizontalLayout_3->addWidget(bufferExportButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        vertexDataListWidget = new QListWidget(dockWidgetContents_3);
        vertexDataListWidget->setObjectName(QStringLiteral("vertexDataListWidget"));

        verticalLayout_2->addWidget(vertexDataListWidget);

        vertexDataDock->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), vertexDataDock);
        errorsDock = new QDockWidget(MainWindow);
        errorsDock->setObjectName(QStringLiteral("errorsDock"));
        errorsDock->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        errorsTreeWidget = new QTreeWidget(dockWidgetContents_4);
        errorsTreeWidget->setObjectName(QStringLiteral("errorsTreeWidget"));
        errorsTreeWidget->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_4->addWidget(errorsTreeWidget);

        errorsDock->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), errorsDock);
        backtraceDock = new QDockWidget(MainWindow);
        backtraceDock->setObjectName(QStringLiteral("backtraceDock"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        backtraceBrowser = new QTextBrowser(dockWidgetContents_5);
        backtraceBrowser->setObjectName(QStringLiteral("backtraceBrowser"));

        horizontalLayout->addWidget(backtraceBrowser);

        backtraceDock->setWidget(dockWidgetContents_5);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), backtraceDock);
        stateDock->raise();
        vertexDataDock->raise();
        errorsDock->raise();
        backtraceDock->raise();

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menu_Trace->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionGo);
        menuEdit->addAction(actionGoFrameStart);
        menuEdit->addAction(actionGoFrameEnd);
        menu_Trace->addAction(actionReplay);
        menu_Trace->addAction(actionProfile);
        menu_Trace->addAction(actionStop);
        menu_Trace->addAction(actionLookupState);
        menu_Trace->addAction(actionShowThumbnails);
        menu_Trace->addAction(actionTrim);
        menu_Trace->addAction(actionLeakTrace);
        menu_Trace->addSeparator();
        menu_Trace->addAction(actionOptions);
        menuView->addAction(actionShowErrorsDock);
        menuView->addAction(actionShowProfileDialog);

        retranslateUi(MainWindow);

        stateTabWidget->setCurrentIndex(0);
        vertexTypeCB->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ApiTrace", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionExit_2->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "&Save As...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionReplay->setText(QApplication::translate("MainWindow", "&Replay", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReplay->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionStop->setText(QApplication::translate("MainWindow", "&Stop", nullptr));
        actionLookupState->setText(QApplication::translate("MainWindow", "Lookup State", nullptr));
#ifndef QT_NO_SHORTCUT
        actionLookupState->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowThumbnails->setText(QApplication::translate("MainWindow", "Show &Thumbnails", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowThumbnails->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionTrim->setText(QApplication::translate("MainWindow", "Tr&im", nullptr));
#ifndef QT_NO_SHORTCUT
        actionTrim->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionOptions->setText(QApplication::translate("MainWindow", "Options", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "&New...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionFind->setText(QApplication::translate("MainWindow", "&Find", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFind->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionGo->setText(QApplication::translate("MainWindow", "Go to Call", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGo->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionGoFrameStart->setText(QApplication::translate("MainWindow", "Go to Frame Start", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGoFrameStart->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionGoFrameEnd->setText(QApplication::translate("MainWindow", "Go to Frame End", nullptr));
#ifndef QT_NO_SHORTCUT
        actionGoFrameEnd->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowErrorsDock->setText(QApplication::translate("MainWindow", "Show &Errors Dock", nullptr));
        actionShowProfileDialog->setText(QApplication::translate("MainWindow", "Show &Profile Results", nullptr));
        actionProfile->setText(QApplication::translate("MainWindow", "&Profile", nullptr));
#ifndef QT_NO_SHORTCUT
        actionProfile->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionLeakTrace->setText(QApplication::translate("MainWindow", "&LeakTrace", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLeakTrace->setToolTip(QApplication::translate("MainWindow", "trace opengl object leaks", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menu_Trace->setTitle(QApplication::translate("MainWindow", "&Trace", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        detailsDock->setWindowTitle(QApplication::translate("MainWindow", "Call Details", nullptr));
        stateDock->setWindowTitle(QApplication::translate("MainWindow", "Current State", nullptr));
        nonDefaultsCB->setText(QApplication::translate("MainWindow", "Only show non-defaults", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = stateTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Variable", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(parametersTab), QApplication::translate("MainWindow", "Parameters", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(shadersTab), QApplication::translate("MainWindow", "Shaders", nullptr));
        surfacesOpaqueCB->setText(QApplication::translate("MainWindow", "Opaque", nullptr));
        surfacesAlphaCB->setText(QApplication::translate("MainWindow", "Alpha", nullptr));
        surfacesResolveMSAA->setText(QApplication::translate("MainWindow", "Resolve (MSAA)", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = surfacesTreeWidget->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "Description", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Thumbnail", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(surfacesTab), QApplication::translate("MainWindow", "Surfaces", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = uniformsTreeWidget->headerItem();
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(uniformsTab), QApplication::translate("MainWindow", "Uniforms", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = buffersTreeWidget->headerItem();
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(buffersTab), QApplication::translate("MainWindow", "Buffers", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ssbsTreeWidget->headerItem();
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "Value", nullptr));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Name", nullptr));
        stateTabWidget->setTabText(stateTabWidget->indexOf(ssbTab), QApplication::translate("MainWindow", "SSBBs", nullptr));
        stateTabWidget->setTabToolTip(stateTabWidget->indexOf(ssbTab), QApplication::translate("MainWindow", "Shader Storage Buffer Blocks", nullptr));
        vertexDataDock->setWindowTitle(QApplication::translate("MainWindow", "Vertex Data", nullptr));
        label->setText(QApplication::translate("MainWindow", "Type", nullptr));
        vertexTypeCB->setItemText(0, QApplication::translate("MainWindow", "GL_BYTE", nullptr));
        vertexTypeCB->setItemText(1, QApplication::translate("MainWindow", "GL_UNSIGNED_BYTE", nullptr));
        vertexTypeCB->setItemText(2, QApplication::translate("MainWindow", "GL_SHORT", nullptr));
        vertexTypeCB->setItemText(3, QApplication::translate("MainWindow", "GL_UNSIGNED_SHORT", nullptr));
        vertexTypeCB->setItemText(4, QApplication::translate("MainWindow", "GL_INT", nullptr));
        vertexTypeCB->setItemText(5, QApplication::translate("MainWindow", "GL_UNSIGNED_INT", nullptr));
        vertexTypeCB->setItemText(6, QApplication::translate("MainWindow", "GL_FLOAT", nullptr));
        vertexTypeCB->setItemText(7, QApplication::translate("MainWindow", "GL_DOUBLE", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Stride", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Components", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Starting Offset", nullptr));
        vertexInterpretButton->setText(QApplication::translate("MainWindow", "Interpret", nullptr));
        bufferExportButton->setText(QApplication::translate("MainWindow", "Export", nullptr));
        errorsDock->setWindowTitle(QApplication::translate("MainWindow", "Errors", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = errorsTreeWidget->headerItem();
        ___qtreewidgetitem5->setText(2, QApplication::translate("MainWindow", "Error", nullptr));
        ___qtreewidgetitem5->setText(1, QApplication::translate("MainWindow", "Type", nullptr));
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Index", nullptr));
        backtraceDock->setWindowTitle(QApplication::translate("MainWindow", "Backtrace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
