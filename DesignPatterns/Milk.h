#pragma once
#include "CondimentDecorator.h"
#include"Beverage.h"

class Milk :
	public CondimentDecorator
{
public:
	Milk(Beverage* beverage);
	~Milk();
	virtual double cost();
	virtual string getDescription();
private:
	Beverage* beverage;	//Beverage beverage
};

