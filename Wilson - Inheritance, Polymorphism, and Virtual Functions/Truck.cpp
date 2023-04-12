#include "Truck.h"
#include <iostream>

int Truck::getTowCapacity()
{
    return towCapacity;
}

void Truck::setTowCapacity(int towCap)
{
    towCapacity = towCap;
}

void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towCapacity << endl;
}
