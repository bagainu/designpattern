#pragma once
#include <memory>

class Observer
{
public:
    virtual void update() = 0;
};

typedef std::shared_ptr<Observer> ObserverPtr;
typedef std::weak_ptr<Observer> ObserverWPtr;
