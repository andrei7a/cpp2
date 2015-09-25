#pragma once
#include "exam.h"
class VypExam : public Exam
{
protected:
	char* prepod;
public:
	VypExam(Test *, Test *, Test *);
	void setPrepod(char*);
	void print();
};
