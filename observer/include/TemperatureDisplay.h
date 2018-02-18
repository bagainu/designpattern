#include "Observer.h"
#include "WeatherData.h"

class TemperatureDisplay : public Observer, public std::enable_shared_from_this<TemperatureDisplay>
{
public:
    TemperatureDisplay();
    ~TemperatureDisplay();
    void initiate(ObservablePtr newWeatherData);
    void update();
    void show();

private:
    ObservablePtr weatherData;
    double temperature;
};