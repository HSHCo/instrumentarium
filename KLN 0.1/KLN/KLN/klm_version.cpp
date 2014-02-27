#include "klm_version.h"
#include "ui_klm_version.h"

KLM_Room::KLM_Version(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KLM_Version)
{
    ui->setupUi(this);
}

KLM_Version::~KLM_Version()
{
    delete ui;
}
