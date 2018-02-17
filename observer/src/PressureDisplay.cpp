#include "PressureDisplay.h"
#include <iostream>

PressureDisplay::PressureDisplay() : pressure(0)
{
}

PressureDisplay::~PressureDisplay()
{
}

void PressureDisplay::initiate(WeatherDataPtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void PressureDisplay::update()
{
    pressure = weatherData->getPressure();
    show();
}

void PressureDisplay::show()
{
    std::cout << "pressure: " << pressure << std::endl;
}