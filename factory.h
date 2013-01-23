#ifndef FACTORY_H
#define FACTORY_H

#include "armor.h"
#include "engine.h"

class Factory
{
public:
    virtual Armor* createArmor() = 0;
    virtual Engine* createEngine() = 0;
    virtual Armor* createArmor(int number) = 0;
    virtual Engine* createEngine(int number) = 0;
};

#endif // FACTORY_H
