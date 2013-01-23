#ifndef SHIELD_H
#define SHIELD_H

#include "armorcomponent.h"

class Shield : public ArmorComponent
{
public:
    int getSolidity();
    Shield(Armor* armor);
    void computeDamages(Armor* a);
    Shield();
    ~Shield();
};

#endif // SHIELD_H
