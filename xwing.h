#ifndef XWING_H
#define XWING_H

#include <iostream>
#include <string>
#include "Ship.h"
#include "Factory.h"
using namespace std;

class XWing : public Ship
{
    public:
    XWing(Factory* f);
    ~XWing();
    bool canflyover(Ship* s);
    bool canflyindiagonal(Ship* s);
    bool accepte(int dockid);

    private:
    int priority;
};

#endif // XWING_H
