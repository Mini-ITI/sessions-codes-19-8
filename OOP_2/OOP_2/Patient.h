#include <string>
#include "Person.h"
using namespace std;
#pragma once
class Patient : public Person
{
private:
	string mobile;
	string symptom;
public:
	void setMobile(string m);
	void setSymptom(string s);

	string getMobile();
	string getSymptom();
};

