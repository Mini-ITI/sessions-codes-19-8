#include<string>
using namespace std;
#pragma once
class Department
{
private:
	string name, managerName;
	int departmentId;
public:

	void setName(string n);
	string getName();

	void setDepartmentId(int id);
	int getDepartmentId();

	void setManagerName(string mn);
	string getManagerName();

};

