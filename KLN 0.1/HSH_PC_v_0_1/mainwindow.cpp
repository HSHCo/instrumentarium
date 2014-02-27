#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hsh_room.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionVersion_triggered()
{

}

void MainWindow::on_actionRoom_triggered()
{
  h_room = new HSH_Room (this);
  h_room->show();
}

void MainWindow::on_actionExit_triggered()
{

}

void MainWindow::on_pushButton_clicked()
{

}


