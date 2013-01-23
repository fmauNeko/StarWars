#include "reactor.h"

int Reactor::getSpeed()
{
    return (_engine->getSpeed() + 6);
}
Reactor::Reactor()
{
    _engine=NULL;
}

Reactor::Reactor(Engine* engine)
{
    _engine=engine;
}

Reactor::~Reactor()
{

}
