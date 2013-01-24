#ifndef SMALLFACTORY_H
#define SMALLFACTORY_H

#include "factory.h"
#include "fusion.h"
#include "ionicarmor.h"
#include "shield.h"
#include "rocket.h"
#include "reactor.h"
#include "impulsion.h"

class SmallFactory : public Factory
{
public:
    Armor* createArmor();
    Engine* createEngine();
    Armor* createArmor(int number);
    Engine* createEngine(int number);
};

#endif // SMALLFACTORY_H
