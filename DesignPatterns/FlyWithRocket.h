#pragma once
#include "FlyBehavior.h"
class FlyWithRocket :
	public FlyBehavior
{
public:
	FlyWithRocket();
	~FlyWithRocket();
	virtual void fly();
};

