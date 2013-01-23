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
    hangar=Warehouse::getInstanceW(20,20);
QPair<int, int> positionInit;
positionInit = QPair<int, int>(hangar->getInitialPosition().x, hangar->getInitialPosition().y);

    bool positionOk=hangar->deplaceVaisseau(vaisseau,positionInit);

    while(!positionOk) // on essaye de faire entrer le vaisseau dans la position de depart
    {
        sleep(2);
        positionOk=hangar->deplaceVaisseau(vaisseau,positionInit);
    }

    cout<<endl;

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
        if (vaisseau->accept(hangar->getDockId(iteration))==true)//on verifie si il accepte le quai
            quaiok=hangar->attachShip(vaisseau,iteration);//on voit si le quai est occupé
        else
            cout<<"le vaisseau n'accepte pas le quai propose ayant l'Id "<<hangar->getDockId(iteration)<<endl;
        iteration++;
        sleep(2);
    }

    //si il est plein on regarde les priorité
    if(quaiok ==false)
    {
        cout<<"le vaisseau n'a accepte aucun quai"<<endl;
    }

//fin chri

    Coord Quai=hangar->getDockPosition(iteration-1);
    Coord init=hangar->getInitialPosition();

    bool deplacementX;
    bool deplacementY;
    int iterationx=0;

    int iterationy=0;


    while((Quai.x) != init.x) // calcul de la trajectoire en x
    {
        if(Quai.x < init.x)
        {
            Quai.x++;
            deplacementX=true;
        }

        if(Quai.x > init.x)
        {
            Quai.x--;
            deplacementX=false;
        }
        iterationx++;
    }

    while(Quai.y != init.y) // calcul de la trajectoire en y
    {
        if(Quai.y < init.y)
        {
            Quai.y++;
            deplacementY=true;
        }

        if(Quai.y > init.y)
        {
            Quai.y--;
            deplacementY=false;
        }
        iterationy++;
    }
    cout <<"le vaisseau doit se deplacer de "<< iterationx<<" en x et de "<<iterationy<<" en y" <<endl<<endl;
    Coord *deplacement = vaisseau->position;

    while( iterationx > 0 )
    {
        if(!deplacementX)
        {
            (deplacement->x)++;
            hangar->setShipPosition(vaisseau,deplacement);

        }else
        {
            (deplacement->x)--;
            hangar->setShipPosition(vaisseau,deplacement);
        }
        iterationx--;
        sleep(1);
    }
    while( iterationy > 0 )
    {
        if(!deplacementY)

        {
            (deplacement->y)++;
            hangar->setShipPosition(vaisseau,deplacement);

        }else
        {
            (deplacement->y)--;
            hangar->setShipPosition(vaisseau,deplacement);
        }
        iterationy--;
        sleep(1);
    }
    cout <<"Le vaisseau est arrive a quai il jete l'ancre "<<endl<<endl;

    hangar->effacePositionInitial();

    delete deplacement;

}
