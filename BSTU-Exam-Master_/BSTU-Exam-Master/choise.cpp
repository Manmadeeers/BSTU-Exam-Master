#include "choise.h"
#include "ui_choise.h"
#include "proceed.h"
#include <QMainWindow>
#include <QComboBox>
#include "finder.h"
#include <vector>
#include <QString>
#include <QWidget>
#include "proceed.h"


Choise::Choise(QWidget *parent)
    : QMainWindow(parent)
    , ui_c(new Ui::Choise)

{
    this->setMaximumSize(800,800);
    ui_c->setupUi(this);
    QComboBox *choose_discipline = ui_c->comboBox;
    vector<string>temp_vec = finder();
    int ammount = finder().size();
    for(int i=0;i<ammount;i++){
        string temp = temp_vec[i];
        choose_discipline->addItem(QString::fromStdString(temp));
    }
    QString chosen_dis = choose_discipline->currentText();
    string take = chosen_dis.toStdString();//convert from qstring to std::string
    kastyl(take);

}

Choise::~Choise()
{
    delete ui_c;
}

void Choise::on_go_proceed_clicked()
{
    proceed = new Proceed(this);
    proceed->show();
    delete ui_c;
}


void Choise::on_comboBox_currentTextChanged(const QString &arg1)
{
    QComboBox *choose_discipline = ui_c->comboBox;
    QString chosen_dis = choose_discipline->currentText();
    string take = chosen_dis.toStdString();//convert from qstring to std::string
    kastyl(take);
}

