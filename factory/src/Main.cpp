#include "Pizza.h"
#include "PizzaStore.h"

int main()
{
    IPizzaStorePtr pizzaStoreA = std::make_shared<PizzaStoreA>();
    IPizzaStorePtr pizzaStoreB = std::make_shared<PizzaStoreB>();

    pizzaStoreA->orderPizza(PizzaName::PIZZAA);
    pizzaStoreB->orderPizza(PizzaName::PIZZAY);

    // pizzaStoreA->orderPizza(nullptr);

    return 0;
}