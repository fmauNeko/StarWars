#ifndef IMPULSION_H
#define IMPULSION_H
#include <engine.h>
class Impulsion : public Engine
{
public:
  Impulsion();
  int getSpeed();
private:
  int _speed;
};

#endif // IMPULSION_H
