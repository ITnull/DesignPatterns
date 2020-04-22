#include "Milk.h"


Milk::Milk(Beverage* beverage)
{
	beverage = beverage;
}


Milk::~Milk()
{
}

double Milk::cost(){
	return 9.0;
}

string Milk::getDescription(){
	return "this is cup of milk.";
}
