#include <iostream>
#include "circle_lib.h"
#include <windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	circle *mass_circle = (circle*)malloc(0);

	int c,n=0,temp;
	int x, y, radius;
	do {
		cout << "1 - ������� ������"<<endl;
		cout << "2 - ������� ������" << endl;
		cout << "3 - �������� ������" << endl;
		cout << "4 - �������� �����" << endl;
		cout << "5 - ���������� ������" << endl;
		cout << "6 - ���������� �����" << endl;
		cout << "7 - ��������� �������" << endl;
		cout << "8 - ��������� ����� ����������" << endl;
		cout << "0 - �����" << endl;
		cout << "��� �����: ";
		cin >> c;
		switch (c)
		{
		case 1:
			mass_circle = (circle*)realloc(mass_circle, sizeof(circle)*++n);
			cout << "������� ������ <x y ������> :";
			cin >> x >> y >> radius;
			mass_circle[n - 1] = circle(x, y, radius);
			cout << "������ ������ " << n << endl; break;

		case 2:
			cout << "������� ����� �������: ";
			cin >> temp;
			


		case 3:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << mass_circle[temp - 1].getRadius() << endl; break;

		case 4:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << "X: " << mass_circle[temp - 1].getCenter()->x << "   Y: " << mass_circle[temp - 1].getCenter()->y << endl; break;
		case 5:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << "������� ����� ������: ";
			cin >> radius;
			mass_circle[temp - 1].setRadius(radius); break;

		case 6:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << "������� ����� ���������� <x y>: ";
			cin >> x >> y;
			mass_circle[temp - 1].getCenter()->x = x;
			mass_circle[temp - 1].getCenter()->y = y; break;
		case 7:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << "������� ������� " <<temp<<": "<< mass_circle[temp - 1].area()<< endl; break;
		
		case 8:
			cout << "������� ����� �������: ";
			cin >> temp;
			cout << "����� ���������� ������� " << temp << ": " << mass_circle[temp - 1].length() << endl; break;
	}
	} 
	while (c);
}
