#pragma once
#ifndef TICKETS_AND_ANSWERS_H
#define TICKETS_AND_ANSWERS_H
//#include "main.h"
#include <iostream>
#include <string>
#include <fstream>
#include <QString>
using namespace std;



/*������� ������� ������� � �������� ������� � ���������� (� char) id ����������� ������
* idTicket - ����� ������(max 5)
* idQuestion - ����� �������(max 4)
*/
QString GetQuestion(int id, string dis);

/*������� ���������� (� char) ���-�� �������
* idTicket - ����� ������(max 5)
* idQuestion - ����� �������(max 4)
*/
QString GetAnsewers(int id, string dis);
char GetRightAnswers(int id, string dis);
char GetSizeQuestion(char idTicket, char idQuestion, string dis);
#endif // TICKETS_AND_ANSWERS_H
