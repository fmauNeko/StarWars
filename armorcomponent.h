#ifndef ARMORCOMPONENT_H
#define ARMORCOMPONENT_H

#include <armor.h>

class ArmorComponent : public Armor
{
public:
    ArmorComponent(Armor *armor) : _armor(armor) {}
    virtual int getSolidity() = 0;

private:
    Armor* _armor;
};

#endif // ARMORCOMPONENT_H
