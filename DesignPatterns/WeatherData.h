#pragma once
#include<set>
#include "Subject.h"
#include"Observer.h"

class WeatherData :
	public Subject
{
public:
	WeatherData();
	~WeatherData();

	virtual void RegisterObserver(Observer* observer);
	virtual void RemoveObserver(Observer* observer);
	virtual void NotifiyObserver();

	void GetTemperature();
	void GetHumidity();
	void GetPressure();

	void MeasurementsChanged();

	void SetMeasurements(float temperature, float humidity, float pressure);

private:
	set<Observer *> observers;
	float temperature;
	float humidity;
	float pressure;

};

