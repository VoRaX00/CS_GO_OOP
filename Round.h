#include "CounterTerrorist.h"
#include "Terrorist.h"
#include "Knife.h"
#include "Pistol.h"

class Round
{
public:
    Round()
    {
        for (int i = 0; i < 5; i++)
        {
            vector<Weapon *> gunsTer = {
                new Knife(),
                new Pistol(),
            };
            ter.push_back(new Terrorist(to_string(i), rand() % 51 + 100, gunsTer));
            oper.push_back(new CounterTerrorist(to_string(i), rand() % 51 + 100, gunsTer));
        }
    }

    void game();

private:
    vector<Terrorist *> ter;
    vector<CounterTerrorist *> oper;
};