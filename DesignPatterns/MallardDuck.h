#pragma once
#include "Duck.h"
class MallardDuck :
	public Duck
{
public:
	MallardDuck(FlyBehavior* fb);
	MallardDuck(QuackBehavior* qb);

	~MallardDuck();
	virtual void display();
};

