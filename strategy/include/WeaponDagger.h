#pragma once

#include <string>
#include "IWeapon.h"

class WeaponDagger : public IWeapon
{
public:
    WeaponDagger();
    ~WeaponDagger();
    void useWeapon();

private:
    std::string name;
};
