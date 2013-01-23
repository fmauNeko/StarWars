#include "controltower.h"
#include "warehouse.h"
#include <QTime>
#include <iostream>
#include "bigfactory.h"
#include "smallfactory.h"
#include "arc170.h"
#include "leviathan.h"
#include "executor.h"
#include "xwing.h"

ControlTower::ControlTower()
{
}

Ship* ControlTower::detectShip()
{
    int r=0;
    int facto=0;
    int deco=0;

    QTime now = QTime::currentTime();
    qsrand(now.msec());

    r=(rand())%4;
    facto=(rand())%2;
    deco=(rand())%3;

    Factory* factory=NULL;
    if(facto==0)
         factory = new BigFactory();
    else
         factory = new SmallFactory();

    switch (r)
    {
        case 0:{
            XWing* a=new XWing(factory,deco);
            return a;
        }
        case 1:{
            Executor* a=new Executor(factory,deco);
            return a;
        }
        case 2:{
            Leviathan* a=new Leviathan(factory,deco);
            return a;
        }
        case 3:{
            ARC170* a=new ARC170(factory,deco);
            return a;
        }
    }
    //return new Ship("newShip",1,1);
    return new ARC170();
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
        if (vaisseau->accepte(iteration)==true)//on verifie si il accepte le quai
            quaiok=hangar->attachShip(vaisseau,iteration);//on voit si le quai est occupé
        else
            qDebug()<<"le vaisseau n'accepte pas le quai propose ayant l'Id "<<iteration;
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
    QPair<int, int> deplacement = vaisseau->getPos();

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

}
