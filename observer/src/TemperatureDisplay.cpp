#include "TemperatureDisplay.h"
#include <iostream>

TemperatureDisplay::TemperatureDisplay() : temperature(0)
{
}

TemperatureDisplay::~TemperatureDisplay()
{
    weatherData->deleteObserver(shared_from_this());
}

void TemperatureDisplay::initiate(ObservablePtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void TemperatureDisplay::update()
{
    temperature = dynamic_cast<WeatherData*>(weatherData.get())->getTemperature();
    show();
}

void TemperatureDisplay::show()
{
    std::cout << "temperature: " << temperature << std::endl;
}