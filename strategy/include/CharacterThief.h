#include "ICharacter.h"
#include <string>

class CharacterThief : public ICharacter
{
public:
    CharacterThief();
    ~CharacterThief();
    void setWeapon(IWeapon* newWeapon);
    void speak();
    void fight();

private:
    std::string name;
    IWeaponPtr weapon;
};

