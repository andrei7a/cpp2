#include "isp.h"
#include <iostream>
using namespace std;


Isp::Isp(Test * test1, Test * test2, Test *test3) : VypExam(test1, test2, test3)
{

};

bool Isp::itog(int temp)
{
	if (temp >= min_avg)
	{
		return true;
	}
	return false;
}

void Isp::print()
{
	cout << "������� ���� �� �������: " << avg_exam << endl;
	cout << "������������: " << prepod << endl;
	if (itog(avg_exam))
	{
		cout << "��������� ��������" << endl;
	}
	else
	{
		cout << "��������� �� ��������" << endl;
	}
	cout << endl;

}
