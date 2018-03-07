#include "Coffee.h"
#include "Condiment.h"

int main()
{
    std::cout << "Customer A" << std::endl;
    IBeveragePtr coffeeA = std::make_shared<DarkRoast>();
    IBeveragePtr coffeeA1 = std::make_shared<Milk>(coffeeA);
    IBeveragePtr coffeeA2 = std::make_shared<Mocca>(coffeeA1);
    IBeveragePtr coffeeA3 = std::make_shared<Milk>(coffeeA2);
    std::cout << "Order: " << coffeeA3->getDescription() << std::endl;
    std::cout << "Cost: $" << coffeeA3->getCost() << std::endl;

    std::cout << std::endl << "Customer B" << std::endl;
    IBeveragePtr coffeeB = std::make_shared<Espresso>();
    IBeveragePtr coffeeB1 = std::make_shared<Milk>(coffeeB);
    std::cout << "Order: " << coffeeB1->getDescription() << std::endl;
    std::cout << "Cost: $" << coffeeB1->getCost() << std::endl;

    coffeeB1->setSize(IBeverage::Size::VENT);
    std::cout << "Set size to VENT" << std::endl;
    std::cout << "Cost: $" << coffeeB1->getCost() << std::endl;

    return 0;
}