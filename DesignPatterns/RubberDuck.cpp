#include "RubberDuck.h"


RubberDuck::RubberDuck(FlyBehavior* fb) :Duck(fb)
{
}
RubberDuck::RubberDuck(QuackBehavior* qb) : Duck(qb)
{
}

RubberDuck::~RubberDuck()
{
}

void RubberDuck::display(){
	cout << "display:RubberDuck." << endl;
}