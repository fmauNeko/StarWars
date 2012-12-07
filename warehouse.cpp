#include "warehouse.h"

Warehouse::Warehouse(int n, int m) : _n(n), _m(m)
{
    _warehouse = QMap<int, QMap<int, Ship*> >();

    for(int i = 0; i < m; i++)
    {
        _warehouse[i] = QMap<int, Ship*>();
    }
}

bool Warehouse::deplaceVaisseau(Ship* v,int x, int y){

  if(_warehouse[x][y]==NULL){
      _warehouse[v->getx ()][v->gety ()]=NULL;
      v->setx (x);
      v->sety (y);
      _warehouse[x][y]=v;
      return true;
    }
  else
    return false;
}
