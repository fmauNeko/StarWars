#include "ControlIn.h"

ControlIn::ControlIn()
{
}

ControlIn::~ControlIn()
{
}

void ControlIn::visit(Ship* ship)
{
    this->dirigeShip(ship);
}
