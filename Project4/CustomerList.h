#pragma once
#include <string>

using namespace std;

class CustomerList
{
private:
	string _customerList;
public:
	string currentListEntry;

	CustomerList();
	~CustomerList();
};

