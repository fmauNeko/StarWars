#include "warehouse.h"

Warehouse::Warehouse(int n, int m) : _n(n), _m(m)
{
    _warehouse = QMap<QPair<int, int>, Ship*>();
}

bool Warehouse::deplaceVaisseau(Ship* v, QPair<int, int> newPos){

  if(_warehouse[newPos]==NULL){
      _warehouse[v->getPos()]=NULL;
      v->setPos(newPos);
      _warehouse[newPos]=v;
      return true;
    }
  else
    return false;
}
