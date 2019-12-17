#include "WeatherDate.h"


WeatherDate::WeatherDate()
{
}


WeatherDate::~WeatherDate()
{
}

//ע��۲���
void WeatherDate::RegisterObserver(Observer* observer){
	observers.insert(observer);
}
//�Ƴ��۲���
void WeatherDate::RemoveObserver(Observer* observer){
	observers.erase(observer);
}
//֪ͨ�۲���
void WeatherDate::NotifiyObserver(){
	//�����۲���
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
