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
	int year, doors;
	double tow;

	// Populate then display a Vehicle instance

	cout << "\nEnter the following information: " << endl;
	cout << "\tVehicle Make: ";
	cin.ignore();
	getline(cin, make);
	cout << "\tVehicle Year: ";
	cin >> year;
	cout << endl;
	Vehicle veh1;
	veh1.displayInfo();

	// Populate then display a Car instance

	cout << "\nEnter the following information: " << endl;
	cout << "\tVehicle Make: ";
	cin.ignore();
	getline(cin, make);
	cout << "\tVehicle Year: ";
	cin >> year;
	cout << "\tNumber of doors: ";
	cin >> doors;

	Car car1;
	car1.displayInfo();

	// Populate then display a Truck instance

	cout << "\nEnter the following information: " << endl;
	cout << "\tVehicle make : ";
	cin.ignore();
	getline (cin, make);
	cout << year;
	cout << "\tNumber of doors: ";
	cin >> doors;

	Truck truck1;
	truck1.displayInfo();

	return 0;


}