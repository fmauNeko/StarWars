#include "smallfactory.h"

Engine* SmallFactory::createEngine()
{
    Engine *E = new Fusion();
    return E;
}

Armor* SmallFactory::createArmor()
{
    Armor *A = new IonicArmor();
    return A;
}
