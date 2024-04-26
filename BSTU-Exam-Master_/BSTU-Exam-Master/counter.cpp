#include "counter.h"
#include <QFile>
#include <QTextStream>
#include <QApplication>
int countOfQuestions(string dis){
     QString waaaaay = QString::fromStdString(QApplication::applicationDirPath().toStdString() + "/noDB/"+dis+"/questions.koi");
    QFile questions(waaaaay);
    //ifstream questions("\\noDB\\"+dis+"\\questions.koi");
    if(questions.open(QIODevice::ReadOnly | QIODevice::Text)){
        int return_int = 0;
        QTextStream read(&questions);
        QString line;
       // string buf;
       do
        {
            line = read.readLine();
            return_int++;
       } while (!line.isNull());
        return_int--;
        return return_int;
    }
    else{
        //error
        return NULL;
    }
}
