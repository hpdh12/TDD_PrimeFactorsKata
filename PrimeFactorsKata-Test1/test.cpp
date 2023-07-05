#include "pch.h"
#include "../PrimeFactorsKata/prime-factors.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactorTest, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFactor.of(1));
}