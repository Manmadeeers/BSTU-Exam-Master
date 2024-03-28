#include "choise.h"
#include "ui_choise.h"
#include <QMainWindow>

Choise::Choise(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Choise)
{
    ui->setupUi(this);
}

Choise::~Choise()
{
    delete ui;
}
