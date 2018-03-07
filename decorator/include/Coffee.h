#pragma once
#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast() 
    {
        addComponent(this);
    }

    ~DarkRoast() {}

    virtual double getCost()
    {
        Size size = getSize();
        if (size == Size::TALL) return 1.0;
        if (size == Size::GRANDE) return 1.2;
        if (size == Size::VENT) return 1.5;
        return 1.0;
    }

    virtual const std::string& getTag()
    {
        return "DarkRoast";
    }
};

class Espresso : public Beverage
{
public:
    Espresso() 
    {
        addComponent(this);
    }

    ~Espresso() {}

    virtual double getCost()
    {
        Size size = getSize();
        if (size == Size::TALL) return 1.1;
        if (size == Size::GRANDE) return 1.4;
        if (size == Size::VENT) return 1.6;
        return 1.1;
    }

    virtual const std::string& getTag()
    {
        return "Espresso";
    }
};