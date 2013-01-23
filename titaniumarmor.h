#ifndef TITANIUMARMOR_H
#define TITANIUMARMOR_H
#include<armor.h>
class TitaniumArmor : public Armor
{
public:
  TitaniumArmor();
  int getState();
  int getSolidity();
   void computeDamages(Armor* autre);

private:
   int _state;
   int _solidity;

};

#endif // TITANIUMARMOR_H
