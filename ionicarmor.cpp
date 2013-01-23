#include "IonicArmor.h"

void IonicArmor::computeDamages(Armor* a)
{
    //cout << "dmg1 avec _solidity=" << this->_solidity << " et _solidity=" << a->getSolidity() << endl;
    this->_state += ((a->getSolidity() - this->_solidity)*10 > 0 ? (a->getSolidity() - this->_solidity)*10 : 0);
}

IonicArmor::IonicArmor() :
Armor(){

    //cout << "passage dans createur" << endl;
    this->_state=0;
    this->_solidity=2;
    //cout<<"_solidity="<<this->_solidity<<endl;
}

int IonicArmor::getSolidity()
{
    return _solidity;
}

int IonicArmor::getState()
{
    return _state;
}

