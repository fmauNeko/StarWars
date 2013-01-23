#include "controlcut.h"
#include <cstdlib>
#include <iostream>
#include <string>

#include "ControlTower.h"
#include "Warehouse.h"
#include "QDateTime"

ControlOut::ControlOut()
{
}

ControlOut::~ControlOut()
{
}

void ControlOut::visit(Ship* ship)
{
    Warehouse* hangar;
    hangar=Warehouse::getInstanceW(20,20);
    int k,l;
     while(detectionOk)
     {
        sleep(10);

        for(k=0;k<hangar->getHauteur();k++)
        {
            Coord maCoord1(k,0);

            //if(surfaceNavigable[maCoord1]!=NULL)// si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }

        for(k=0;k<hangar->getHauteur();k++)
        {
            Coord maCoord2(k,hangar->getLargeur());

            // si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }

        for(l=0;l<hangar->getLargeur();l++)
        {
            Coord maCoord(hangar->getHauteur(),l);

            // si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }


        int nb=0;
        qsrand(time(NULL));
        nb=(rand())%10;

        if (nb>7)
            this->stop();
    }
}
