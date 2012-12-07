#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMap>

#include "ship.h"

class Warehouse
{
public:
    Warehouse(int n, int m);
    bool deplaceVaisseau(Ship* v,int x, int y);
private:
    int _n;
    int _m;
    QPair<int, int> _posIni;
    QMap<int, QMap<int, Ship*> > _warehouse;
};

#endif // WAREHOUSE_H
