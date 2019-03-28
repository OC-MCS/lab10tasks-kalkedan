#include<iostream>
#include"CargoShip.h"
#include"CruiseShip.h"
#include"Ship.h"
using namespace std;
int main()
{
	int const num = 3;
	Ship *test[num] = { new Ship("kal's Ship","1995"), new CargoShip(3000,"Tsega's Ship","1998"),new CruiseShip(87,"Betsi'sShip","2017") };
	for (int i = 0; i < num; i++)
	{
		test[i]->display();
	}
}