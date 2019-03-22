#pragma once
#include<iostream>
#include"Employee.h"
using namespace std;
class ProductionWorker :public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker();
	ProductionWorker(int sh, double pay, string name, int num, string date);
	void setShift(int sh);
	void setPayRate(double pay);
	int getShift();
	double getPayRate();
};

