#include "Odometer.h" 
#include"FuelGauge.h"
Odometer::Odometer()
{
	milage = 0;
}
Odometer::Odometer (int mile)
{
	milage = mile;
}
void Odometer::add(FuelGauge &fuelguage)
{
	if (milage < 999999)
	{
		milage++;
		if (milage % 24 == 0)
		{
			fuelguage.decreament();
		}
	}
	else
		milage = 0;
	
}

