#include "Circle.h"

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::calculateArea()
{
	return 3.14 * radius * radius;
}
