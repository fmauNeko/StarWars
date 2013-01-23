#include "titaniumarmor.h"

#include "TitaniumArmor.h"

void TitaniumArmor::computeDamages(Armor* a)
{

    this->_state += (a->getSolidity() - this->_solidity - 5 > 0 ? a->getSolidity() - this->_solidity -5 : 0);
}

TitaniumArmor::TitaniumArmor() :
Armor()
{
    //cout << "passage dans createur" << endl;
    this->_state=0;
    this->_solidity=3;
    //cout<<"_solidity="<<this->_solidity<<endl;
}

int TitaniumArmor::getSolidity()
{
    return _solidity;
}

int TitaniumArmor::getState()
{
    return _state;
}
