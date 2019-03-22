#pragma once
#include<iostream>
using namespace std;
class FuelGauge
{
private:
	int fuel;


public:
	FuelGauge();
	
	FuelGauge(int fue);
	
	void increament();
	
	void decreament();
	int getFuel()
	{
		return fuel;
	}
};

