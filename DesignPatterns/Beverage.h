#pragma once
#include<string>
using namespace std;

class Beverage
{
public:
	Beverage();
	~Beverage();

	virtual double cost() = 0;
	virtual string getDescription();
private:
	string description;
};

