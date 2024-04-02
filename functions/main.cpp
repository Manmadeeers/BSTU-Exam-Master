#include "main.h"

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    //TESTING
    int cot = finder(&str);
    int bu = 1;
    
    GetQuestion(1, 1, str);
    cout << GetSizeQuestion(1, 1, str);
}