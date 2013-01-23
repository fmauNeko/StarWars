#ifndef ENGINECOMPONENT_H
#define ENGINECOMPONENT_H

#include "engine.h"

class EngineComponent : public Engine
{
public:

    virtual int getSpeed()=0;
    EngineComponent(Engine *engine);

protected:

    Engine* _engine;
};

#endif // ENGINECOMPONENT_H
