#include "Shape.h"
#pragma once
class Rectangle : public Shape
{
private:
	double length, width;
public:
	void setLength(double l);
	void setWidth(double w);

	double getLength();
	double getWidth();

	double calculateArea();
};

