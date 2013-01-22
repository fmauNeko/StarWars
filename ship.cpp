#include "ship.h"

Ship::Ship(){}
Ship::Ship(QString nom, int x, int y, float vitesse):_nom(nom),_vitesse(vitesse){
Ship::setPos (x,y);

}

Ship::~Ship()
{
};

Ship::Ship(Factory* f)
{
    this->nom = "Nom";
    this->setPos(0,0);

    this->moteur = 2;
    this->_factory = f;
    this->_engine = f1->createEngine();
    this->_armor = f1->createArmor();
};
Armor* Ship::getArmor()
{
    return this->a1;
}

int Ship::getPriority()
{
    return priority;
}
int Ship::recup_moteur()
{
    return this->moteur;
};

void Ship::incr_moteur()
{
    (this->moteur)++;
};

void Ship::decr_moteur()
{
    (this->moteur)--;
};
