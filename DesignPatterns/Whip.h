#pragma once
#include "CondimentDecorator.h"
class Whip :
	public CondimentDecorator
{
public:
	Whip();
	~Whip();
	virtual double cost();
	virtual string getDescription();
};

