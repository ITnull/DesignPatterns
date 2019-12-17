#pragma once
#include "Observer.h"
#include"DisplayElement.h"
#include"WeatherDate.h"

class StatisticsDisplay :
	public Observer,public DisplayElement
{
public:
	StatisticsDisplay(WeatherDate *p_weather_data);
	~StatisticsDisplay();
	virtual void update(float temperature, float humidity, float pressure);
	virtual void display();
private:
	WeatherDate *p_weather_data;
	float temperature;
	float humidity;
	float pressure;
};
