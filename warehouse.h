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
    static Warehouse* getInstance(int n, int m)
    {
        if(_uniqueInstance==NULL)
            _uniqueInstance=new Warehouse(n,m);
        return _uniqueInstance;
    }

    int getDock(Ship* ship);
    QPair<int, int> getDockPosition(int numero);
    bool deplaceVaisseau(Ship* v, QPair<int, int> newPos);
    void assigneQuai(Ship* v);
    void collision(Ship* s1, Ship* s2);
    inline QPair<int, int> getInitialPosition(){return _posIni;}
private:
    int _n;
    int _m;
    static Warehouse* _uniqueInstance;
    QMap<QPair<int, int>, Ship*> _warehouse;
    QMap<int, QPair<int, int> > _platforms;
    QMap<int, Ship*> _assignedPlatforms;
    QPair<int, int> _posIni;

    Warehouse(int n, int m);

    inline int randInt(int low, int high){return qrand() % ((high + 1) - low) + low;}
};

#endif // WAREHOUSE_H
