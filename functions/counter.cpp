#include "counter.h"

int countOfQuestions(string dis){
    ifstream questions("noDB\\"+dis+"\\questions.koi");
    if(questions.is_open()){
        int return_int = 0;
        string buf;
        while (getline(questions, buf))
        {
            return_int++;
        }
        return return_int;       
    }
    else{
        //error
        return NULL;
    }
}