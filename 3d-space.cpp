#include <cmath>
#include "3d-space.h"

double length(Coord3D *p)
{
    const Coord3D& coord = *p;
    return std::sqrt(std::pow(coord.x, 2) + std::pow(coord.y, 2) + std::pow(coord.z, 2)); 
}

