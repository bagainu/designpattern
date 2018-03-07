#pragma once
#include "Gredient.h"
#include <iostream>

// abstract factory pattern here
class IGredientFactory
{
public:
    virtual GredientAPtr createGredientA() = 0;
    virtual GredientBPtr createGredientB() = 0;
    virtual GredientCPtr createGredientC() = 0;
};

typedef std::shared_ptr<IGredientFactory> IGredientFactoryPtr;
typedef std::weak_ptr<IGredientFactory> IGredientFactoryWPtr;

class GredientFactoryA : public IGredientFactory
{
public:
    GredientAPtr createGredientA()
    {
        return std::make_shared<GredientAA>();
    }

    GredientBPtr createGredientB()
    {
        return std::make_shared<GredientBA>();
    }

    GredientCPtr createGredientC()
    {
        return std::make_shared<GredientCA>();
    }
};

class GredientFactoryB : public IGredientFactory
{
public:
    GredientAPtr createGredientA()
    {
        return std::make_shared<GredientAB>();
    }

    GredientBPtr createGredientB()
    {
        return std::make_shared<GredientBB>();
    }

    GredientCPtr createGredientC()
    {
        return std::make_shared<GredientCB>();
    }
};
