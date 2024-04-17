#ifndef TICKETS_AND_ANSWERS_H
#define TICKETS_AND_ANSWERS_H
#pragma once
//#include "main.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



/*������� ������� ������� � �������� ������� � ���������� (� char) id ����������� ������
* idTicket - ����� ������(max 5)
* idQuestion - ����� �������(max 4)
*/
string GetQuestion(char idTicket, char idQuestion, string dis);

/*������� ���������� (� char) ���-�� �������
* idTicket - ����� ������(max 5)
* idQuestion - ����� �������(max 4)
*/
char GetSizeQuestion(char idTicket, char idQuestion, string dis);
#endif // TICKETS_AND_ANSWERS_H
