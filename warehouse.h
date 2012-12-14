#ifndef WAREHOUSE_H
#define WAREHOUSE_H

#include <QMap>
#include <QPair>
#include <QtGlobal>
#include <QTime>
#include "ship.h"

class Warehouse
{
public:
    Warehouse(int n, int m);
    bool deplaceVaisseau(Ship* v, QPair<int, int> newPos);
private:
    inline int randInt(int low, int high){return qrand() % ((high + 1) - low) + low;}
    int _n;
    int _m;
    QMap<QPair<int, int>, Ship*> _warehouse;
    QMap<int, QPair<int, int> > _platforms;
    QPair<int, int> _posIni;
};

#endif // WAREHOUSE_H
