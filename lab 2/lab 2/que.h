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






