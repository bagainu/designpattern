#include "Observer.h"
#include "WeatherData.h"

class HumidityDisplay : public Observer, public std::enable_shared_from_this<HumidityDisplay>
{
public:
    HumidityDisplay();
    ~HumidityDisplay();
    void initiate(WeatherDataPtr newWeatherData);
    void update();
    void show();

private:
    WeatherDataPtr weatherData;
    double humidity;
};