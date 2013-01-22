#ifndef IONICARMOR_H
#define IONICARMOR_H
#include<armor.h>
class IonicArmor : public Armor
{
public:
  IonicArmor();
  int getState();
  int getSolidity();
   void computeDamages(Armor& autre);
private:
   int _state;
   int _solidity;

};

#endif // IONICARMOR_H
