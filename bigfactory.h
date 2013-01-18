#ifndef BIGFACTORY_H
#define BIGFACTORY_H

#include "factory.h"
#include "impulsion.h"
#include "titaniumarmor.h"

class BigFactory : public Factory
{
public:
    Armor* createArmor();
    Engine* createEngine();
};

#endif // BIGFACTORY_H
