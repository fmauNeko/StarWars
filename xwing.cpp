#include "XWing.h"

XWing::XWing(Factory* f):
Ship("XWing",-1,-1,f)
{
    priority=2;
}

XWing::~XWing(){}

bool XWing::canflyover(Ship* s){return true;}
bool XWing::canflyindiagonal(Ship* s){return true;}
bool XWing::accepte(int dockid){return true;}
