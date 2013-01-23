#ifndef ROCKET_H
#define ROCKET_H

#include "enginecomponent.h"

class Rocket : public EngineComponent
{
public:
    int getSpeed();
    Rocket();
    Rocket(Engine* engine);
    virtual ~Rocket();
};

#endif // ROCKET_H
