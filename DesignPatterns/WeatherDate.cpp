#include "WeatherDate.h"


WeatherDate::WeatherDate()
{
}


WeatherDate::~WeatherDate()
{
}

//注册观察者
void WeatherDate::RegisterObserver(Observer* observer){
	observers.insert(observer);
}
//移除观察者
void WeatherDate::RemoveObserver(Observer* observer){
	observers.erase(observer);
}
//通知观察者
void WeatherDate::NotifiyObserver(){
	//遍历观察者
	for (set<Observer *>::iterator it = observers.begin(); it != observers.end(); it++){
		(*it)->update(temperature, humidity, pressure);
	}
}

void WeatherDate::GetTemperature(){
	this->temperature = temperature;
}

void WeatherDate::GetHumidity(){
	this->humidity = humidity;
}

void WeatherDate::GetPressure(){
	this->pressure = pressure;
}

void WeatherDate::SetMeasurements(float temperature, float humidity, float pressure){
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	MeasurementsChanged();
}

void WeatherDate::MeasurementsChanged(){
	NotifiyObserver();
}
