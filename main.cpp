#include <iostream>

#include "coord3d.h"
#include "3d-space.h"
#include "funcs.h"

template<typename T>
void PRINTLN(T x)
{
    std::cout << x << '\n';
}

int main()
{
    Coord3D p1{10, 20, 30};
    Coord3D p2{0, 3, 4};
    Coord3D p3{10, 20, 30};
    Coord3D p4{-20, 21, -22};

    PRINTLN(length(&p1)); // 37.4166

    PRINTLN(&p3);
    PRINTLN(fartherFromOrigin(&p3, &p4)); // p3

    move(&p1, &p2, 3);
    PRINTLN(p1); // 10 29 42

    auto p0 = createCoord3D(10, 20, 30);
    auto v0 = createCoord3D(5.5, -1.4, 7.77);
    move(p0, v0, 10.0);
    PRINTLN(*p0); // 65 6 107.7
    PRINTLN(*v0);
    deleteCoord3D(p0);
    deleteCoord3D(v0);

    return 0;
}
