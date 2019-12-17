#pragma once
#include "Observer.h"
#include"DisplayElement.h"
#include"WeatherDate.h"

class CurrentConditionsDisplay :
	public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(WeatherDate *p_weather_data);
	~CurrentConditionsDisplay();
	virtual void update(float temperature, float humidity, float pressure);
	virtual void display();
private:
	WeatherDate *p_weather_data;
	float temperature;
	float humidity;
	float pressure;
};

