#include "warehouse.h"

Warehouse::Warehouse(int n, int m) : _n(n), _m(m)
{
    _warehouse = new QMap<int, QMap<int, Ship*>*>;

    for(int i = 0; i < m; i++)
    {
        _warehouse[i] = new QMap<int, Ship*>;
    }
}
