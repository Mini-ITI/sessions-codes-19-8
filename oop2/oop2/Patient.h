#include "Person.h"
#pragma once
class Patient 
	: public Person
{
private:
	string mobile, symptom;
public:
	void setMobile(string m);
	void setSymptom(string s);

	string getMobile();
	string getSymptom();
	void work();
	Patient();
	Patient(int i, string n, string m, string s);
};

