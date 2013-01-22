#include "reactor.h"

int Reactor::getSpeed()
{
    return (_engine->getSpeed() + 6);
}
