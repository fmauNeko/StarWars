#ifndef ARMORCOMPONENT_H
#define ARMORCOMPONENT_H

#include <armor.h>

class ArmorComponent : public Armor
{
public:
    ArmorComponent(Armor *armor) : _armor(armor) {}
        ArmorComponent();
        ~ArmorComponent();
    virtual int getSolidity() = 0;

protected:
    Armor* _armor;
};

#endif // ARMORCOMPONENT_H
