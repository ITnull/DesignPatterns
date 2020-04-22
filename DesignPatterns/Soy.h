#pragma once
#include "CondimentDecorator.h"
class Soy :
	public CondimentDecorator
{
public:
	Soy();
	~Soy();
	virtual double cost();
	virtual string getDescription();
};

