#pragma once
#include<iostream>
#include<string>
#include"Observer.h"

using namespace std;

class Subject
{
public:
	Subject();
	~Subject();
	virtual void RegisterObserver(Observer* observer) = 0;
	virtual void RemoveObserver(Observer* observer) = 0;
	virtual void NotifiyObserver() = 0;
};

