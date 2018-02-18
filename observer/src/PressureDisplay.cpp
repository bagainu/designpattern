#include "PressureDisplay.h"
#include <iostream>

PressureDisplay::PressureDisplay() : pressure(0)
{
}

PressureDisplay::~PressureDisplay()
{
    weatherData->deleteObserver(shared_from_this());
}

void PressureDisplay::initiate(ObservablePtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void PressureDisplay::update()
{
    pressure = dynamic_cast<WeatherData*>(weatherData.get())->getPressure();
    show();
}

void PressureDisplay::show()
{
    std::cout << "pressure: " << pressure << std::endl;
}