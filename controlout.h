#ifndef CONTROLOUT_H
#define CONTROLOUT_H
#include "ControlTower.h"

class ControlOut : public ControlTower
{
public:
    ControlOut();
    ~ControlOut();
    virtual void visit(Ship* ship);
};

#endif // CONTROLOUT_H
