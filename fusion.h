#ifndef FUSION_H
#define FUSION_H
#include <engine.h>
class Fusion : public Engine
{
public:
  Fusion();
    int getSpeed();
private:
    int _speed;
};

#endif // FUSION_H
