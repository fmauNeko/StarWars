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
    Warehouse* getInstance(int n, int m);
private:
    int _n;
    int _m;
    Warehouse* _uniqueInstance;
    QMap<QPair<int, int>, Ship*> _warehouse;
    QMap<int, QPair<int, int> > _platforms;
    QMap<int, Ship*> _assignedPlatforms;
    QPair<int, int> _posIni;

    Warehouse(int n, int m);

    inline int randInt(int low, int high){return qrand() % ((high + 1) - low) + low;}
    bool deplaceVaisseau(Ship* v, QPair<int, int> newPos);
    void assigneQuai(Ship* v);
    inline QPair<int, int> getInitPos(){return _posIni;}
};

#endif // WAREHOUSE_H
