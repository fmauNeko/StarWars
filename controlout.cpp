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
    bool detectionOk = false;

     while(detectionOk)
     {
        sleep(10);

        for(k=0;k<hangar->getHauteur();k++)
        {
            QPair<int, int> maCoord1(k,0);

            //if(surfaceNavigable[maCoord1]!=NULL)// si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }

        for(k=0;k<hangar->getHauteur();k++)
        {
            QPair<int, int> maCoord2(k,hangar->getLargeur());

            // si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }

        for(l=0;l<hangar->getLargeur();l++)
        {
            QPair<int, int> maCoord(hangar->getHauteur(),l);

            // si vaisseau dï¿½tectï¿½
            // dirige le vers la sortie

        }


        int nb=0;
        QTime now = QTime::currentTime();
        qsrand(now.msec());
        nb=(rand())%10;

        if (nb>7)
            this->quit();
    }
}
