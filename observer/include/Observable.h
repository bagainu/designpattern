#pragma once
#include "Observer.h"
#include <vector>

class Observable
{
public:
    Observable() {}
    virtual ~Observable() {}
    virtual void addObserver(ObserverPtr observer) = 0;
    virtual void deleteObserver(ObserverPtr observer) = 0;
    virtual void notifyObservers() = 0;
};

typedef std::shared_ptr<Observable> ObservablePtr;
typedef std::weak_ptr<Observable> ObservableWPtr;
