#pragma once
#include <string>

using namespace std;

class Car
{
private:
	string _ownerName;
	string _specs;
	string _problems;
public:
	Car();
	~Car();

	void getOwnerName();
	void getSpecs();
	void getProblems();
};