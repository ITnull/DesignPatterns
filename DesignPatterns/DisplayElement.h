#pragma once
#include<iostream>
#include<string>
using namespace std;

class DisplayElement
{
public:
	DisplayElement();
	~DisplayElement();
	virtual void display() = 0;
};

