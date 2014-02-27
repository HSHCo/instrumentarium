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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
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
    QAction *actionAndroidConnect;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_2;
    QWidget *tab_5;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuInfo;
    QMenu *menuAreas;
    QMenu *menuBasic_controls;
    QMenu *menuNet_connection;
    QMenu *menuRemote;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(689, 423);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/all/icons/ios7-undo-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
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
        icon7.addFile(QStringLiteral(":/Icons/all/icons/ios7-gear-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon7);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images_icons/icons/008.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon8);
        actionClock = new QAction(MainWindow);
        actionClock->setObjectName(QStringLiteral("actionClock"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/all/icons/ios7-time-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClock->setIcon(icon9);
        actionAlarm_clock = new QAction(MainWindow);
        actionAlarm_clock->setObjectName(QStringLiteral("actionAlarm_clock"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/all/icons/ios7-alarm-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlarm_clock->setIcon(icon10);
        actionOverall_power = new QAction(MainWindow);
        actionOverall_power->setObjectName(QStringLiteral("actionOverall_power"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images_icons/icons/016 (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOverall_power->setIcon(icon11);
        actionNetConnect = new QAction(MainWindow);
        actionNetConnect->setObjectName(QStringLiteral("actionNetConnect"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Icons/all/icons/social-rss-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetConnect->setIcon(icon12);
        actionNetDisconnect = new QAction(MainWindow);
        actionNetDisconnect->setObjectName(QStringLiteral("actionNetDisconnect"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images_icons/icons/050.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNetDisconnect->setIcon(icon13);
        actionNetOverview = new QAction(MainWindow);
        actionNetOverview->setObjectName(QStringLiteral("actionNetOverview"));
        actionNetOverview->setIcon(icon2);
        actionAndroidConnect = new QAction(MainWindow);
        actionAndroidConnect->setObjectName(QStringLiteral("actionAndroidConnect"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Icons/all/icons/social-android-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAndroidConnect->setIcon(icon14);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 381));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setElideMode(Qt::ElideMiddle);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 71, 241));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 99, 50, 50));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Icons/all/icons/bulb.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QStringLiteral(":/Icons/all/icons/idea-icon.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon15);
        pushButton_3->setIconSize(QSize(32, 32));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 50, 50));
        pushButton->setIcon(icon15);
        pushButton->setIconSize(QSize(32, 32));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 168, 50, 50));
        pushButton_2->setIcon(icon15);
        pushButton_2->setIconSize(QSize(32, 32));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 10, 281, 241));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(90, 10, 251, 241));
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 259, 621, 91));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 689, 18));
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
        menuRemote = new QMenu(menuBar);
        menuRemote->setObjectName(QStringLiteral("menuRemote"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAreas->menuAction());
        menuBar->addAction(menuBasic_controls->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuBar->addAction(menuRemote->menuAction());
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
        menuRemote->addAction(actionAndroidConnect);
        mainToolBar->addAction(actionExit);
        mainToolBar->addAction(actionClock);
        mainToolBar->addAction(actionAlarm_clock);
        mainToolBar->addAction(actionNetConnect);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionAndroidConnect);
        mainToolBar->addAction(actionHome);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


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
        actionAndroidConnect->setText(QApplication::translate("MainWindow", "AndroidConnect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Overall", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Room", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Kitchen", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Bathroom", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Lights", 0));
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Video", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Something else", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Even more", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Hall", 0));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Info", 0));
        menuAreas->setTitle(QApplication::translate("MainWindow", "Areas", 0));
        menuBasic_controls->setTitle(QApplication::translate("MainWindow", "Basic controls", 0));
        menuNet_connection->setTitle(QApplication::translate("MainWindow", "Net connection", 0));
        menuRemote->setTitle(QApplication::translate("MainWindow", "Remote", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
