#ifndef TITANIUMARMOR_H
#define TITANIUMARMOR_H
#include<armor.h>
class TitaniumArmor : public Armor
{
public:
  TitaniumArmor();
   void computeDamages(const Armor& autre);// {}// a r�implementer dans le cpp
};

#endif // TITANIUMARMOR_H
