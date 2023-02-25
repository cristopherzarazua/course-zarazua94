#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get gross pay default parameters")
{
	REQUIRE(get_gross_pay() == 600);
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40, 10) == 400);
}

TEST_CASE("verify get gross pay with double")
{
	REQUIRE(get_gross_pay(40,7.5) ==300);
}

TEST_CASE("Verify oiverloaded get gross pay")
{
	REQUIRE(get_gross_pay(40, 10, 100) == 401);
}