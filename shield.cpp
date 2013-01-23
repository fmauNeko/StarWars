#include "shield.h"

int Shield::getSolidity()
{
    return (_armor->getSolidity() + 10);
}
Shield::Shield(Armor* armor)
{
    _armor=armor;
}
Shield::Shield()
{
    //_armor = NULL;
}

Shield::~Shield()
{
}
void Shield::computeDamages(Armor* a)
{
       _armor->computeDamages(a);
}
