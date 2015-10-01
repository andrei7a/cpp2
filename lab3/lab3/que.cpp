#include "que.h"
#include <iostream>
using namespace std;
void EmployeeQue::setQue(char * temp)
{
	this->que = temp;
}

void EmployeeQue::add(char* temp_char)
{
	if (this->head == nullptr)
	{
		this->head = this;
		this->que = temp_char;
		this->next = nullptr;
	}
	else
	{
		Que *temp = head;
		if (temp->next == nullptr)
		{
			temp->next = this;
			this->next = nullptr;
			this->que = temp_char;
		}
		else
		{
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = this;
			this->que = temp_char;
			this->next = nullptr;
		}
	}
}

void EmployeeQue::show()
{
	Que *temp = head;
	while (temp)
	{
		cout << temp->que<<endl;
		temp = temp->next;
	}
}
