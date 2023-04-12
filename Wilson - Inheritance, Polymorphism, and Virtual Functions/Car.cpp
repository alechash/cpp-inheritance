#include "Car.h"
#include <iostream>

int Car::getNoDoors()
{
	return noDoors;
}

void Car::setNoDoors(int doors)
{
	noDoors = doors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << noDoors << endl;
}
