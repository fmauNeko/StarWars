#ifndef CONTROLIN_H
#define CONTROLIN_H

#include "ControlTower.h"
#include "Ship.h"

class ControlIn : public ControlTower
{
    public:
        ControlIn();
        ~ControlIn();
        virtual void visit(Ship* ship);
};

#endif // CONTROLIN_H
