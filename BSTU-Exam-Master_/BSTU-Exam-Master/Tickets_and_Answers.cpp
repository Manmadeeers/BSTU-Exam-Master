#include "Tickets_and_Answers.h"
#include <iostream>
#include <string>
#include <fstream>
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <string>
#include <QString>
QString GetQuestion(int id, string dis) {
    //id++;
    //QString bufQ ;
    QString buff;
    QString waaaaay = QString::fromStdString(QApplication::applicationDirPath().toStdString() + "/noDB/"+dis+"/questions.koi");
    QFile questions(waaaaay);
    QString checkid = QString::number(id);
    if (questions.open(QIODevice::ReadOnly | QIODevice::Text)){
       // QTextStream out (&questions);
        for (int i = 0; i < id; i++) {
            buff = questions.readLine();
            //qDebug()<<buff;
        }
    }
    else{
        cout << "File:(" << endl;
        return NULL;// "Error!"+QApplication::applicationDirPath().toStdString() + "/noDB/"+dis+"/questions.koi";//сделать ошибку
    }
    string buffS = buff.toStdString();
    //questions.close();
   // bufQ = buff.toStdString();
    cout <<id<<buffS;
    //questions.close();
    return checkid+buff;
}

QString GetAnsewers(int id, string dis){
    QString waaay = QString::fromStdString(QApplication::applicationDirPath().toStdString() + "/noDB/"+dis+"/answers.koi");
    QFile answers(waaay);
    //ifstream answers("noDB\\"+dis+"\\answers.koi");
    QString bufA;
    if (answers.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        for (char i = 0; i < id; i++) {
            bufA = answers.readLine();
        }
        for (int i = 0; i < bufA.length() ;i++){
        if (bufA[i] == '|'){
            bufA[i] = '\n';
        }
    }
    }
    else {
        cout << "Answer error :(" << endl;
        return NULL;//сделать ошибку
    }
    answers.close();
    return bufA;
}

char GetRightAnswers(int id, string dis){
    ifstream correctAnswers("noDB\\"+dis+"\\correctAnswers.koi");
    char returnChar;
    if (correctAnswers.is_open())
    {
        for (char i = 0; i < id; i++) {
            correctAnswers >> returnChar;
        }
        returnChar -= 'A';
    }
    else {
        cout << "Right answers error :(" << endl;
        return NULL;//сделать ошибку
    }
    return returnChar;
}
char GetSizeQuestion(char idTicket, char idQuestion, string dis) {
    idTicket--;
    char id = (idTicket * 4) + idQuestion;
    ifstream answers("noDB\\"+dis+"\\answers.koi");
    string buf;
    char cnt = 0;
    if (answers.is_open())
    {
        for (char i = 0; i < id-1; i++) {
            for (char j = 0; j < 4; j++) {
                getline(answers, buf);
            }
        }

        for (int i = 0; i < buf.length() ;i++){
            if (buf[i] == '|'){
                cnt++;
            }
        }
    }
    else {
        cout << "Файл не найден :(" << endl;
        return NULL;//Ошибка
    }
    answers.close();
    return cnt;
}
