#pragma once
#include "test.h"
class Exam
{
protected:
	Test *mass_test[3];
	int avg_exam;
public:
	Exam(Test*, Test*, Test*);
	void addAvg();
	void print();
};
