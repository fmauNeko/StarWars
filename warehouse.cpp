#include "warehouse.h"

Warehouse::Warehouse(int n, int m) : _n(n), _m(m)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    _warehouse = QMap<QPair<int, int>, Ship*>();

    _platforms = QMap<int, QPair<int, int> >();

    for(int i = 0; i < n; i++)
        _platforms[QPair<int, int>(i, 0)] = randInt(0, n); // TODO: A corriger
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
