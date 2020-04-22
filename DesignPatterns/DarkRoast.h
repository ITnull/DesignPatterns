#pragma once
#include "Beverage.h"

class DarkRoast :
	public Beverage
{
public:
	DarkRoast();
	~DarkRoast();
	//void setPrice(double price);
	virtual double cost();
private:
	double price;
};

