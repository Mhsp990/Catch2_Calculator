
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Calculator.cpp"
#include "calculator.hpp"
//Test
TEST_CASE("Calculator Operations", "[calculator]") {
    SECTION("Addition") {
        REQUIRE(Calculator::add(2, 3) == 4);
        REQUIRE(Calculator::add(-2, 2) == 0);
        REQUIRE(Calculator::add(0, 0) == 0);
    }

    SECTION("Subtraction") {
        REQUIRE(Calculator::subtract(5, 3) == 2);
        REQUIRE(Calculator::subtract(0, 0) == 0);
    }

    SECTION("Multiplication") {
        REQUIRE(Calculator::multiply(2, 3) == 6);
        REQUIRE(Calculator::multiply(4, 0) == 0);
    }

    SECTION("Division") {
        REQUIRE(Calculator::divide(6, 3) == 2);
        REQUIRE(Calculator::divide(5, 2) == Approx(2.5));
        REQUIRE_THROWS_AS(Calculator::divide(4, 0), std::invalid_argument);
    }
}
