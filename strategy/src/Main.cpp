#include <iostream>
#include "CharacterKing.h"
#include "CharacterThief.h"
#include "WeaponSword.h"
#include "WeaponDagger.h"

int main()
{
    ICharacterPtr king = std::make_shared<CharacterKing>();
    ICharacterPtr thief = std::make_shared<CharacterThief>();
    
    std::cout << "==== Round 1 ====" << std::endl;
    king->speak();
    king->fight();
    thief->speak();
    thief->fight();

    std::cout << std::endl << "==== Round 2 ====" << std::endl;
    king->setWeapon(new WeaponDagger());
    thief->setWeapon(new WeaponSword());

    king->speak();
    king->fight();
    thief->speak();
    thief->fight();

    return 0;
}
