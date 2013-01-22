#include "rocket.h"

int Rocket::getSpeed()
{
    return (_engine->getSpeed() + 20);
}
