#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;
class ShiftSupervisor : public Employee
{
private:
	double annualSalary;
	double annualProduction;
public:
	
	ShiftSupervisor(double salary, double Production, string name, int num, string date);
	void setSalary(double salary);
	void setProduction(double production);
	double getSalary();
	double getProduction();
};