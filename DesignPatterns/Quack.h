#pragma once
#include "QuackBehavior.h"
class Quack :
	public QuackBehavior
{
public:
	Quack();
	~Quack();
	virtual void quack();
};

