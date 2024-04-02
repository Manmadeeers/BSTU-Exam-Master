#include "Tickets_and_Answers.h"

char GetQuestion(char idTicket, char idQuestion, string dis) {
	idTicket--;
	char id = (idTicket * 4) + idQuestion;
	string bufQ, bufA; char returnchar ;
	ifstream questions("noDB\\"+dis+"\\questions.koi");
	ifstream answers("noDB\\"+dis+"\\answers.koi");
	ifstream correctAnswers("noDB\\"+dis+"\\correctAnswers.koi");
	if (questions.is_open() && answers.is_open() && correctAnswers.is_open())
	{
		for (char i = 0; i < id; i++) {
			getline(questions, bufQ);
			getline(answers, bufA);
			correctAnswers >> returnchar;
		}
		for (int i = 0; i < bufA.length() ;i++){
		if (bufA[i] == '|'){
			bufA[i] = '\n';
		}
	}
	}
	else {
		cout << "�� ������� �������� ������ � ������ :(" << endl;
		return NULL;//сделать ошибку
	}
	questions.close();
	answers.close();
	correctAnswers.close();
	cout << bufQ << endl << bufA << endl << endl;
	//функции для ввода вместо cout
	return returnchar - 64;
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
		cout << "�� ������� �������� ������ � ������ :(" << endl;
		return NULL;//Ошибка
	}
	answers.close();
	return cnt;
}

