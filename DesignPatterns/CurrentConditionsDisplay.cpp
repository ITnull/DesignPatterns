#include "CurrentConditionsDisplay.h"

//��WeatherDate������ݴ�����,�����ݾͽ���ע��
CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherDate *p_weather_data)
{
	this->p_weather_data = p_weather_data;
	this->p_weather_data->RegisterObserver(this);
	//������ô��麯��RegisterObserver(),���Ǹú�����������WeatherDate����
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
	cout << "��ǰ����չʾ���£�" << "\r\n"
		<<"temperature:" << temperature << "\r\n"
		<< "humidity:" << humidity << "\r\n"
		<< "pressure:" << pressure << "\r\n"
		<< endl;
}
