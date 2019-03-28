#include"CargoShip.h"

CargoShip::CargoShip(int tons, string name, string year) :Ship (name,year)
{
	carryingCap = tons;
}
void CargoShip::setCarryon(int tons)
{
	carryingCap = tons;

}
int CargoShip::getCargo()
{
	return carryingCap;
}
void CargoShip::display()
{
	cout << "ship's Name" << "   "<<getShipName() <<"   " <<"loading Capcity" << "   "<<getCargo() << endl;
}