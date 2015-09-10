#include "circle_lib.h"
#include "math.h"
circle::circle(int x, int y, int radius)
{
	this->coord = new Coord;
	this->coord->x = x;
	this->coord->y = y;
	this->radius = radius;
}

circle::~circle()
{

}

Coord* circle::getCenter(void)
{
	return coord;
}

int circle::getRadius(void)
{
	return radius;
}
void circle::setCenter(int x, int y)
{
	this->coord->x = x;
	this->coord->y = y;
}

void circle::setRadius(int radius)
{
	if(radius>0)
	this->radius = radius;
}

double circle::area(void)
{
	return 3.14 * pow(radius,2);
}
double circle::length(void)
{
	return 3.14 * 2 * radius;
}