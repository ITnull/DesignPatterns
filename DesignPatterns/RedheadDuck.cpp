#include "RedheadDuck.h"
#include<string>


RedheadDuck::RedheadDuck(FlyBehavior* fb) :Duck(fb)
{
}

RedheadDuck::RedheadDuck(QuackBehavior* qb) : Duck(qb)
{
}

RedheadDuck::~RedheadDuck()
{
}

void RedheadDuck::swim(){
	cout << "RedheadDuck can swim." << endl;
}
/*
void RedheadDuck::display(){
	cout <<"display:RedheadDuck." << endl;
}
*/