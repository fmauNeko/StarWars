#include "titaniumarmor.h"

TitaniumArmor::TitaniumArmor()
{
}
 void TitaniumArmor::computeDamages(const Armor& autre){
   if(_solidity< 2*autre._solidity)
     _state*=0.7;
 }
