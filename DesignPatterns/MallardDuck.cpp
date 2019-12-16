#include "MallardDuck.h"


MallardDuck::MallardDuck(FlyBehavior* fb) :Duck(fb)
{
}

MallardDuck::MallardDuck(QuackBehavior* qb) : Duck(qb){

}


MallardDuck::~MallardDuck()
{
}

void MallardDuck::display(){
	cout << "ÂÌÍ·Ñ¼:MallardDuck." << endl;
}
