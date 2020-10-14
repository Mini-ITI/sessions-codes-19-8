#include "Length.h"

int Length::getMeter()
{
	return meter;
}

int Length::getCentiMeter()
{
	return centiMeter;
}

Length Length::operator+(Length len2)
{
	Length result = Length(0, 0);
	result.meter = len2.getMeter() + meter;
	result.centiMeter = len2.getCentiMeter() + centiMeter;
	if (result.centiMeter >= 100)
	{
		result.meter++;
		result.centiMeter -= 100;
	}

	return result;
}

Length Length::operator++()
{
	meter++;
	return Length(meter, centiMeter);
}

Length Length::operator++(int)
{
	Length tmp = Length(meter, centiMeter);
	meter++;
	return tmp;
}

Length::Length(int m, int cm)
{
	meter = m;
	centiMeter = cm;
}
