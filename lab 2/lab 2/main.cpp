#include <iostream>
#include "lib.h"
#include <windows.h>
#include <ctime>
using namespace std;


void main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Que *q1 = new Que("que4");
	Que *q2 = new Que("que5");
	Que *q3 = new Que("que6");

	cout << "Создание класса Test" << endl;
	Test *myTest = new Test("que1","que2","que3");
	myTest->printTest();
	myTest->randMark();
	myTest->addAvg();
	myTest->printAvg();

	Test *myTest2 = new Test(q1, q2, q3);
	myTest2->printTest();
	myTest2->randMark();
	myTest2->addAvg();
	myTest2->printAvg();

	Test *myTest3 = new Test("que7", "que8", "que9");
	myTest3->printTest();
	myTest3->randMark();
	myTest3->addAvg();
	myTest3->printAvg();


	cout << "Создание класса Exam" << endl;
	Exam *myExam = new Exam(myTest, myTest2, myTest3);
	myExam->addAvg();
	myExam->print();

	cout << "Создание класса VypExam" << endl;
	VypExam *myVypExam = new VypExam(myTest, myTest2, myTest3);
	myVypExam->addAvg();
	myVypExam->setPrepod("Лащенко");
	myVypExam->print();

	cout << "Создание класса Isp" << endl;
	Isp *myIsp = new Isp(myTest, myTest2, myTest3);
	myIsp->addAvg();
	myIsp->setPrepod("Лащенко");
	myIsp->print();
}