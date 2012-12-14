#ifndef SHIP_H
#define SHIP_H
#include <QDebug>
#include <QPair>

class Ship
{
public:
    Ship(QString nom,int x, int y,float vitesse);

    inline QPair<int, int> getPos()const {return _pos;}
    inline void setPos(int x,int y){_pos = QPair<int,int>(x, y);}
    inline void setPos(QPair<int, int> newPos){_pos = newPos;}

    inline QString getName(){return _nom;}
    inline void setName(QString nom){_nom=nom;}
    inline float getVitesse()const {return _vitesse;}
    inline void setVitesse(float v){_vitesse=v;}
private:
    QString _nom;

    QPair<int, int> _pos;
    float _vitesse;
};

#endif // SHIP_H
