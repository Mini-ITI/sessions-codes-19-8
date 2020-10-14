#include "Patient.h"
#include <iostream>
using namespace std;
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

void Patient::work()
{
	cout << "I'm sick";
}

Patient::Patient() : Person()
{
}

Patient::Patient(int i, string n, string m, string s) : Person(i, n)
{
	mobile = m;
	symptom = s;
}
