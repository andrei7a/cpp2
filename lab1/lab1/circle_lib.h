#pragma once

struct Coord {
	int x;
	int y;
};

class circle {
private:
	Coord* coord;
	int radius;
public:
	circle(int, int, int);
	~circle(void);
	Coord* getCenter(void);
	int getRadius(void);
	void setCenter(int,int);
	void setRadius(int);
	double area(void);
	double length(void);
};