#pragma once
#include<iostream>
#include<string>
using namespace std;

class QuackBehavior
{
public:
	QuackBehavior();
	~QuackBehavior();
	virtual void quack() = 0;
};

