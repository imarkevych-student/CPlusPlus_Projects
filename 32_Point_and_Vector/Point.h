#pragma once
#include <cmath>
class Point
{
	int x;
	int y;
public:
	void Print() const;
	Point() :x(0), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
	Point operator ++();
	Point operator --();
	bool operator >=(const Point& other);
	bool operator <=(const Point& other);	

	
};

