#ifndef ARMOR_H
#define ARMOR_H

class Armor
{
public:
  Armor();
  virtual ~Armor(){}
  int getState();
  int getSolidity();
  virtual void computeDamages(const Armor&)=0;

  float _state;
  float _solidity;
};

#endif // ARMOR_H
