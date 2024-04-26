#ifndef PROCEED_H
#define PROCEED_H

#include <QMainWindow>
void kastyl(std::string take);
namespace Ui {
class Proceed;
}

class Proceed : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proceed(QWidget *parent = nullptr);
    ~Proceed();

private slots:
    void on_to_next_clicked(bool checked);

private:
    Ui::Proceed *ui_p;
};

#endif // PROCEED_H
