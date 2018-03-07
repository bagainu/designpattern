#pragma once
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <sstream>

class IBeverage
{
public:
    enum class Size
    {
        TALL,
        GRANDE,
        VENT
    };

public:
    virtual double getCost() = 0;
    virtual Size getSize() = 0;
    virtual void setSize(const IBeverage::Size &newSize) = 0;
    virtual std::string getDescription() = 0;
    virtual const std::string& getTag() = 0;
    virtual void addComponent(IBeverage* beverage) = 0;
    virtual const std::map<const std::string, int>& getComponent() = 0;
};

typedef std::shared_ptr<IBeverage> IBeveragePtr;
typedef std::weak_ptr<IBeverage> IBeverageWPtr;

class Beverage : public IBeverage
{
public:
    Beverage() : bottleSize(Size::TALL) {}
    ~Beverage() {}

    virtual Size getSize()
    {
        return bottleSize;
    }

    virtual void setSize(const IBeverage::Size &newSize)
    {
        bottleSize = newSize;
    }

    virtual std::string getDescription()
    {
        std::stringstream ss;
        for (auto item : getComponent())
        {
            ss << item.first << "*" << item.second << " ";
        }
        return ss.str();
    }

    virtual void addComponent(IBeverage* beverage)
    {
        components[beverage->getTag()] += 1;
    }

    virtual const std::map<const std::string, int>& getComponent()
    {
        return components;
    }

private:
    std::map<const std::string, int> components;
    Size bottleSize;
};

class BeverageCondimentDecorator : public IBeverage
{
public:
    BeverageCondimentDecorator() {}
    ~BeverageCondimentDecorator() {}
};