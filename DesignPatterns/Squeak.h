#pragma once
#include "QuackBehavior.h"
class Squeak :
	public QuackBehavior
{
public:
	Squeak();
	~Squeak();
	virtual void quack();
};

