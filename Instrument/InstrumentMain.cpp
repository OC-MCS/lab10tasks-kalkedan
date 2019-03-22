#include"Odometer.h"
#include"FuelGauge.h"
#include<iostream>
using namespace std;
int main()
{
	Odometer odo1;
	FuelGauge fuel1;
	
	for (int i = 0; i < 15; i++)
	{
		fuel1.increament();
	}
	cout << fuel1.getFuel() << endl;
	
	while (fuel1.getFuel() > 0 )
	{
		odo1.add(fuel1);
		cout << odo1.getMilage() << endl;
		cout << fuel1.getFuel() << endl;

	}
	return 0;
}