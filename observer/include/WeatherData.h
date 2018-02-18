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

    void addObserver(ObserverPtr observer);
    void deleteObserver(ObserverPtr observer);
    void notifyObservers();

private:
    std::vector<ObserverPtr> observers;
    double temperature;
    double pressure;
    double humidity;
};
