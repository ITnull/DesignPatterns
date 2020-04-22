#pragma once
#include "Beverage.h"
class CondimentDecorator :
	public Beverage
{
public:
	CondimentDecorator();
	~CondimentDecorator();
	virtual string getDescription();
};

