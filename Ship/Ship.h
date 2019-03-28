#pragma once
#include<iostream>
#include<string>
using namespace std;
class Ship
{
	private:
	string nameOfShip;
	string yearBuilt;
public:
	Ship(string name, string year);
	void setShipname(string name);
	void setYearBuilt(string year);
	string getShipName();
	string getYearBuilt();
	virtual void display();
	
};