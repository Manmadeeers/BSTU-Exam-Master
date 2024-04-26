#pragma once
#ifndef CHOISE_H
#define CHOISE_H
#include <QMainWindow>
#include "proceed.h"
#include <iostream>

using namespace std;

namespace Ui {
class Choise;
}

class Choise : public QMainWindow
{
    Q_OBJECT

public:
    explicit Choise(QWidget *parent = nullptr);
    ~Choise();

private slots:
    void on_go_proceed_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::Choise *ui_c;
    Proceed *proceed;
};
#endif // CHOISE_H
