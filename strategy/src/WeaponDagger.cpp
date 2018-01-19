#include "WeaponDagger.h"
#include <iostream>

WeaponDagger::WeaponDagger() : name("Dagger")
{

}

WeaponDagger::~WeaponDagger()
{
    std::cout << "~Dagger destroyed" << std::endl;
}

void WeaponDagger::useWeapon()
{
    std::cout << name << " attack!" << std::endl;
}