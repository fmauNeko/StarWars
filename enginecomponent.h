#ifndef ENGINECOMPONENT_H
#define ENGINECOMPONENT_H

#include "engine.h"

class EngineComponent : public Engine
{
public:
    EngineComponent(Engine *engine) : _engine(engine) {}
    virtual int getSpeed()=0;

private:
    Engine* _engine;
};

#endif // ENGINECOMPONENT_H
