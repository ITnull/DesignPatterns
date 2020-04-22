#ifndef _OBSERVER_MAIN_H_
#define _OBSERVER_MAIN_H_
#include<iostream>
#include"WeatherData.h"
#include"CurrentConditionsDisplay.h"
#include"StatisticsDisplay.h"

using namespace std;

int main02(){

	WeatherData *p_weather_data = new WeatherData();
	//���캯��������ע��
	CurrentConditionsDisplay *p_current_display = new CurrentConditionsDisplay(p_weather_data);
	StatisticsDisplay *p_statistics_display = new StatisticsDisplay(p_weather_data);

	p_weather_data->SetMeasurements(80, 65, 30.4f);
	p_weather_data->SetMeasurements(81, 72, 32.4f);

	//ȡ������
	p_current_display->~CurrentConditionsDisplay();
	p_weather_data->SetMeasurements(79.5, 68, 34.2f);

	system("pause");
	return 0;
}

#endif _OBSERVER_MAIN_H_