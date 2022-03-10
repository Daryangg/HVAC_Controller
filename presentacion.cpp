#include "presentacion.h"
#include "ui_presentacion.h"

Presentacion::Presentacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Presentacion)
{
    ui->setupUi(this);
}

Presentacion::~Presentacion()
{
    delete ui;
}
bool flag=false;

void Presentacion::on_power_clicked()
{
    if(!flag){
    ui->temp->setRange(16,33);
    ui->temp->setValue(25);
    flag=true;
}
    else{
        ui->temp->setRange(0,0);
        ui->temp->setValue(0);
        flag=false;
    }
}


