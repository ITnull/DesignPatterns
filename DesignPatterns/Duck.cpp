#include "Duck.h"


Duck::Duck(FlyBehavior* fb) :fb(fb)
{
}

Duck::Duck(QuackBehavior* qb) : qb(qb){
}


Duck::~Duck()
{
}

void Duck::swim(){
	cout << "p duck can swim!" << endl;
}

void Duck::display(){
	cout << "p duck." << endl;
}

void Duck::performFly(){
	fb->fly();	//FlyBehavior* fb
}

void Duck::performQuack(){
	qb->quack();	//QuackBehavior* qb
}

void Duck::setFlyBehavior(FlyBehavior* flyBehavior) {
	this->fb = flyBehavior;
}

void Duck::setQuckBehavior(QuackBehavior* quackBehavior) {
	this->qb = quackBehavior;
}
