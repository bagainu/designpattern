#include "HumidityDisplay.h"
#include <iostream>

HumidityDisplay::HumidityDisplay() : humidity(0)
{
}

HumidityDisplay::~HumidityDisplay()
{
    weatherData->deleteObserver(shared_from_this());
}

void HumidityDisplay::initiate(ObservablePtr newWeatherData)
{
    weatherData = newWeatherData;
    weatherData->addObserver(shared_from_this());
}

void HumidityDisplay::update()
{
    humidity = dynamic_cast<WeatherData*>(weatherData.get())->getHumidity();
    show();
}

void HumidityDisplay::show()
{
    std::cout << "humidity: " << humidity << std::endl;
}