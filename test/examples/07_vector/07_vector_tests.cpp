#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test vector val, ref, and const params")
{
	vector<int> n1 (0, 1, 2);
	vector<int> n2 (0, 1, 2);
	vector<int> n3 (0, 1, 2);

	vector<int> n1_expected (0, 1, 2);
	vector<int> n2_expected (-100, 1, 2);
	vector<int> n3_expected (0, 1, 2);

	vector_val_ref_params(n1, n2, n3);

	REQUIRE(n1 == n1_expected);
	REQUIRE(n2 == n2_expected);
	REQUIRE(n3 == n3_expected);
}
TEST_CASE("Test vectart val and ref params")
{
	vector<int> v1{1, 2, 3} ;
	vector<int> v1_expected {1, 2, 3};
	iterate_vector_val_param(v1);

	REQUIRE(v1 == v1_expected);
}