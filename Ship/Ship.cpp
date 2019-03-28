#include"Ship.h"
#include<iostream>
using namespace std;
Ship::Ship(string name, string year)
{
	nameOfShip = name;
	yearBuilt = year;
}
void Ship::setShipname(string name)
{
	nameOfShip = name;

}
void Ship::setYearBuilt(string year)
{
	yearBuilt = year;
}
string Ship::getShipName()
{
	return nameOfShip;
}
string Ship:: getYearBuilt()
{
	return yearBuilt;
}
void Ship:: display() 
{
	cout << "Ship's Name" <<"  "<< getShipName() << "  "<<"Ships Buit Year" <<"  "<< getYearBuilt() << endl;
}