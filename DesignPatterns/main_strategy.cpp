#ifndef STRATEGY_MAIN_H_
#define STRATEGY_MAIN_H_
#include"Duck.h"
#include"MallardDuck.h"
#include"RedheadDuck.h"
#include"RubberDuck.h"

#include"FlyBehavior.h"
#include"FlyNoWay.h"
#include"FlyWithWings.h"
#include"FlyWithRocket.h"

#include"QuackBehavior.h"
#include"Quack.h"
#include"MuteQuack.h"
#include"Squeak.h"

int main01(){
	/*
	Duck* rd = new RedheadDuck();
	RedheadDuck RD;
	rd->swim();	//���ø���ĺ���
	RD.swim();//��������ĺ���
	rd->display();

	Duck* md = new MallardDuck();
	md->swim();
	md->display();

	Duck* rud = new RubberDuck();
	rud->swim();
	rud->display();*/

	cout << "-------------" << endl;

	FlyBehavior *pfWings = new FlyWithWings;	//�������FlyWithWings()Ĭ�Ϲ��캯��
	FlyBehavior *pfNo = new FlyNoWay;
	FlyBehavior *pfRocket = new FlyWithRocket;

	// fly with wings
	Duck *pDuck = new MallardDuck(pfWings);
	pDuck->performFly();

	// fly with a rocket
	pDuck->setFlyBehavior(pfRocket);
	pDuck->performFly();

	pDuck->setFlyBehavior(pfNo);
	pDuck->performFly();

	QuackBehavior* pqQuack = new Quack;


	system("pause");
	return 0;
}


#endif STRATEGY_MAIN_H_