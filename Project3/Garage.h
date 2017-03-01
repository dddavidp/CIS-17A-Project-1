#pragma once
#include <string>

using namespace std;

class Garage
{
private:
	string _location;
	string _spec;
	string _ownerName;
public:
	int setLocation();
	int getSpec();
	int getOwnerName();
};

