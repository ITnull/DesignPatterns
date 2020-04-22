#pragma once
#include "Beverage.h"
class HouseBlend :
	public Beverage
{
public:
	HouseBlend();
	~HouseBlend();
	virtual double cost();
private:
	double price;
};

