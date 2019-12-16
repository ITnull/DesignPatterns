#pragma once
#include "Duck.h"
class RedheadDuck :
	public Duck
{
public:
	RedheadDuck(FlyBehavior* fb);
	RedheadDuck(QuackBehavior* qb);
	~RedheadDuck();

	//virtual void display(); //adding virtual is OK but not necessary
	void swim();
};

