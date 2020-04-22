#ifndef _DECORATOR_MAIN_H_
#define _DECORATOR_MAIN_H_
#include<iostream>
#include<string>
#include"Beverage.h"
#include"DarkRoast.h"
#include"Espresso.h"
#include"Milk.h"

using namespace std;

int main03(){

	Beverage* beverage1 = new DarkRoast();//构造函数赋初始值
	beverage1 = new Milk(beverage1);

	//Beverage* beverage = new Espresso();
	DarkRoast* dr = new DarkRoast();
	//dr->setPrice(1.0);


	system("pause");
	return 0;
}

#endif _DECORATOR_MAIN_H_