#pragma once
#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
#include <fstream>
using namespace std;
/// @brief Считает колличество вопросов
/// @param dis имя папки дисциплины
/// @return колличество вопросов(колличество билетов = колличество вопросов/4)
int countOfQuestions(string dis);
class counter
{
public:
    counter();
};

#endif // COUNTER_H
