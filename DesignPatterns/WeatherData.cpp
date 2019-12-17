#include "WeatherData.h"


WeatherData::WeatherData()
{
}


WeatherData::~WeatherData()
{
}

//ע��۲���
void WeatherData::RegisterObserver(Observer* observer){
	observers.insert(observer);
}
//�Ƴ��۲���
void WeatherData::RemoveObserver(Observer* observer){
	observers.erase(observer);
}
//֪ͨ�۲���
void WeatherData::NotifiyObserver(){
	//�����۲���
	for (set<Observer *>::iterator it = observers.begin(); it != observers.end(); it++){
		(*it)->update(temperature, humidity, pressure);
	}
}

void WeatherData::GetTemperature(){
	this->temperature = temperature;
}

void WeatherData::GetHumidity(){
	this->humidity = humidity;
}

void WeatherData::GetPressure(){
	this->pressure = pressure;
}

void WeatherData::SetMeasurements(float temperature, float humidity, float pressure){
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	MeasurementsChanged();
}

void WeatherData::MeasurementsChanged(){
	NotifiyObserver();
}
