#include "StatisticsDisplay.h"

//将WeatherDate类的数据传进来
StatisticsDisplay::StatisticsDisplay(WeatherDate *p_weather_data)
{
	this->p_weather_data = p_weather_data;
	this->p_weather_data->RegisterObserver(this);
}


StatisticsDisplay::~StatisticsDisplay()
{
	this->p_weather_data->RemoveObserver(this);
}


void StatisticsDisplay::update(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void StatisticsDisplay::display(){
	cout << "统计数据展示如下：" << "\r\n"
		<< "temperature:" << temperature << "\r\n"
		<< "humidity:" << humidity << "\r\n"
		<< "pressure:" << pressure << "\r\n"
		<< endl;
}


