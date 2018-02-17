#include "WeatherData.h"


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