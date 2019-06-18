#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::setPointX(int x)
{
	this->x = x;
}

void Point::setPointY(int y)
{
	this->y = y;
}

int Point::getPointX()
{
	return x;
}

int Point::getPointY()
{
	return y;
}