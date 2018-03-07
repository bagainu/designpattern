#pragma once
#include "Pizza.h"

class IPizzaStore
{
public:
    virtual IPizzaPtr createPizza(const PizzaName &pizzaName) = 0;
    virtual void orderPizza(const PizzaName &pizzaName) = 0;
};

typedef std::shared_ptr<IPizzaStore> IPizzaStorePtr;
typedef std::weak_ptr<IPizzaStore> IPizzaStoreWPtr;

class PizzaStore : public IPizzaStore
{
public:
    // factory pattern here
    virtual IPizzaPtr createPizza(const PizzaName &pizzaName) = 0;

    void orderPizza(const PizzaName &pizzaName)
    {
        IPizzaPtr pizza = createPizza(pizzaName);
        if (!pizza) 
        {
            std::cout << "The pizza you ordered does not exists." << std::endl;
            return;
        }
        
        std::cout << "Your order: " << pizza->getName() << std::endl;
        pizza->prepare();
        pizza->bake();
        pizza->package();
        std::cout << pizza->getName() << " done!" << std::endl;
    }
};

class PizzaStoreA : public PizzaStore
{
public:
    IPizzaPtr createPizza(const PizzaName &pizzaName)
    {
        if (pizzaName == PizzaName::PIZZAA)
        {
            return std::make_shared<PizzaA>();
        }
        else if (pizzaName == PizzaName::PIZZAB)
        {
            return std::make_shared<PizzaB>();
        }
        return nullptr;       
    }
};

class PizzaStoreB : public PizzaStore
{
public:
    IPizzaPtr createPizza(const PizzaName &pizzaName)
    {
        if (pizzaName == PizzaName::PIZZAX)
        {
            return std::make_shared<PizzaX>();
        }
        else if (pizzaName == PizzaName::PIZZAY)
        {
            return std::make_shared<PizzaY>();
        }
        return nullptr;       
    }
};
