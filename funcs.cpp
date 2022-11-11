#include <iostream>
#include "3d-space.h"
#include "funcs.h"

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    return length(p1) > length(p2) ? p1 : p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
    ppos->x += pvel->x * dt;
    ppos->y += pvel->y * dt;
    ppos->z += pvel->z * dt;
}

Coord3D* createCoord3D(double x, double y, double z)
{
    return new Coord3D{x, y, z};
}

void deleteCoord3D(Coord3D *p)
{
    delete p;
}
