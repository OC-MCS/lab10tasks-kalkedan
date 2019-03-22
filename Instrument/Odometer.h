#pragma once
#include<iostream>

#include"FuelGauge.h"
using namespace std;
class Odometer
{
private:
	
	int milage;
public:
	Odometer();
	
	Odometer(int mile);
	
	void add(FuelGauge &fuelguage);
	int getMilage()
	{
		return milage;
	}
	
	
	
};

