#pragma once

class Invoice
{
private:
	int _serviceFee = 50;
	int _partRepair = 25;
public:
	float currentBill;

	Invoice();
	~Invoice();
};

