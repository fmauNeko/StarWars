#include "controlout.h"
#include <cstdlib>
#include <iostream>
#include <string>

#include "ControlTower.h"
#include "Warehouse.h"
#include <QTime>

ControlOut::ControlOut()
{
}

ControlOut::~ControlOut()
{
}

void ControlOut::visit(Ship* ship)
{
    Warehouse* hangar;
    hangar=Warehouse::getInstance(20,20);
    int k,l;

    QPair<int, int> posVaisseau = hangar->getDockPosition(hangar->getDock(ship));

    if(posVaisseau.first() == 0 || posVaisseau.first() == hangar->getLargeur() || posVaisseau.second == 0)
    {
        hangar->deplaceVaisseau(ship, hangar->getInitialPosition());
    }


    int nb=0;
    QTime now = QTime::currentTime();
    qsrand(now.msec());
    nb=(rand())%10;

    if (nb>7)
        this->quit();
}
