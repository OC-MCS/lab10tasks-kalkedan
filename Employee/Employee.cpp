#include "Employee.h"
using namespace std;

//
//
//Employee::Employee()
//{
//	employeeName = " ";
//	employeeNum = 0;
//	hireDate = " ";
//}

Employee::Employee(string name, int num, string date)
{
	employeeName = name;
	employeeNum = num;
	hireDate = date;
}
void Employee::setName(string name)
{
	employeeName = name;

}

void Employee:: setNum (int num)
{
	employeeNum = num;

}
void Employee::setDate(string date)
{
	hireDate = date;

}
string Employee::getName()
{
	return employeeName;
}
int Employee::getNum() {
	return employeeNum;
}
string Employee::getDate()
{
	return hireDate;
}



