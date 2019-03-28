#include"CruiseShip.h"
CruiseShip::CruiseShip(int num, string name, string year):Ship(name, year)
{
	numofPassengers = num;
}
void CruiseShip::SetPassenger(int num)
{
	numofPassengers = num;

}

int CruiseShip::getPassenger()
{
	return numofPassengers;
}
void CruiseShip::display() 
{
cout << "Ship's Name" <<"  "<< getShipName() << "  "<<"Number of passegnger" << "  "<<getPassenger() << endl;
}