#pragma once
#include<iostream>
#include"Ship.h"
using namespace std;
class CruiseShip: public Ship
{
private:
	int numofPassengers;
public:
	CruiseShip(int num, string name, string year);
	void SetPassenger(int num);
	int getPassenger();
	void display();
};