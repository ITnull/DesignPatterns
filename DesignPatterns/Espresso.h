#pragma once
#include "Beverage.h"
class Espresso :
	public Beverage
{
public:
	Espresso();
	~Espresso();
	virtual double cost();
private:
	double price;
};

