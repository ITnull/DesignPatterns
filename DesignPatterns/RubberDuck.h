#pragma once
#include "Duck.h"
class RubberDuck :
	public Duck
{
public:
	
	
	RubberDuck(FlyBehavior* fb);
	RubberDuck(QuackBehavior* qb);

	~RubberDuck();
	virtual void display();
};

