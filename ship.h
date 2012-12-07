#ifndef SHIP_H
#define SHIP_H
#include<QDebug>
class Ship
{
public:
  Ship(QString nom,int x, int y,float vitesse);
 inline int getx() const {return _x;}
 inline int gety()const {return _y;}
 inline void setx(int x){_x=x;}
 inline void sety(int y){_y=y;}
  inline QString getName(){return _nom;}
  inline void setName(QString nom){_nom=nom;}
  inline float getVitesse()const {return _vitesse;}
  inline void setVitesse(float v){_vitesse=v;}
private:
  float _vitesse;
  int _x;
  int _y;
  QString _nom;
};

#endif // SHIP_H
