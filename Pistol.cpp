#include "Pistol.h"
#include <iostream>
Pistol::Pistol()
{
    name = "Pistol";
    power = 20;
    ammo = 7;
}

void Pistol::shoot()
{
    cout << "pistol shoot\n";
}
