#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include <string>
#include <iostream>
#include <vector>
#include "../src/DynamicArray.hpp"

TEST_CASE("Can create new dynamic array"){
    DynamicArray a;
    REQUIRE(a.getSize() == 0);
}
TEST_CASE("Can push and get items into/from dynamic array"){
    DynamicArray a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    REQUIRE(a.get(2) == 3);
}
TEST_CASE("Can expand dynamic array size"){
    DynamicArray a;
    a.push_back(1);
    a.push_back(2);
    REQUIRE(a.getSize() == 2);
    a.push_back(3);
    REQUIRE(a.getSize() == 3);
}