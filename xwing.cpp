#include "XWing.h"

XWing::XWing(Factory* f):
Ship("XWing",-1,-1,f)
{

    priority=2;
}

XWing::XWing(Factory* f,int number):
Ship("XWing",-1,-1,f,number)
{

    priority=2;
}
int XWing::getPriority()
{
    return priority;
}

XWing::~XWing(){}

bool XWing::canflyover(Ship* s){return true;}
bool XWing::canflyindiagonal(Ship* s){return true;}
bool XWing::accepte(int dockid){return true;}
