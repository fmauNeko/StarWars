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

Armor* SmallFactory::createArmor(int number)
{
     Armor* armor=new IonicArmor();//blindage leger
     if(number==1)
        armor = new Shield(armor);

     return armor;
}

Engine* SmallFactory::createEngine(int number)
{
     Engine* engine=new Impulsion();//moteur lent
     if(number==1)
        engine=new Rocket(engine);
     else if(number == 2)
         engine=new Reactor(engine);

     return engine;
}
