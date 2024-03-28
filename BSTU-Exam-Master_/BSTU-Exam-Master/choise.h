#ifndef CHOISE_H
#define CHOISE_H

#include <QMainWindow>

namespace Ui {
class Choise;
}

class Choise : public QMainWindow
{
    Q_OBJECT

public:
    explicit Choise(QWidget *parent = nullptr);
    ~Choise();

private:
    Ui::Choise *ui;
};

#endif // CHOISE_H
