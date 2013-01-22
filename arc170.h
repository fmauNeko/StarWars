#ifndef ARC170_H
#define ARC170_H

#include <iostream>
#include <string>
#include "Ship.h"
#include "Factory.h"
using namespace std;

class ARC170 : public Ship
{
    public:
    ARC170(Factory* f);
    ~ARC170();
    bool canflyover(Ship* s);
    bool canflyindiagonal(Ship* s);
    bool accepte(int dockid);

    private:
    int priority;
};

#endif // ARC170_H
