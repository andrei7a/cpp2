#include "que.h"
#include <iostream>



using namespace std;

Que::Que(char* text)
{
	que = text;
}
int Que::getMark()
{
	return mark;
}
void Que::print()
{
	cout << "Вопрос: " << que << endl;
}
void Que::setQue(char * temp)
{	
	que = temp;
}
void Que::setMark(int temp)
{
	mark = temp;
}

