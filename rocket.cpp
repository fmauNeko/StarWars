#include "rocket.h"

int Rocket::getSpeed()
{
    return (_engine->getSpeed() + 20);
}

Rocket::Rocket()
{
    //_engine=NULL;
}

Rocket::Rocket(Engine* engine)
{
    _engine=engine;
}

Rocket::~Rocket()
{

}
