#pragma once

#include <string>
#include "Vehicle.h"

using namespace std;

class Car: public Vehicle {
private:
	int noDoors;
public:
	Car(int doors) { noDoors = doors; };
	Car() { noDoors = 0; };

	int getNoDoors();
	void setNoDoors(int);
	void displayInfo();
};