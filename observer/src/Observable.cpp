#include "Observable.h"
#include <algorithm>

Observable::Observable()
{
}

Observable::~Observable()
{
}

void Observable::addObserver(ObserverPtr observer)
{
    observers.push_back(observer);
}

void Observable::deleteObserver(ObserverPtr observer)
{
    auto iter = std::find(observers.begin(), observers.end(), observer);
    if (iter != observers.end())
    {
        observers.erase(iter);
    }
}

void Observable::notifyObservers()
{
    for (auto iter : observers)
    {
        iter->update();
    }
}