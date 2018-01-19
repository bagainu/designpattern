#include "IWeapon.h"
#include <string>

class WeaponSword : public IWeapon
{
public:
    WeaponSword();
    ~WeaponSword();
    void useWeapon();

private:
    std::string name;
};
