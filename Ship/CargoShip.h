#pragma once
#include<iostream>
#include"Ship.h"
using namespace std;
class CargoShip:public Ship
{
private:
	int carryingCap;
	public:
		CargoShip (int tons, string name, string year);
		void setCarryon(int tons);
		int getCargo();
		  void display();


};