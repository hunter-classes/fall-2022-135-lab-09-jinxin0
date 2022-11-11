#include <typeinfo>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "3d-space.h"
#include "funcs.h"

Coord3D p1{10, 20, 30};
Coord3D p2{0, 3, 4};
Coord3D p3{1, 2, 2};
Coord3D p4{-20, 21, -22};

TEST_CASE("Task A")
{
    CHECK(length(&p3) == 3);
    CHECK(length(&p2) == 5);
}

TEST_CASE("Task B")
{
    CHECK(fartherFromOrigin(&p1, &p4) == &p1);
    CHECK(fartherFromOrigin(&p1, &p2) == &p1);
}

TEST_CASE("Task C")
{
    auto p0 = p1;
    move(&p0, &p2, 3);
    CHECK(p0 == Coord3D{10, 29, 42});
}

TEST_CASE("Task E")
{
    auto p0 = createCoord3D(1, 2, 3);
    CHECK(typeid(decltype(p0)) == typeid(Coord3D*));
    CHECK(*p0 == Coord3D{1, 2, 3});
    deleteCoord3D(p0);
}
