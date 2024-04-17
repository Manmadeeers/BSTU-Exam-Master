#include "choise.h"
#include "ui_choise.h"
#include "proceed.h"
#include <QMainWindow>
#include <QComboBox>
#include "finder.h"
#include <vector>
#include <QString>


Choise::Choise(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Choise)
{
    ui->setupUi(this);
    QComboBox *choose_discipline = ui->comboBox;
    vector<string>temp_vec = finder();
    int ammount = finder().size();
    for(int i=0;i<ammount;i++){
        string temp = temp_vec[i];
        choose_discipline->addItem(QString::fromStdString(temp));
    }

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

