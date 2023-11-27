#include "Human.h"

class CounterTerrorist : public Human
{
public:
    CounterTerrorist(string _nickName, unsigned _hp, vector<Weapon *> &_guns);
};