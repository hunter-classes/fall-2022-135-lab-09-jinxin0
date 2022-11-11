#pragma once

#include <iostream>

class Coord3D {
public:
    double x;
    double y;
    double z;

    bool operator==(const Coord3D& other)
    {
        return other.x == x && other.y == y && other.z == z;
    }

    friend std::ostream& operator<<(std::ostream& out, const Coord3D& c)
    {
        out << c.x << ", " << c.y << ", " << c.z;
        return out;
    }
};
