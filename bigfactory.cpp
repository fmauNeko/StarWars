#include "bigfactory.h"

Engine* BigFactory::createEngine()
{
    Engine *E = new Impulsion();
    return E;
}

Armor* BigFactory::createArmor()
{
    Armor *A = new TitaniumArmor();
    return A;
}
