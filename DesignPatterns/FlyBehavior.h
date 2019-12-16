#pragma once
#include<iostream>
#include<string>
using namespace std;

class FlyBehavior
{
public:
	FlyBehavior();
	~FlyBehavior();
	virtual void fly() = 0;
};

