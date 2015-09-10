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
		cout << "1 - Создать объект"<<endl;
		cout << "2 - Удалить объект" << endl;
		cout << "3 - Получить радиус" << endl;
		cout << "4 - Получить центр" << endl;
		cout << "5 - Установить радиус" << endl;
		cout << "6 - Установить центр" << endl;
		cout << "7 - Вычислить площадь" << endl;
		cout << "8 - Вычислить длину окружности" << endl;
		cout << "0 - Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> c;
		switch (c)
		{
		case 1:
			mass_circle = (circle*)realloc(mass_circle, sizeof(circle)*++n);
			cout << "Введите данные <x y радиус> :";
			cin >> x >> y >> radius;
			mass_circle[n - 1] = circle(x, y, radius);
			cout << "Создан объект " << n << endl; break;

		case 2:
			cout << "Введите номер объекта: ";
			cin >> temp;
			


		case 3:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << mass_circle[temp - 1].getRadius() << endl; break;

		case 4:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << "X: " << mass_circle[temp - 1].getCenter()->x << "   Y: " << mass_circle[temp - 1].getCenter()->y << endl; break;
		case 5:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << "Введите новый радиус: ";
			cin >> radius;
			mass_circle[temp - 1].setRadius(radius); break;

		case 6:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << "Введите новые координаты <x y>: ";
			cin >> x >> y;
			mass_circle[temp - 1].getCenter()->x = x;
			mass_circle[temp - 1].getCenter()->y = y; break;
		case 7:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << "Площадь объекта " <<temp<<": "<< mass_circle[temp - 1].area()<< endl; break;
		
		case 8:
			cout << "Введите номер объекта: ";
			cin >> temp;
			cout << "Длина окружности объекта " << temp << ": " << mass_circle[temp - 1].length() << endl; break;
	}
	} 
	while (c);
}
