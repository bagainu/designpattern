#pragma once

#include "IWeapon.h"

class ICharacter
{
public:
    virtual ~ICharacter() {}
    virtual void setWeapon(IWeapon* newWeapon) = 0;
    virtual void speak() = 0;
    virtual void fight() = 0;
};

typedef std::shared_ptr<ICharacter> ICharacterPtr;
typedef std::weak_ptr<ICharacter> ICharacterWPtr;

