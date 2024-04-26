#include "proceed.h"
#include "ui_proceed.h"
#include "Tickets_and_Answers.h"
#include <QLabel>
#include <QComboBox>
#include "choise.h"
#include "counter.h"
#include <QPushButton>
#include <QApplication>
#include <QObject>
string dis;
void kastyl (string take)
{
    dis =take;
}
Proceed::Proceed(QWidget *parent)
    : QMainWindow(parent)
    , ui_p(new Ui::Proceed)
{

    ui_p->setupUi(this);
    this->setMaximumSize(800,800);
    bool is_clicked = false;
    QLabel *question = ui_p->display_question;
    QLabel *variants = ui_p->display_answers;
        int count_smth = countOfQuestions(dis);//count the amount of questions
    for(int i=0;i<2;i++){
            int ticket = (rand()%(count_smth))+1;
            QString current_question = GetQuestion(ticket,dis);
            question->setText(current_question);
            QString answer_variants = GetAnsewers(ticket,dis);
            variants->setText(answer_variants);
            //int right_answer = GetRightAnswers(ticket,dis);
            //QPushButton *button = ui_p->to_next;
            QObject::connect(ui_p->to_next, &QPushButton::clicked, [&]() {
                is_clicked = true;
            });
            do{

                QApplication::processEvents();
            }while(is_clicked);
    }

}

Proceed::~Proceed()
{
    delete ui_p;
}


void Proceed::on_to_next_clicked(bool checked)
{

}

