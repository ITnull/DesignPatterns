#pragma once
#include"FlyBehavior.h"
#include"QuackBehavior.h"
#include<iostream>
#include<string>
using namespace std;

class Duck
{
public:
	Duck(FlyBehavior* fb);//构造函数
	Duck(QuackBehavior* qb);

	~Duck();

	void swim();
	virtual void display();	//虚函数
	void performFly();
	void performQuack();
	void setFlyBehavior(FlyBehavior* flyBehavior);
	void setQuckBehavior(QuackBehavior* quackBehavior);
private:
	FlyBehavior* fb;
	QuackBehavior* qb;
};

