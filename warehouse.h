#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMap>
#include <QPair>
#include "ship.h"

class Warehouse
{
public:
  Warehouse* getInstance();
private:
  bool deplaceVaisseau(Ship* v, QPair<int, int> newPos);
 inline QPair<int, int> getInitPos(){return _posIni;}
    int _n;
    int _m;
     Warehouse(int n, int m);
    Warehouse* uniqueInstance;
    QMap<QPair<int, int>, Ship*> _warehouse;
    QMap<int, QPair<int, int> > _platforms;
    QPair<int, int> _posIni;
};

#endif // WAREHOUSE_H
