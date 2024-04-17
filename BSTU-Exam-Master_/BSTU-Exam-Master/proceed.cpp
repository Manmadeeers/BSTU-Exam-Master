#include "proceed.h"
#include "ui_proceed.h"
#include "Tickets_and_Answers.h"
#include <QLabel>

Proceed::Proceed(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Proceed)
{
    ui->setupUi(this);
    QLabel *question = ui->display_question;
    QLabel *variants = ui->display_answers;
    GetQ

}

Proceed::~Proceed()
{
    delete ui;
}
