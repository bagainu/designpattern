#include "ICharacter.h"
#include <string>

class CharacterKing : public ICharacter
{
public:
    CharacterKing();
    ~CharacterKing();
    void setWeapon(IWeapon* newWeapon);
    void speak();
    void fight();

private:
    std::string name;
    IWeaponPtr weapon;
};
