#ifndef LEVIATHAN_H
#define LEVIATHAN_H

#include <iostream>
#include <string>
#include "Ship.h"
#include "Factory.h"
using namespace std;

class Leviathan : public Ship
{
    public:
    Leviathan(Factory* f);
    Leviathan(Factory* fact,int number);
    ~Leviathan();
    bool canflyover(Ship* s);
    bool canflyindiagonal(Ship* s);
    bool accepte(int dockid);
    int getPriority();
    private:
    int priority;
};

#endif // LEVIATHAN_H
