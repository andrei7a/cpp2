#include "test.h"
#include <iostream>
using namespace std;
Test::Test(char* text1, char* text2, char* text3)
{
	mass[0] = new Que(text1);
	mass[1] = new Que(text2);
	mass[2] = new Que(text3);
}
Test::Test(Que * q1, Que * q2, Que * q3)
{
	mass[0] = q1;
	mass[1] = q2;
	mass[2] = q3;
}
void Test::randMark()
{

	for (int i = 0; i < 3; i++)
	{
		mass[i]->setMark(rand() % 99 + 1);
	}
}
void Test::printTest()
{

	for (int i = 0; i < 3; i++)
	{
		mass[i]->print();
	}
}
int Test::getAvg()
{
	return avg;
}
void Test::addAvg()
{
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		temp += mass[i]->getMark();
	}
	avg = temp / 3;
}

void Test::printAvg()
{
	cout << "Средний балл: " << avg << endl << endl;
}

