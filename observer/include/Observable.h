#pragma once
#include "Observer.h"
#include <vector>

class Observable
{
public:
    Observable();
    virtual ~Observable();
    void addObserver(ObserverPtr observer);
    void deleteObserver(ObserverPtr observer);
    void notifyObservers();

private:
    std::vector<ObserverPtr> observers;
};

typedef std::shared_ptr<Observable> ObservablePtr;
typedef std::weak_ptr<Observable> ObservableWPtr;
