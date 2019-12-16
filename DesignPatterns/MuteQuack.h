#pragma once
#include "QuackBehavior.h"
class MuteQuack :
	public QuackBehavior
{
public:
	MuteQuack();
	~MuteQuack();
	virtual void quack();
};

