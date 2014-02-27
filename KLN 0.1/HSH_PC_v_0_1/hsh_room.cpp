#include "hsh_room.h"
#include "ui_hsh_room.h"

HSH_Room::HSH_Room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HSH_Room)
{
    ui->setupUi(this);
}

HSH_Room::~HSH_Room()
{
    delete ui;
}

void HSH_Room::on_pushButton_3_clicked()
{

}
