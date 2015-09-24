#include "lib.h"
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
Test::Test(char* text1, char* text2, char* text3)
{
	mass[0]= new Que(text1);
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
		temp+=mass[i]->getMark();
	}
	avg = temp / 3;
}

 void Test::printAvg()
 {
	 cout << "Средний балл: " << avg<<endl<<endl;
 }

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

 void VypExam::setPrepod(char * temp)
 {
	 prepod = temp;
 }

 void VypExam::print()
 {
	 cout << "Средний балл за экзамен: " << avg_exam << endl;
	 cout << "Руководитель: " << prepod<< endl << endl;
 }

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
	cout << "Средний балл за экзамен: " << avg_exam << endl;
	cout << "Руководитель: " << prepod << endl;
	if (itog(avg_exam))
	{
		cout << "Испытание пройдено" << endl;
	}
	else
	{
		cout << "Испытание не пройдено" << endl;
	}
	cout << endl;

}
