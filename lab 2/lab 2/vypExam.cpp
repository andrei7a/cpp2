#include "vypExam.h"
#include <iostream>
using namespace std;
VypExam::VypExam(Test * test1, Test * test2, Test *test3) : Exam(test1, test2, test3)
{
}

void VypExam::setPrepod(char * temp)
{
	prepod = temp;
}

void VypExam::print()
{
	cout << "������� ���� �� �������: " << avg_exam << endl;
	cout << "������������: " << prepod << endl << endl;
}
