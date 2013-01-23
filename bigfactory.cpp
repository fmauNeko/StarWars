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
Armor* BigFactory::createArmor(int number)
{
     Armor* armor=new TitaniumArmor();
     if(number==1 || number ==2)
        armor = new Shield(armor);

     return armor;
}

Engine* BigFactory::createEngine(int number)
{
     Engine* engine=new Impulsion();
     if(number==1)
        engine=new Rocket(engine);
     else if(number == 2)
         engine=new Reactor(engine);

     return engine;
}
