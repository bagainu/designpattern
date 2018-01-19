#include "WeaponSword.h"
#include <iostream>

WeaponSword::WeaponSword() : name("Sword")
{

}

WeaponSword::~WeaponSword()
{
    std::cout << "~Sword destroyed" << std::endl;
}

void WeaponSword::useWeapon()
{
    std::cout << name << " attack!" << std::endl;
}