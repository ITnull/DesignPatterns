#pragma once
#include "CondimentDecorator.h"
class Mocha :
	public CondimentDecorator
{
public:
	Mocha();
	~Mocha();
	virtual double cost();
	virtual string getDescription();
};

