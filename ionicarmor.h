#ifndef IONICARMOR_H
#define IONICARMOR_H
#include<armor.h>
class IonicArmor : public Armor
{
public:
  IonicArmor();
  void computeDamages(const Armor&);
};

#endif // IONICARMOR_H
