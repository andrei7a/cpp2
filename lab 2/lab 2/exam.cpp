#include "exam.h"
#include <iostream>
using namespace std;
Exam::Exam(Test * test1, Test * test2, Test *test3)
{
	mass_test[0] = test1;
	mass_test[1] = test2;
	mass_test[2] = test3;


}

void Exam::addAvg()
{
	int temp = 0;
	for (int i = 0; i < 3; i++)
	{
		temp += mass_test[i]->getAvg();
	}
	avg_exam = temp / 3;
}

void Exam::print()
{
	cout << "Средний балл за экзамен: " << avg_exam << endl << endl;
}
