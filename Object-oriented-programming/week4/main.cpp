#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

#include "Vector.h"
#include "Vector.cpp"

TEST_CASE("Adding element")
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    CHECK(v.getSize() == 5);
    CHECK(v.getCapacity() == 8);

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    CHECK(v.getSize() == 9);
    CHECK(v.getCapacity() == 16);
}

TEST_CASE("Delete element")
{
    Vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    CHECK(v.getSize() == 5);
    CHECK(v.getCapacity() == 8);

    v.pop_back();
    CHECK(v.getSize() == 4);

    v.pop_back();
    CHECK(v.getSize() == 3);
}

TEST_CASE("Indexing")
{
    Vector<int> v;
    v.push_back(72034);
    v.push_back(72033);
    v.push_back(72029);
    v.push_back(72030);
    v.push_back(72029);

    CHECK(v[2] == 72029);
    CHECK(v[0] == 72034);
    CHECK(v[3] == 72030);
}

TEST_CASE("Copying vectors")
{
    Vector<int> v;
    v.push_back(72034);
    v.push_back(72033);
    v.push_back(72029);
    v.push_back(72030);
    v.push_back(72029);

    std::cout << v << std::endl;
    
    Vector<int> v1(v);
    CHECK(v1.getSize() == 5);
    CHECK(v1.getCapacity() == 8);

    Vector<int> v2;
    CHECK(v2.isEmpty());
    v2 = v;
    CHECK(v2.getSize() == 5);
}

int main()
{
    doctest::Context().run();    
    return 0;
}