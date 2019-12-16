#ifndef _MAIN_
#define _MAIN_
#include"Duck.h"
#include"MallardDuck.h"
#include"RedheadDuck.h"
#include"RubberDuck.h"

#include"FlyBehavior.h"
#include"FlyNoWay.h"
#include"FlyWithWings.h"
#include"FlyWithRocket.h"

int main(){
	/*
	Duck* rd = new RedheadDuck();
	RedheadDuck RD;
	rd->swim();	//调用父类的函数
	RD.swim();//调用子类的函数
	rd->display();

	Duck* md = new MallardDuck();
	md->swim();
	md->display();

	Duck* rud = new RubberDuck();
	rud->swim();
	rud->display();*/

	cout << "-------------" << endl;

	FlyBehavior *pfWings = new FlyWithWings;
	FlyBehavior *pfNo = new FlyNoWay;
	FlyBehavior *pfRocket = new FlyWithRocket;

	// fly with wings
	Duck *pDuck = new MallardDuck(pfWings);
	pDuck->performFly();

	// fly with a rocket
	pDuck->setFlyBehavior(pfRocket);
	pDuck->performFly();

	system("pause");
	return 0;
}


#endif _MAIN_