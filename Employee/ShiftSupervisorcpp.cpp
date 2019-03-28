#include"ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor(double salary, double Production, string name, int num, string date) :Employee(name, num, date)
{
	annualSalary = salary;
	annualProduction = Production;
}
void ShiftSupervisor::setSalary(double salary)
{
	annualSalary = salary;
	
}
void ShiftSupervisor::setProduction(double production)
{
	annualProduction = production;
}
double ShiftSupervisor::getSalary()
{
	return annualSalary;
}
double ShiftSupervisor::getProduction()
{
	return annualProduction;
}