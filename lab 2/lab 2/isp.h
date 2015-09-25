#pragma once
#include "vypExam.h"
class Isp : public VypExam
{
private:
	const int min_avg = 40;
public:
	Isp(Test *, Test *, Test*);
	bool itog(int);
	void print();
};
