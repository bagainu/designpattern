#include "WeatherData.h"
#include <algorithm>


WeatherData::WeatherData() : temperature(0), pressure(0), humidity(0)
{
}

WeatherData::~WeatherData()
{
}

double WeatherData::getTemperature()
{
    return temperature;
}

double WeatherData::getPressure()
{
    return pressure;
}

double WeatherData::getHumidity()
{
    return humidity;
}

void WeatherData::changeData(double temperature, double pressure, double humidity)
{
    this->temperature = temperature;
    this->pressure = pressure;
    this->humidity = humidity;
    notifyObservers();
}

void WeatherData::addObserver(ObserverPtr observer)
{
    observers.push_back(observer);
}

void WeatherData::deleteObserver(ObserverPtr observer)
{
    auto iter = std::find(observers.begin(), observers.end(), observer);
    if (iter != observers.end())
    {
        observers.erase(iter);
    }
}

void WeatherData::notifyObservers()
{
    for (auto iter : observers)
    {
        iter->update();
    }
}
