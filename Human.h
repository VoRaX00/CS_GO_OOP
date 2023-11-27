#include <string>
#include <vector>
using namespace std;

class Weapon;

class Human
{
public:
    Human() {}
    Human(string _nickName, unsigned _hp, vector<Weapon *> &_guns);
    void shoot(Human *human);
    void lostHp();

protected:
    string nickName;
    unsigned hp;
    vector<Weapon *> guns;
};