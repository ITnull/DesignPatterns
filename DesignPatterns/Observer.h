#pragma once
#include<iostream>
#include<string>
using namespace std;

//�ӿ�
class Observer
{
public:
	Observer();
	~Observer();
	virtual void update(float temperature, float humidity, float pressure) = 0;
};

