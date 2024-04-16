#ifndef PROCEED_H
#define PROCEED_H

#include <QMainWindow>

namespace Ui {
class Proceed;
}

class Proceed : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proceed(QWidget *parent = nullptr);
    ~Proceed();

private:
    Ui::Proceed *ui;
};

#endif // PROCEED_H
