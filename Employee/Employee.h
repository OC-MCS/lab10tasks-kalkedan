#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
private :
	string employeeName;
	int employeeNum;
	string hireDate;
public:
	//Employee();
	Employee(string name, int num, string date);
	void setName(string name);
	void setNum(int num);
	void setDate(string date);
	string getName();
	int getNum();
	string getDate();
};

