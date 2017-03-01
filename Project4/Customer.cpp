#include "Customer.h"
#include "iostream"

Customer::Customer()
{
	cout << "Please provide the owners first and last name: ";
	cin >> ownerName;
	cout << endl << "Please provide the vehicle specifications (make, model, year, and color): ";
	cin >> vehicleSpecs;
	cout << endl << "Please provide any problems reported with the vehicle: ";
	cin >> problems;
	cout << endl << "Thank you for providing this information.";
}

Customer::~Customer()
{
	_ownerName = ownerName;
	_vehicleSpecs = vehicleSpecs;
	_problems = problems;
}