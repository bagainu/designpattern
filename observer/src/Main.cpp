#include "WeatherData.h"
#include "TemperatureDisplay.h"
#include "PressureDisplay.h"
#include "HumidityDisplay.h"

int main()
{
    std::shared_ptr<WeatherData> weatherData = std::make_shared<WeatherData>();
    std::shared_ptr<TemperatureDisplay> temperatureDisplay = std::make_shared<TemperatureDisplay>();
    std::shared_ptr<PressureDisplay> pressureDisplay = std::make_shared<PressureDisplay>();
    std::shared_ptr<HumidityDisplay> humidityDisplay = std::make_shared<HumidityDisplay>();

    temperatureDisplay->initiate(weatherData);
    pressureDisplay->initiate(weatherData);
    humidityDisplay->initiate(weatherData);

    weatherData->changeData(1, 1, 2);
    weatherData->changeData(3, 4, 5);

    return 0;
}