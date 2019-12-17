#include "CurrentConditionsDisplay.h"

//将WeatherDate类的数据传进来,有数据就进行注册
CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherDate *p_weather_data)
{
	this->p_weather_data = p_weather_data;
	this->p_weather_data->RegisterObserver(this);
	//这里调用纯虚函数RegisterObserver(),但是该函数由派生类WeatherDate生成
}


CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
	this->p_weather_data->RemoveObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure){
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void CurrentConditionsDisplay::display(){
	cout << "当前天气展示如下：" << "\r\n"
		<<"temperature:" << temperature << "\r\n"
		<< "humidity:" << humidity << "\r\n"
		<< "pressure:" << pressure << "\r\n"
		<< endl;
}
