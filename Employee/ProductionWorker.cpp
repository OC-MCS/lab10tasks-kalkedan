#include "ProductionWorker.h"
#include"Employee.h"
using namespace std;


//ProductionWorker::ProductionWorker()
//{
//	shift = 0;
//	payRate = 0.0;
//}

ProductionWorker::ProductionWorker(int sh, double pay,string name, int num, string date ):Employee(name,num,date)
{
	shift = sh;
	payRate = pay;
}
void ProductionWorker::setShift(int sh)
{
	shift = sh;

}
void ProductionWorker::setPayRate(double pay){
payRate = pay;


}
int ProductionWorker::getShift()
{
	return shift;
}
double ProductionWorker::getPayRate()
{
	return payRate;
}

