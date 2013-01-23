#include "controltower.h"
#include "warehouse.h"
#include <QTime>
#include <iostream>

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

void ControlTower::dirigeShip(Ship* vaisseau)
{
    Warehouse* hangar;
    hangar=Warehouse::getInstance(20,20);
QPair<int, int> positionInit;
positionInit = hangar->getInitialPosition();

    bool positionOk=hangar->deplaceVaisseau(vaisseau,positionInit);

    while(!positionOk) // on essaye de faire entrer le vaisseau dans la position de depart
    {
        sleep(2);
        positionOk=hangar->deplaceVaisseau(vaisseau,positionInit);
    }



    int iteration=0;
    bool quaiok=false;
    /*while( quaiok == false)//Attribution du quai
    {
        quaiok=hangar->attachShip(vaisseau,iteration);
        iteration++;
        sleep(2);
    }*/

        //Attribution du quai
    while( quaiok == false || iteration>((hangar->getHauteur())*2+(hangar->getLargeur())))
    {
        //premiere boucle pour voir si le quai est plein
        if (vaisseau->accepte(hangar->getDock(iteration))==true)//on verifie si il accepte le quai
            quaiok=hangar->attachShip(vaisseau,iteration);//on voit si le quai est occupé
        else
            qDebug()<<"le vaisseau n'accepte pas le quai propose ayant l'Id "<<hangar->getDock(iteration);
        iteration++;
        sleep(2);
    }

    //si il est plein on regarde les priorité
    if(quaiok ==false)
    {
        qDebug()<<"le vaisseau n'a accepte aucun quai";
    }

//fin chri
    QPair<int, int> Quai=hangar->getDockPosition(iteration-1);


    bool deplacementX;
    bool deplacementY;
    int iterationx=0;

    int iterationy=0;


    while((Quai.first) != positionInit.first) // calcul de la trajectoire en first
    {
        if(Quai.first < positionInit.first)
        {
            Quai.first++;
            deplacementX=true;
        }

        if(Quai.first > positionInit.first)
        {
            Quai.first--;
            deplacementX=false;
        }
        iterationx++;
    }

    while(Quai.second != positionInit.second) // calcul de la trajectoire en y
    {
        if(Quai.second < positionInit.second)
        {
            Quai.second++;
            deplacementY=true;
        }

        if(Quai.second > positionInit.second)
        {
            Quai.second--;
            deplacementY=false;
        }
        iterationy++;
    }

    qDebug() <<"le vaisseau doit se deplacer de "<< iterationx<<" en x et de "<<iterationy<<" en y" ;
    QPair<int, int> deplacement = vaisseau->_pos;

    while( iterationx > 0 )
    {
        if(!deplacementX)
        {
            (deplacement.first)++;
            hangar->deplaceVaisseau(vaisseau,deplacement);

        }else
        {
            (deplacement.first)--;
            hangar->deplaceVaisseau(vaisseau,deplacement);
        }
        iterationx--;
        sleep(1);
    }
    while( iterationy > 0 )
    {
        if(!deplacementY)

        {
            (deplacement.second)++;
            hangar->deplaceVaisseau(vaisseau,deplacement);

        }else
        {
            (deplacement.second)--;
            hangar->deplaceVaisseau(vaisseau,deplacement);
        }
        iterationy--;
        sleep(1);
    }
    qDebug() <<"Le vaisseau est arrive a quai il jete l'ancre ";

    hangar->effacePositionInitial();

    delete deplacement;

}
