#ifndef CONTROLTOWER_H
#define CONTROLTOWER_H

#include <QThread>
#include "ship.h"

class ControlTower : public QThread
{
public:
    ControlTower();

protected:
    void run();

private:
    Ship* detectShip();
};

#endif // CONTROLTOWER_H
