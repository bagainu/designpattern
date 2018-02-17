#include "HumidityDisplay.h"
#include <iostream>

HumidityDisplay::HumidityDisplay() : humidity(0)
{
}

HumidityDisplay::~HumidityDisplay()
{
}

void HumidityDisplay::initiate(WeatherDataPtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void HumidityDisplay::update()
{
    humidity = weatherData->getHumidity();
    show();
}

void HumidityDisplay::show()
{
    std::cout << "humidity: " << humidity << std::endl;
}