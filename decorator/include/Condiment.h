#pragma once
#include "Beverage.h"

class Milk : public BeverageCondimentDecorator
{
public:
    Milk(IBeveragePtr newBeverage) : beverage(newBeverage) 
    {
        addComponent(this);
    }

    ~Milk() {}

    virtual const std::string& getTag()
    {
        return "Milk";
    }

    virtual std::string getDescription()
    {
        return beverage->getDescription();
    }

    virtual Size getSize()
    {
        return beverage->getSize();
    }

    virtual void setSize(const Size &newSize)
    {
        beverage->setSize(newSize);
    }

    virtual void addComponent(IBeverage* newBeverage)
    {
        beverage->addComponent(newBeverage);
    }

    virtual const std::map<const std::string, int>& getComponent()
    {
        return beverage->getComponent();
    }

    virtual double getCost()
    {
        Size size = beverage->getSize();
        double cost = beverage->getCost();
        if (size == Size::TALL) return cost + 1.1;
        if (size == Size::GRANDE) return cost + 1.4;
        if (size == Size::VENT) return cost + 1.6;
        return cost + 1.1;
    }

private:
    Milk();
    IBeveragePtr beverage;
};

class Mocca : public BeverageCondimentDecorator
{
public:
    Mocca(IBeveragePtr newBeverage) : beverage(newBeverage) 
    {
        addComponent(this);
    }

    ~Mocca() {}

    virtual const std::string& getTag()
    {
        return "Mocca";
    }

    virtual std::string getDescription()
    {
        return beverage->getDescription();
    }

    virtual Size getSize()
    {
        return beverage->getSize();
    }

    virtual void setSize(const Size &newSize)
    {
        beverage->setSize(newSize);
    }

    virtual void addComponent(IBeverage* newBeverage)
    {
        beverage->addComponent(newBeverage);
    }

    virtual const std::map<const std::string, int>& getComponent()
    {
        return beverage->getComponent();
    }

    virtual double getCost()
    {
        Size size = beverage->getSize();
        double cost = beverage->getCost();
        if (size == Size::TALL) return cost + 0.5;
        if (size == Size::GRANDE) return cost + 0.7;
        if (size == Size::VENT) return cost + 1.0;
        return cost + 0.5;
    }

private:
    Mocca();
    IBeveragePtr beverage;
};
