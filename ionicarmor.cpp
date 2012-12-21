#include "ionicarmor.h"

IonicArmor::IonicArmor()
{
}
void IonicArmor::computeDamages(const Armor& autre){
  if(_solidity< autre._solidity)
    _state*=0.9;
}
