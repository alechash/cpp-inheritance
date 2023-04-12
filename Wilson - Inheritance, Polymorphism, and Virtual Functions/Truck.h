#pragma once

#include <string>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle {
private:
	int towCapacity;
public:
	Truck(int towCap) { towCapacity = towCap; };
	Truck() { towCapacity = 0; };

	int getTowCapacity();
	void setTowCapacity(int);
	void displayInfo();
};