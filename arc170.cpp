#include "ARC170.h"

ARC170::ARC170(Factory* f):
Ship("ARC170",-1,-1,f)
{
    priority=4;
}
ARC170::ARC170(Factory* f,int number):
Ship("ARC170",-1,-1,f,number)
{
    priority=4;
}
int ARC170::getPriority()
{
    return priority;
}
ARC170::~ARC170(){}

bool ARC170::canflyover(Ship* s){return (getPriority()>s->getPriority()?true:false);}
bool ARC170::canflyindiagonal(Ship* s){return false;}
bool ARC170::accepte(int dockid){return (dockid%2==1?true:false);}
