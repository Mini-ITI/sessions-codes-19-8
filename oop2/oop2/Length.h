#pragma once
class Length
{
private:
	int meter, centiMeter;
public:
	int getMeter();
	int getCentiMeter();

	Length operator +(Length len2);
	Length operator ++();
	Length operator ++(int);

	Length(int m, int cm);
};

