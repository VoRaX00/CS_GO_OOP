#include "Weapon.h"

class Pistol : public Weapon
{
public:
    Pistol();
    void shoot() override;
};