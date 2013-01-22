#include "warehouse.h"

Warehouse* Warehouse::_uniqueInstance = NULL;

Warehouse::Warehouse(int n, int m) : _n(n), _m(m)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    _warehouse = QMap<QPair<int, int>, Ship*>();

    _platforms = QMap<int, QPair<int, int> >();

    for(int i = 0; i < n; i++)
        _platforms[randInt(0, n)] = QPair<int, int>(i, 0); // TODO: A corriger
}
//
void Warehouse::collision(Ship* s1, Ship* s2)
{
    s1->getName();
    s2->getName();
    qDebug()<<"armures : s1="<<s1->getArmor()->getSolidity()<<" s2="<<s2->getArmor()->getSolidity();
    s1->getArmor()->computeDamages(s2->getArmor());
    s2->getArmor()->computeDamages(s1->getArmor());
}



int Warehouse::getDock (Ship *ship){

  return _assignedPlatforms.key(ship, -1);
}

bool Warehouse::deplaceVaisseau(Ship* v, QPair<int, int> newPos)
{
  if(_warehouse[newPos]==NULL){
      _warehouse[v->getPos()]=NULL;
      v->setPos(newPos);
      _warehouse[newPos]=v;
      return true;
    }
  else
    return false;
}

void Warehouse::assigneQuai(Ship *v){
    int quai = 0;

    for(QMap<int, QPair<int, int> >::iterator i = _platforms.begin(); i != _platforms.end(); ++i)
        quai = i.key();
        if(!_assignedPlatforms.contains(quai))
        {
            _assignedPlatforms[quai] = v;
        }
}
