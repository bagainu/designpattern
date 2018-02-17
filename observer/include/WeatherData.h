#pragma once
#include "Observable.h"

class WeatherData : public Observable
{
public:
    WeatherData();
    ~WeatherData();
    double getTemperature();
    double getPressure();
    double getHumidity();
    void changeData(double temperature, double pressure, double humidity);

private:
    double temperature;
    double pressure;
    double humidity;
};

typedef std::shared_ptr<WeatherData> WeatherDataPtr;
typedef std::weak_ptr<WeatherData> WeatherDataWPtr;
