#include "Weapon.h"

using namespace std;

class Knife : public Weapon
{
public:
    Knife();

    void shoot() override;
};