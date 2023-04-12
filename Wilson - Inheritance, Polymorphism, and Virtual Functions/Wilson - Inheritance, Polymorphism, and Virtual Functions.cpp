// Alec Wilson
// 04/12/2023
// CIS 1202
// Vehicle Program

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "WilsonAlecPL.h"

using namespace std;

int main() {
	cout << "Vehicle Program" << endl << endl;
	cout << "Vehicle:" << endl << "Enter vehicle manufacturer: ";
	string vehicleManu;
	cin >> vehicleManu;
	cout << "Enter vehicle year: ";
	int vehicleYear = validateNum<int>("", true, 1970, 2030);

	Vehicle veh = Vehicle();
	veh.setManufacturer(vehicleManu);
	veh.setYear(vehicleYear);

	veh.displayInfo();


	cout << endl << "Car:" << endl << "Enter car manufacturer: ";
	string carManu;
	cin >> carManu;
	cout << "Enter car year: ";
	int carYear = validateNum<int>("", true, 1970, 2030);
	cout << "Enter car door count: ";
	int carDoors = validateNum<int>("", false);

	Car car = Car();
	car.setManufacturer(carManu);
	car.setYear(carYear);
	car.setNoDoors(carDoors);

	car.displayInfo();


	cout << endl << "Truck:" << endl << "Enter truck manufacturer: ";
	string truckManu;
	cin >> truckManu;
	cout << "Enter truck year: ";
	int truckYear = validateNum<int>("", true, 1970, 2030);
	cout << "Enter truck tow capacity: ";
	int truckTowCap = validateNum<int>("", false);

	Truck truck = Truck();
	truck.setManufacturer(truckManu);
	truck.setYear(truckYear);
	truck.setTowCapacity(truckTowCap);

	truck.displayInfo();

	endProgram();
};