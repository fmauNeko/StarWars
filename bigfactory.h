#ifndef BIGFACTORY_H
#define BIGFACTORY_H

#include "factory.h"
#include "impulsion.h"
#include "titaniumarmor.h"
#include "shield.h"
#include "rocket.h"
#include "reactor.h"

class BigFactory : public Factory
{
public:
    Armor* createArmor();
    Engine* createEngine();

    Engine* createengine(int number);
    Armor* createArmor(int number);
};

#endif // BIGFACTORY_H
