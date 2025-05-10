#include"Car.h"
#include<iostream>

using namespace std;

// Function definitions

Car::Car()
{
	Vehicle();
	numDoors = 0;
}

Car::Car(string &m, int y, int doors)
{
	Vehicle(m,y);
	numDoors = doors;
}

void Car::setNumDoors(int doors)
{
	numDoors = doors;
}

int Car::getNumDoors()
{
	return numDoors;
}

void Car::displayInfo(string& m, int y, int doors)
{
	Vehicle::displayInfo(m, y);
	setNumDoors(doors);
	cout << "\tNumber of doors: " << getNumDoors() << endl;
}

