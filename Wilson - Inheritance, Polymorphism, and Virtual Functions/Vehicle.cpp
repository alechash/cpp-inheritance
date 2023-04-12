#include "Vehicle.h"
#include <iostream>

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return yearBuilt;
}

void Vehicle::setManufacturer(string manu)
{
	manufacturer = manu;
}

void Vehicle::setYear(int year)
{
	yearBuilt = year;
}

void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;

}
