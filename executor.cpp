#include "Executor.h"

Executor::Executor(Factory* f):
Ship("Executor",-1,-1,f)
{
    priority=10;
}

Executor::~Executor(){}


bool Executor::canflyover(Ship* s){return false;}
bool Executor::canflyindiagonal(Ship* s){return false;}
bool Executor::accepte(int dockid){return (dockid>1 && dockid<5?true:false);}
