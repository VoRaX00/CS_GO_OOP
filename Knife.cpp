#include "Knife.h"
#include <iostream>
Knife::Knife()
{
    name = "Knife";
    power = 40;
    ammo = 1;
}

void Knife::shoot()
{
    cout << "BOM\n";
}