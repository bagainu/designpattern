#pragma once
#include <string>
#include <iostream>
#include <memory>
#include "GredientFactory.h"

enum class PizzaName
{
    PIZZAA,
    PIZZAB,
    PIZZAX,
    PIZZAY
};

class IPizza
{
public:
    virtual void prepare() = 0;
    virtual void bake() = 0;
    virtual void package() = 0;
    virtual std::string getName() = 0;
};

typedef std::shared_ptr<IPizza> IPizzaPtr;
typedef std::weak_ptr<IPizza> IPizzaWPtr;

class Pizza : public IPizza
{
public:
    Pizza(IGredientFactoryPtr newGredientFactory) : gredientFactory(newGredientFactory) {}

    ~Pizza() {}

    void prepare()
    {
        GredientAPtr gredientA = gredientFactory->createGredientA();
        GredientBPtr gredientB = gredientFactory->createGredientB();
        GredientCPtr gredientC = gredientFactory->createGredientC();
        std::cout << getName() << " --> preparing with gredients " 
            << gredientA->getName() << " + "
            << gredientB->getName() << " + "
            << gredientC->getName() << std::endl;
    }

    void bake()
    {
        std::cout << getName() << " --> baking" << std::endl;
    }

    void package()
    {
        std::cout << getName() << " --> packaging" << std::endl;
    }

private:
    IGredientFactoryPtr gredientFactory;
};

class PizzaA : public Pizza
{
public:
    PizzaA() : Pizza(std::make_shared<GredientFactoryA>()) {}

    ~PizzaA() {}

    std::string getName()
    {
        return "PizzA";
    }
};

class PizzaB : public Pizza
{
public:
    PizzaB() : Pizza(std::make_shared<GredientFactoryB>()) {}

    ~PizzaB() {}

    std::string getName()
    {
        return "PizzB";
    }
};

class PizzaX : public Pizza
{
public:
    PizzaX() : Pizza(std::make_shared<GredientFactoryA>()) {}

    ~PizzaX() {}

    std::string getName()
    {
        return "PizzX";
    }
};

class PizzaY : public Pizza
{
public:
    PizzaY() : Pizza(std::make_shared<GredientFactoryB>()) {}

    ~PizzaY() {}

    std::string getName()
    {
        return "PizzY";
    }
};
