// Kathleen Fillingim
// CIS 1202.501
// 05/09/25
// Inheritance


#include<iostream>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;

int main()
{
	// Vehicle/Car/Truck variables:

	string make;
	int year, doors, cap;

	// Populate then display a Vehicle instance

	cout << "\nVehicle:" << endl;
	cout << "\tEnter the manufacturer: ";
	getline(cin, make);
	cout << "\tEnter the year built: ";
	cin >> year;
	cin.ignore(); // Flush newline characters

	Vehicle veh1;
	veh1.displayInfo(make, year);

	// Populate then display a Car instance

	cout << "\nCar:" << endl;
	cout << "\tEnter the manufacturer: ";
	getline(cin, make);
	cout << "\tEnter the year built: ";
	cin >> year;
	cout << "\tEnter the number of doors: ";
	cin >> doors;
	cin.ignore(); // Flush newline characters

	Car car1;
	car1.displayInfo(make, year, doors);

	// Populate then display a Truck instance

	cout << "\nTruck:" << endl;
	cout << "\tEnter the manufacturer: ";
	getline(cin, make);
	cout << "\tEnter the year built: ";
	cin >> year;
	cout << "\tEnter the towing capacity: ";
	cin >> cap;

	Truck truck1;
	truck1.displayInfo(make, year, cap);

	cout << endl << endl;

	return 0;
}