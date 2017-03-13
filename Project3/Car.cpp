#pragma once

#include "Car.h"
#include "iostream"

using namespace std;

void Car::getOwnerName()
{
	cout << "Please enter the name of the owner: ";
	cin >> ownerName;		//why isnt this line working
	cout << endl;
}

void Car::getSpecs()
{
	cout << "Please enter the make, model, year, and color of the vehicle: ";
	cin >> specs;			//and this line
	cout << endl;
}

void Car::getProblems()
{
	cout << "Please enter any problems (e.g. \"the brakes are making a noise\") provided by the customer: ";
	cin >> problems;		//and this line
	cout << endl;
}

Car::Car()
{
	getOwnerName();
	getSpecs();
	getProblems();
}


Car::~Car()
{
	
}
