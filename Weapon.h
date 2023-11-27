#include <string>
using namespace std;

class Weapon
{
public:
    Weapon() {}
    virtual void shoot() = 0;

    unsigned getPower() { return power; }

protected:
    string name;
    unsigned power;
    unsigned ammo;
};