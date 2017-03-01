#include "CustomerList.h"
#include <iostream>

CustomerList::CustomerList()
{
	cout << "To add the customer into the list, please provide the number (1, 2, 3, or 4) that their vehicle was in: ";
	cin >> currentListEntry;
	cout << endl << "Thank you.";
}



CustomerList::~CustomerList()
{
	_customerList = _customerList + " " + currentListEntry;
}
