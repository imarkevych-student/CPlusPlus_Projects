#include "Point.h"

void Point::Print() const
{
}

Point Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}

Point Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}

bool Point::operator>=(const Point& other)
{
	return (sqrt(x * x + y * y) >= sqrt(other.x * other.x + other.y * other.y));
}

bool Point::operator>=(const Point& other)
{
	return (sqrt(x * x + y * y) <= sqrt(other.x * other.x + other.y * other.y));
}
