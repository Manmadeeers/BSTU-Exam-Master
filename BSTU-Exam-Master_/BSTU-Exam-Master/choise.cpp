#include "choise.h"
#include "ui_choise.h"
#include "proceed.h"
#include <QMainWindow>
#include <QComboBox>
#include "finder.h"

Choise::Choise(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Choise)
{
    ui->setupUi(this);
    int amm_of_dis = finder();



    QComboBox *choose_discipline = ui->comboBox;
    choose_discipline->addItem("test");

}

Choise::~Choise()
{
    delete ui;
}

void Choise::on_go_proceed_clicked()
{
    proceed = new Proceed(this);
    proceed->show();
    delete ui;
}

