#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMap>
 #include <QPair>
#include "ship.h"

class Warehouse
{
public:
    Warehouse(int n, int m);
    void deplaceVaisseau(Ship* v,int x, int y);
private:
    int _n;
    int _m;
    QMap<int, QMap<int, Ship*> > _warehouse;
};

#endif // WAREHOUSE_H
