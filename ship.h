#ifndef SHIP_H
#define SHIP_H
#include <QDebug>
#include <QPair>
#include "Factory.h"
class Ship
{
public:
    Ship();
    Ship(QString nom,int x, int y,float vitesse);
    Ship(Factory* f);
    Ship(QString nom, int posX,int posY, Factory* f);
    inline QPair<int, int> getPos()const {return _pos;}
    inline void setPos(int x,int y){_pos = QPair<int,int>(x, y);}
    inline void setPos(QPair<int, int> newPos){_pos = newPos;}
    void incr_moteur();
    void decr_moteur();
    Armor* getArmor();
     ~Ship();
    inline QString getName(){return _nom;}
    bool canflyover(Ship* s);
     bool canflyindiagonal(Ship* s) ;
    bool accepte(int dockid) ;
    int recup_moteur();
    int getPriority();
    inline void setName(QString nom){_nom=nom;}
    inline float getVitesse()const {return _vitesse;}
    inline QString getName()const {return _nom;}
    inline void setVitesse(float v){_vitesse=v;}
private:
    Factory* _factory;
    QString _nom;
    Engine* _engine;
    Armor* _armor;
    QPair<int, int> _pos;
    float _vitesse;
    int priority;
    int moteur;
};

#endif // SHIP_H
