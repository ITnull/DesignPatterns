#pragma once
#include "FlyBehavior.h"
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay();
	~FlyNoWay();
	virtual void fly();
};

