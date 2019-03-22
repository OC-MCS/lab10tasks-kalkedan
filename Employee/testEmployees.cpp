#include<iostream>
#include"Employee.h"
#include"ProductionWorker.h"
using namespace std;
int main()
{
	ProductionWorker product1(1, 8.0,"Kalkedan",1313,"03/03/1995");
	cout <<"name: "<< product1.getName() << endl;
	cout <<"Employee Number:   "<< product1.getNum() << endl;
	cout <<"Hired Date: "<< product1.getDate() << endl;
	cout <<"Employee Shift: "<< product1.getShift() << endl;
	cout <<"Employee PatRate"<< product1.getPayRate() << endl;









	return 0;
}