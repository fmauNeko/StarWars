#include "Executor.h"

Executor::Executor(Factory* f):
Ship("Executor",-1,-1,f)
{
    priority=10;
}
Executor::Executor(Factory* f,int number):
Ship("Executor",-1,-1,f,number)
{
    priority=10;
}
int Executor::getPriority()
{
    return priority;
}
Executor::~Executor(){}


bool Executor::canflyover(Ship* s){return false;}
bool Executor::canflyindiagonal(Ship* s){return false;}
bool Executor::accepte(int dockid){return (dockid>1 && dockid<5?true:false);}
