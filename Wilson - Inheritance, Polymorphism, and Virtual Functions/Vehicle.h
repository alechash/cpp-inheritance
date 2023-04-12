#pragma once

#include <string>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle(string manu, int year) { manufacturer = manu; yearBuilt = year; };
	Vehicle() { manufacturer = ""; yearBuilt = 0; };

	string getManufacturer();
	int getYear();
	void setManufacturer(string);
	void setYear(int);
	void displayInfo();
};