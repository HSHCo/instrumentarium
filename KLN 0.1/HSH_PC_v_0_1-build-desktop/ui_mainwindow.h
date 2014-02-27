/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed 12. Feb 23:10:36 2014
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

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
    QAction *actionSurrounding;
    QAction *actionOthers;
    QAction *actionOptions;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuInfo;
    QMenu *menuAreas;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(857, 479);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionVersion = new QAction(MainWindow);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionRoom = new QAction(MainWindow);
        actionRoom->setObjectName(QString::fromUtf8("actionRoom"));
        actionKitchen = new QAction(MainWindow);
        actionKitchen->setObjectName(QString::fromUtf8("actionKitchen"));
        actionHall = new QAction(MainWindow);
        actionHall->setObjectName(QString::fromUtf8("actionHall"));
        actionBathroom = new QAction(MainWindow);
        actionBathroom->setObjectName(QString::fromUtf8("actionBathroom"));
        actionSurrounding = new QAction(MainWindow);
        actionSurrounding->setObjectName(QString::fromUtf8("actionSurrounding"));
        actionOthers = new QAction(MainWindow);
        actionOthers->setObjectName(QString::fromUtf8("actionOthers"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QString::fromUtf8("actionOptions"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 857, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        menuAreas = new QMenu(menuBar);
        menuAreas->setObjectName(QString::fromUtf8("menuAreas"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuAreas->menuAction());
        menuBar->addAction(menuInfo->menuAction());
        menuMenu->addAction(actionOptions);
        menuMenu->addAction(actionExit);
        menuInfo->addAction(actionVersion);
        menuInfo->addAction(actionHelp);
        menuAreas->addAction(actionRoom);
        menuAreas->addAction(actionKitchen);
        menuAreas->addAction(actionHall);
        menuAreas->addAction(actionBathroom);
        menuAreas->addAction(actionSurrounding);
        menuAreas->addAction(actionOthers);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionVersion->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionRoom->setText(QApplication::translate("MainWindow", "Room", 0, QApplication::UnicodeUTF8));
        actionKitchen->setText(QApplication::translate("MainWindow", "Kitchen", 0, QApplication::UnicodeUTF8));
        actionHall->setText(QApplication::translate("MainWindow", "Hall", 0, QApplication::UnicodeUTF8));
        actionBathroom->setText(QApplication::translate("MainWindow", "Bathroom", 0, QApplication::UnicodeUTF8));
        actionSurrounding->setText(QApplication::translate("MainWindow", "Surrounding", 0, QApplication::UnicodeUTF8));
        actionOthers->setText(QApplication::translate("MainWindow", "Others", 0, QApplication::UnicodeUTF8));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", 0, QApplication::UnicodeUTF8));
        menuInfo->setTitle(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        menuAreas->setTitle(QApplication::translate("MainWindow", "Areas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
