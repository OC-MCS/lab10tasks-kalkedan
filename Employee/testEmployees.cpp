#include<iostream>
#include"Employee.h"
#include"ProductionWorker.h"
#include"ShiftSupervisor.h"
using namespace std;
int main()
{
	ProductionWorker product1(1, 8.0,"Kalkedan",1313,"03/03/1995");
	ShiftSupervisor test2(45000.0, 56.0, "Abel", 1414, "1000");
	cout <<"name: "<< product1.getName() << endl;
	cout <<"Employee Number:   "<< product1.getNum() << endl;
	cout <<"Hired Date: "<< product1.getDate() << endl;
	cout <<"Employee Shift: "<< product1.getShift() << endl;
	cout <<"Employee PatRate"<< product1.getPayRate() << endl;
	cout << "here is the task3" << endl;
	cout << "name: " << test2.getName() << endl;
	cout << "Employee Number:   " << test2.getNum() << endl;
	cout << "Hired Date: " << test2.getDate() << endl;
	cout << "Employee Shift: " << test2.getSalary() << endl;
	cout << "Employee PatRate" << test2.getProduction() << endl;









	return 0;
}