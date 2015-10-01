#pragma once

class Que {
public:
	 Que *head;
	char* que;
	int mark;
public:
	Que *next;
	Que() {};
	virtual ~Que(){}
	//virtual void setMark(int) = 0;
	//virtual int getMark()=0;
	virtual void add(char*)=0;
	//virtual void setQue(char*)=0;
};

class EmployeeQue : public Que {
public:
	EmployeeQue() :Que() {};
	void setQue(char*);
	void add(char*);
	void show();

};