#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMap>
#include <QPair>
#include "ship.h"

class Warehouse
{
public:
    Warehouse(int n, int m);
    bool deplaceVaisseau(Ship* v, QPair<int, int> newPos);
private:
    int _n;
    int _m;
    QMap<QPair<int, int>, Ship*> _warehouse;
    QMap<int, QPair<int, int> > _platforms;
};

#endif // WAREHOUSE_H
