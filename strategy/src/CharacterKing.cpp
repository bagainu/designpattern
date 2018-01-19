#include "CharacterKing.h"
#include "WeaponSword.h"
#include <iostream>

CharacterKing::CharacterKing() : name("King"), weapon(new WeaponSword())
{

}

CharacterKing::~CharacterKing()
{

}

void CharacterKing::setWeapon(IWeapon* newWeapon)
{
    weapon.reset(newWeapon);
}

void CharacterKing::speak()
{
    std::cout << "I am " << name << std::endl;
}

void CharacterKing::fight()
{
    weapon->useWeapon();
}
