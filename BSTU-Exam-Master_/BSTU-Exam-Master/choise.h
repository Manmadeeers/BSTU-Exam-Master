#ifndef CHOISE_H
#define CHOISE_H

#include <QMainWindow>
#include "proceed.h"

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

private:
    Ui::Choise *ui;
    Proceed *proceed;
};

#endif // CHOISE_H
