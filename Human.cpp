#include "Human.h"
#include "Weapon.h"
void Human::shoot(Human *human)
{
    human->hp -= guns[0]->getPower();
}