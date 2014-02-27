/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionVersion;
    QAction *actionHelp;
    QAction *actionRoom;
    QAction *actionKitchen;
    QAction *actionHall;
    QAction *actionBathroom;
    QAction *actionOthers;
    QAction *actionOptions;
    QAction *actionHome;
    QAction *actionSettings;
    QAction *actionSave;
    QAction *actionClock;
    QAction *actionAlarm_clock;
    QAction *actionOverall_power;
    QAction *actionNetConnect;
    QAction *actionNetDisconnect;
    QAction *actionNetOverview;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuInfo;
    QMenu *menuAreas;
    QMenu *menuBasic_controls;
    QMenu *menuNet_connection;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(857, 479);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images_icons/icons/029.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QStringLiteral("actionVersion"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images_icons/icons/023.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVersion->setIcon(icon1);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images_icons/icons/002 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionRoom = new QAction(MainWindow);
        actionRoom->setObjectName(QStringLiteral("actionRoom"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images_icons/icons/068.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRoom->setIcon(icon3);
        actionKitchen = new QAction(MainWindow);
        actionKitchen->setObjectName(QStringLiteral("actionKitchen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images_icons/icons/014.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionKitchen->setIcon(icon4);
        actionHall = new QAction(MainWindow);
        actionHall->setObjectName(QStringLiteral("actionHall"));
        actionBathroom = new QAction(MainWindow);
        actionBathroom->setObjectName(QStringLiteral("actionBathroom"));
        actionOthers = new QAction(MainWindow);
        actionOthers->setObjectName(QStringLiteral("actionOthers"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images_icons/icons/014 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOptions->setIcon(icon5);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images_icons/icons/001.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon6);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images_icons/icons/026.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon7);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images_icons/icons/008.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon8);
        actionClock = new QAction(MainWindow);
        actionClock->setObjectName(QStringLiteral("actionClock"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images_icons/icons/035.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClock->setIcon(icon9);
        actionAlarm_clock = new QAction(MainWindow);
        actionAlarm_clock->setObjectName(QStringLiteral("actionAlarm_clock"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images_icons/icons/004.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlarm_clock->setIcon(icon10);
        actionOverall_power = new QAction(MainWindow);
        actionOverall_power->setObjectName(QStringLiteral("actionOverall_power"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images_icons/icons/016 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOverall_power->setIcon(icon11);
        actionNetConnect = new QAction(MainWindow);
        actionNetConnect->setObjectName(QStringLiteral("actionNetConnect"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images_icons/icons/049 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetConnect->setIcon(icon12);
        actionNetDisconnect = new QAction(MainWindow);
        actionNetDisconnect->setObjectName(QStringLiteral("actionNetDisconnect"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images_icons/icons/050.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetDisconnect->setIcon(icon13);
        actionNetOverview = new QAction(MainWindow);
        actionNetOverview->setObjectName(QStringLiteral("actionNetOverview"));
        actionNetOverview->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 857, 18));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QStringLiteral("menuInfo"));
        menuAreas = new QMenu(menuBar);
        menuAreas->setObjectName(QStringLiteral("menuAreas"));
        menuBasic_controls = new QMenu(menuBar);
        menuBasic_controls->setObjectName(QStringLiteral("menuBasic_controls"));
        menuNet_connection = new QMenu(menuBasic_controls);
        menuNet_connection->setObjectName(QStringLiteral("menuNet_connection"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAreas->menuAction());
        menuBar->addAction(menuBasic_controls->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuMenu->addAction(actionHome);
        menuMenu->addAction(actionSave);
        menuMenu->addAction(actionSettings);
        menuMenu->addAction(actionOptions);
        menuMenu->addAction(actionExit);
        menuInfo->addAction(actionVersion);
        menuInfo->addAction(actionHelp);
        menuAreas->addAction(actionRoom);
        menuAreas->addAction(actionKitchen);
        menuAreas->addAction(actionHall);
        menuAreas->addAction(actionBathroom);
        menuAreas->addAction(actionOthers);
        menuBasic_controls->addAction(actionClock);
        menuBasic_controls->addAction(actionAlarm_clock);
        menuBasic_controls->addAction(actionOverall_power);
        menuBasic_controls->addAction(menuNet_connection->menuAction());
        menuNet_connection->addSeparator();
        menuNet_connection->addAction(actionNetConnect);
        menuNet_connection->addAction(actionNetDisconnect);
        menuNet_connection->addAction(actionNetOverview);
        mainToolBar->addAction(actionHome);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionVersion->setText(QApplication::translate("MainWindow", "About", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionRoom->setText(QApplication::translate("MainWindow", "Room", 0));
        actionKitchen->setText(QApplication::translate("MainWindow", "Kitchen", 0));
        actionHall->setText(QApplication::translate("MainWindow", "Hall", 0));
        actionBathroom->setText(QApplication::translate("MainWindow", "Bathroom", 0));
        actionOthers->setText(QApplication::translate("MainWindow", "Others", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", 0));
        actionHome->setText(QApplication::translate("MainWindow", "Home", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save current settings", 0));
#endif // QT_NO_TOOLTIP
        actionClock->setText(QApplication::translate("MainWindow", "Clock", 0));
        actionAlarm_clock->setText(QApplication::translate("MainWindow", "Alarm clock", 0));
        actionOverall_power->setText(QApplication::translate("MainWindow", "Overall power", 0));
        actionNetConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionNetDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        actionNetOverview->setText(QApplication::translate("MainWindow", "Overview", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Info", 0));
        menuAreas->setTitle(QApplication::translate("MainWindow", "Areas", 0));
        menuBasic_controls->setTitle(QApplication::translate("MainWindow", "Basic controls", 0));
        menuNet_connection->setTitle(QApplication::translate("MainWindow", "Net connection", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
