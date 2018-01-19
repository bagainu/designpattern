#pragma once

#include <memory>

class IWeapon
{
public:
    ~IWeapon() {}
    virtual void useWeapon() = 0;
};

typedef std::shared_ptr<IWeapon> IWeaponPtr;
typedef std::weak_ptr<IWeapon> IWeaponWPtr;