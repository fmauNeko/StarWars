#ifndef SMALLFACTORY_H
#define SMALLFACTORY_H

#include "factory.h"
#include "fusion.h"
#include "ionicarmor.h"

class SmallFactory : public Factory
{
public:
    Armor* createArmor();
    Engine* createEngine();
    Armor* createArmor(int number);
    Engine* createEngine(int number);
};

#endif // SMALLFACTORY_H
