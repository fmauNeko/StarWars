#include "controltower.h"
#include "warehouse.h"
#include <QTime>

ControlTower::ControlTower()
{
}

Ship* ControlTower::detectShip()
{
    QTime now = QTime::currentTime();
    qsrand(now.msec());

    if((qrand()%10) > 7)
        return new Ship();

    return NULL;
}

void ControlTower::run()
{
    Ship *newShip = NULL;

    Warehouse *warehouse = Warehouse::getInstance(10, 10);

    while(1)
    {
        while(newShip == NULL)
        {
            newShip = detectShip();
        }

        while(!warehouse->deplaceVaisseau(newShip, warehouse->getInitialPosition()))
        {
            sleep(3);
        }
    }
}
