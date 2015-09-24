#pragma once
class Que {
protected: 
	char *que;
	int mark;
public:
	Que()
	{}
	Que::Que(char*);
	void setMark(int);
	int getMark();
	void print();
	void setQue(char*);
};

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

class VypExam : public Exam
{
protected:
	char* prepod;
public:
	VypExam(Test * test1, Test * test2, Test *test3) : Exam(test1, test2, test3) {};
	void setPrepod(char*);
	void print();
};

class Isp: public VypExam
{
private:
	const int min_avg = 40;
public:
	Isp(Test * test1, Test * test2, Test *test3) : VypExam(test1, test2, test3) {};
	bool itog(int);
	void print();
};