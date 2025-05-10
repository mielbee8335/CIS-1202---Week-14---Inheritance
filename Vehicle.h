#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle
{
protected: // Make protected, not private, so derived classes can access
	string oem;
	int yearBuilt;
public:
	Vehicle(); // Default constructor
	Vehicle(string & oem, int yearBuilt);
	
	void setOem(string & oem);
	string getOem();
	
	void setYear(int yearBuilt);
	int getYear();
	
	void displayInfo(string& m, int y);
};


#endif

