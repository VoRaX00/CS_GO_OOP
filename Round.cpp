#include "Round.h"

void Round::game()
{
    while (!ter.empty() && !oper.empty())
    {
        for (int i = 0; i < 5; i++)
        {
            ter[i]->shoot();
        }
    }
}