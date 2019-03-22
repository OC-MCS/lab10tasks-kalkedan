#include "FuelGauge.h"
FuelGauge::FuelGauge()
{
	fuel = 0;
}
FuelGauge::FuelGauge(int fue)
{
	fuel = fue;
}
void FuelGauge::increament()
{
	if (fuel < 15)
		fuel++;
}
void FuelGauge::decreament()
{
	if (fuel > 0)
		fuel--;
}
