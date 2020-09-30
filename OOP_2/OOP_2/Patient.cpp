#include "Patient.h"

void Patient::setMobile(string m)
{
	mobile = m;
}

void Patient::setSymptom(string s)
{
	symptom = s;
}

string Patient::getMobile()
{
	return mobile;
}

string Patient::getSymptom()
{
	return symptom;
}
