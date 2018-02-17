#include "TemperatureDisplay.h"
#include <iostream>

TemperatureDisplay::TemperatureDisplay() : temperature(0)
{
}

TemperatureDisplay::~TemperatureDisplay()
{
}

void TemperatureDisplay::initiate(WeatherDataPtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void TemperatureDisplay::update()
{
    temperature = weatherData->getTemperature();
    show();
}

void TemperatureDisplay::show()
{
    std::cout << "temperature: " << temperature << std::endl;
}