#include <iostream>
#include "que.h"
using namespace std;


void main()
{
	EmployeeQue myQue = EmployeeQue();
	myQue.add("Que1");
	myQue.add("Que2");
	myQue.show();
}