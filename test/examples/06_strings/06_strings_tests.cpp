#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
#include "for_ranged_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string functions parameters val and ref")
{
	string str1 = "C++";
	string str2 = "Java";
	string str3 = "Python";
	
	str_val_ref_param(str1, str2, str3);

	REQUIRE(str1 == "C++");
	REQUIRE(str2 == "changed");
	REQUIRE(str3 == "Python");
}

TEST_CASE("Test string value parameter w for range")
{
	string str = "C++";
	iterate_string_val_param(str);

	REQUIRE(str == "C++");
}

TEST_CASE("Test string ref parameter w for range")
{
	string str = "C++";
	iterate_string_ref_param(str);

	REQUIRE(str == "zzz");
}