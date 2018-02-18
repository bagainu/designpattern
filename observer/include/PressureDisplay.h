#include "Observer.h"
#include "WeatherData.h"

class PressureDisplay : public Observer, public std::enable_shared_from_this<PressureDisplay>
{
public:
    PressureDisplay();
    ~PressureDisplay();
    void initiate(ObservablePtr newWeatherData);
    void update();
    void show();

private:
    ObservablePtr weatherData;
    double pressure;
};