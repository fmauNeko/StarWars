#include "ship.h"

Ship::Ship(){}
Ship::Ship(QString nom, int x, int y, float vitesse):_nom(nom),_vitesse(vitesse){
Ship::setPos (x,y);

}
Ship::Ship(QString nom, int posX,int posY, Factory* f):_nom(nom),_factory(f){
  Ship::setPos (posX,posY);

}

Ship::~Ship()
{
};

Ship::Ship(Factory* f)
{
    this->_nom = "Nom";
    this->setPos(0,0);

    this->moteur = 2;
    this->_factory = f;
    this->_engine = _factory->createEngine();
    this->_armor = _factory->createArmor();
};
Armor* Ship::getArmor()
{
    return this->_armor;
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
