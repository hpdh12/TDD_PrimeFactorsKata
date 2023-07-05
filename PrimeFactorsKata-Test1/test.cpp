#include "pch.h"
#include "../PrimeFactorsKata/prime-factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactorTest, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST(PrimeFactorTest, Of2) {
	PrimeFactor primeFactor;
	vector<int> expected = {2};

	EXPECT_EQ(expected, primeFactor.of(2));
}