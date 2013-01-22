#include "shield.h"

int Shield::getSolidity()
{
    return (_armor->getSolidity() + 10);
}
