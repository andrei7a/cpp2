#pragma once
#include "que.h"
class Test {
protected:
	Que *mass[3];
	int avg;
public:
	Test::Test()
	{}
	Test::Test(char*, char*, char*);
	Test::Test(Que*, Que*, Que*);
	void randMark();
	void addAvg();
	void printAvg();
	void printTest();
	int getAvg();
};
