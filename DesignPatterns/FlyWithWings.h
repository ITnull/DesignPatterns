#pragma once
#include "FlyBehavior.h"
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings();
	~FlyWithWings();
	virtual void fly();
};

