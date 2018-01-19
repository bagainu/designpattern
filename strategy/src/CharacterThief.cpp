#include "CharacterThief.h"
#include "WeaponDagger.h"
#include <iostream>

CharacterThief::CharacterThief() : name("Thief"), weapon(new WeaponDagger())
{

}

CharacterThief::~CharacterThief()
{

}

void CharacterThief::setWeapon(IWeapon* newWeapon)
{
    weapon.reset(newWeapon);
}

void CharacterThief::speak()
{
    std::cout << "I am " << name << std::endl;
}

void CharacterThief::fight()
{
    weapon->useWeapon();
}