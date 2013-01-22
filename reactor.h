#ifndef REACTOR_H
#define REACTOR_H
#include "enginecomponent.h"
class Reactor : public EngineComponent
{
public:
    Reactor();
    ~Reactor();
    int getSpeed();
};

#endif // REACTOR_H


