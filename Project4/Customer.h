#pragma once
#include <string>

using namespace std;

class Customer
{
private:
	string _ownerName;
	string _vehicleSpecs;
	string _problems;
public:
	string ownerName;
	string vehicleSpecs;
	string problems;

	Customer();
	~Customer();
};