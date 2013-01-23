#include "Leviathan.h"

Leviathan::Leviathan(Factory* f):
Ship("Leviathan",-1,-1,f)
{
    priority=7;
}

Leviathan::~Leviathan(){}

bool Leviathan::canflyover(Ship* s){return false;}
bool Leviathan::canflyindiagonal(Ship* s){return true;}
bool Leviathan::accepte(int dockid){return (dockid>15?true:false);}
