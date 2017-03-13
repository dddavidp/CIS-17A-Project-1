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
	string ownerName;
	string specs;
	string problems;

	void getOwnerName();
	void getSpecs();
	void getProblems();
};