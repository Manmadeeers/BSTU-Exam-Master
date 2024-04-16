#include "proceed.h"
#include "ui_proceed.h"

Proceed::Proceed(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Proceed)
{
    ui->setupUi(this);

}

Proceed::~Proceed()
{
    delete ui;
}
