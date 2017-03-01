#include "Garage.h"
#include "iostream"

int Garage::getSpec()
{
	cout << "Please enter the specifications for the vehicle:\n";
	cin >> _spec;

	return 0;
}

int Garage::getOwnerName()
{
	cout << "Please enter the name of the owner:\n";
	cin >> _ownerName;

	return 0;
}

int Garage::setLocation()
{
	cout << "Which garage is this vehicle at? (Our locations are in Lakewood, Riverside, and Brockton)\n";
	cin >> _location;

	return 0;
}