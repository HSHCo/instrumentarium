#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hsh_room.h"
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    HSH_Room *h_room;


private slots:
    void on_pushButton_clicked();
    void on_actionExit_triggered();
    void on_actionRoom_triggered();
    void on_actionVersion_triggered();
};

#endif // MAINWINDOW_H
