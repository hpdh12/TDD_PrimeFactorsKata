#include "pch.h"
#include "../PrimeFactorsKata/prime-factors.cpp"

#include <vector>
using namespace std;

class PrimeFactorFixture : public testing::Test
{
public:
	PrimeFactor primeFactor;
};

TEST_F(PrimeFactorFixture, Of1) {
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFactorFixture, Of2) {
	vector<int> expected = {2};

	EXPECT_EQ(expected, primeFactor.of(2));
}