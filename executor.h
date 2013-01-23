#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <iostream>
#include <string>
#include "Ship.h"
#include "Factory.h"
using namespace std;

class Executor : public Ship
{
    public:
    Executor(Factory* f);
     Executor(Factory *fact,int number);
    ~Executor();
    bool canflyover(Ship* s);
    bool canflyindiagonal(Ship* s);
    bool accepte(int dockid);
    int getPriority();

    private:
    int priority;
};


#endif // EXECUTOR_H
